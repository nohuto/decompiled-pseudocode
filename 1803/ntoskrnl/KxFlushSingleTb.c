/*
 * XREFs of KxFlushSingleTb @ 0x14003B08C
 * Callers:
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 *v7; // rbx
  __int64 result; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-128h] BYREF
  __int128 v10; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int16 v11[88]; // [rsp+50h] [rbp-D8h] BYREF

  DWORD2(v10) = a2;
  v3 = 2147483650LL;
  *(_QWORD *)&v10 = a1;
  v4 = 1;
  if ( a3 != 1 )
    v3 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    v7 = 0LL;
  }
  else
  {
    _InterlockedOr(v9, 0);
    KeCopyAffinityEx((__int64)v11, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    v7 = v11;
    KeRemoveProcessorAffinityEx(v11, CurrentPrcb->Number);
    v4 = 0;
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v4,
    v7,
    &v10,
    0LL,
    v3,
    (void (__fastcall *)(__int64))KiFlushSingleTbWorker,
    (__int64)&v10);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
