/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1400C2454
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1400C23A4 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400A7600 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400C268C (KeUpdateThreadSchedulingProperties.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v6; // rsi
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rbp
  char v10; // bl
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v13; // r8
  int v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0LL;
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
  v7 = KiAcquireThreadStateLock(a1, &v16, &v15);
  *(_QWORD *)(a1 + 104) = v2;
  LOBYTE(v8) = v7;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v9 = v16;
  v10 = v7;
  KeUpdateThreadSchedulingProperties(a1, v8, v16);
  v12 = v15;
  if ( v10 == 1 && v15 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    v6 = KeGetCurrentPrcb();
    KiRemoveThreadFromSharedReadyQueue(v15, a1, *(_BYTE *)(a1 + 195));
    v9 = v16;
    *(_BYTE *)(a1 + 388) = 7;
  }
  KiReleaseThreadStateLock(v11, v9, v12);
  result = KiReleaseThreadLockSafe(a1);
  if ( v6 )
    return KiDeferredReadyThread(v6, a1, v13);
  return result;
}
