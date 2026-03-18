/*
 * XREFs of KxFlushSingleTb @ 0x1400CA228
 * Callers:
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14005B510 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14005B700 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v4; // edx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 *v7; // rbx
  __int64 result; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v10; // [rsp+40h] [rbp-E8h] BYREF
  int v11; // [rsp+48h] [rbp-E0h]
  unsigned __int16 v12[88]; // [rsp+50h] [rbp-D8h] BYREF

  v11 = a2;
  v3 = 2147483650LL;
  v10 = a1;
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
    KeCopyAffinityEx((__int64)v12, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    v7 = v12;
    KeRemoveProcessorAffinityEx(v12, CurrentPrcb->Number);
    v4 = 0;
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v4,
    (__int64)v7,
    (int)&v10,
    0LL,
    v3,
    (__int64 (__fastcall *)(_QWORD))KiFlushSingleTbWorker,
    (__int64)&v10);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
