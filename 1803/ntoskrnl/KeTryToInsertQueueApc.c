/*
 * XREFs of KeTryToInsertQueueApc @ 0x140245940
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1402B4FB4 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140043A70 (KiInsertQueueApc.c)
 *     KiTryToAcquireThreadLock @ 0x1400A73A8 (KiTryToAcquireThreadLock.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v7; // bl
  unsigned __int8 EffectiveIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v11; // bp
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !KeIsThreadRunning(v3) )
    return 0;
  EffectiveIrql = KeGetEffectiveIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = EffectiveIrql;
  if ( !KiTryToAcquireThreadLock(v3, &v12) )
    return 0;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 82) )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v11);
  }
  KiReleaseThreadLockSafe(v3);
  return v7;
}
