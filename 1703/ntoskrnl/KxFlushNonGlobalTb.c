/*
 * XREFs of KxFlushNonGlobalTb @ 0x140063D58
 * Callers:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400D8CD0 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSetTbFlushTimeStampBusy @ 0x140201190 (KiSetTbFlushTimeStampBusy.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _BYTE *v3; // rdi
  int v4; // edx
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v7[176]; // [rsp+40h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !(_DWORD)a1 )
  {
    _InterlockedOr(v6, 0);
    KeCopyAffinityEx(v7, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v3 = v7;
    KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
    v4 = 0;
LABEL_3:
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, v4, (_DWORD)v3, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
    goto LABEL_4;
  }
  LODWORD(v3) = 0;
  v4 = 1;
  if ( !KiKvaShadow )
    goto LABEL_3;
  if ( (unsigned __int8)KiSetTbFlushTimeStampBusy(a1, 1LL) )
  {
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, 1, 0, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
    _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
  }
LABEL_4:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
