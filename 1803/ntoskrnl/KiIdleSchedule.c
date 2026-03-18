/*
 * XREFs of KiIdleSchedule @ 0x1400605A0
 * Callers:
 *     KiIdleLoop @ 0x1401AE5C0 (KiIdleLoop.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402487EC (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v10);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 11883) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v4 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v4, 0LL);
  _enable();
  LOBYTE(v5) = 1;
  v6 = KiSearchForNewThread(a1, v5);
  if ( v6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest(a1);
    v8 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v7) = 1;
    KiStartThreadCycleAccumulation(a1, v8, v7);
    _enable();
  }
  return v6;
}
