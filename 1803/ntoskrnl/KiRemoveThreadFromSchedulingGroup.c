/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x1400C2518
 * Callers:
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C2454 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A8C4C (KiAddThreadToPrcbQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400A91B0 (KiRemoveThreadFromScbQueue.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400C268C (KeUpdateThreadSchedulingProperties.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rdx
  struct _KPRCB *v5; // rbp
  __int64 v6; // rdx
  char v8; // bp
  __int64 v9; // rdx
  char v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  struct _KPRCB *v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v15 = CurrentPrcb;
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    _enable();
    v5 = KeGetCurrentPrcb();
    v13 = 0;
    while ( 1 )
    {
      LOBYTE(v4) = 1;
      KiSetVpThreadSpinLockCount(v5, v4);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v5, 0LL);
      do
        KeYieldProcessorEx(&v13);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v6) = 2;
    KeUpdateThreadSchedulingProperties(a1, v6, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    return KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    v8 = 0;
    v14 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = KiAcquireThreadStateLock(a1, &v15, &v16);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue((__int64)v15, *(_QWORD *)(a1 + 1496), a1, *(_BYTE *)(a1 + 195));
      v8 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v11 = (__int64)v15;
    LOBYTE(v9) = v10;
    KeUpdateThreadSchedulingProperties(a1, v9, v15);
    if ( v8 )
      KiAddThreadToPrcbQueue(v11, a1, *(char *)(a1 + 195), 0, 0);
    KiReleaseThreadStateLock(v12, v11, v16);
    return KiReleaseThreadLockSafe(a1);
  }
}
