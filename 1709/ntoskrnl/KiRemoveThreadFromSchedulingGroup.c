/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x1400D2520
 * Callers:
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400D2460 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400D269C (KeUpdateThreadSchedulingProperties.c)
 *     KiAddThreadToPrcbQueue @ 0x1400D2720 (KiAddThreadToPrcbQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D29C0 (KiRemoveThreadFromScbQueue.c)
 */

volatile signed __int64 *__fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v3; // rdx
  volatile signed __int64 *result; // rax
  char v5; // bp
  __int64 v6; // rdx
  char v7; // r14
  __int64 v8; // rsi
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  struct _KPRCB *v11; // [rsp+70h] [rbp+18h] BYREF
  volatile signed __int64 *v12; // [rsp+78h] [rbp+20h] BYREF

  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = CurrentPrcb;
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    _enable();
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v9);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v3) = 2;
    result = (volatile signed __int64 *)KeUpdateThreadSchedulingProperties(a1, v3, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    v5 = 0;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KiAcquireThreadStateLock(a1, (__int64 *)&v11, (volatile signed __int32 **)&v12);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue(v11, *(_QWORD *)(a1 + 1496), a1);
      v5 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v8 = (__int64)v11;
    LOBYTE(v6) = v7;
    KeUpdateThreadSchedulingProperties(a1, v6, v11);
    if ( v5 )
      KiAddThreadToPrcbQueue(v8, a1, *(char *)(a1 + 195), 0, 0);
    if ( v8 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
    result = v12;
    if ( v12 )
      _InterlockedAnd64(v12, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
