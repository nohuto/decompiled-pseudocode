/*
 * XREFs of KxFlushNonGlobalTb @ 0x1400394C0
 * Callers:
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1400BAA80 (KxSetTimeStampBusy.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(int a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 *v3; // rdi
  unsigned int v4; // edx
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int16 v7[88]; // [rsp+40h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !a1 )
  {
    _InterlockedOr(v6, 0);
    KeCopyAffinityEx((__int64)v7, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    v3 = v7;
    KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
    v4 = 0;
    goto LABEL_7;
  }
  v3 = 0LL;
  v4 = 1;
  if ( !KiKvaShadow )
  {
LABEL_7:
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      v4,
      v3,
      0LL,
      0LL,
      1LL,
      (void (__fastcall *)(__int64))KiFlushProcessTbWorker,
      0LL);
    goto LABEL_5;
  }
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      1u,
      0LL,
      0LL,
      0LL,
      1LL,
      (void (__fastcall *)(__int64))KiFlushProcessTbWorker,
      0LL);
    _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
  }
LABEL_5:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
