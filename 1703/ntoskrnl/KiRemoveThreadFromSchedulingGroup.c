/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x140120D30
 * Callers:
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x140120BE4 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KiRemoveThreadFromScbQueue @ 0x140114C6C (KiRemoveThreadFromScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x14011F700 (KiAddThreadToPrcbQueue.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140120EB0 (KeUpdateThreadSchedulingProperties.c)
 */

volatile signed __int64 *__fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  char v2; // bp
  __int64 v3; // rdx
  char v4; // r14
  __int64 v5; // rsi
  volatile signed __int64 *result; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v8; // rdx
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
    LOBYTE(v8) = 2;
    result = (volatile signed __int64 *)KeUpdateThreadSchedulingProperties(a1, v8, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    v2 = 0;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v4 = KiAcquireThreadStateLock(a1, (__int64 *)&v11, (volatile signed __int32 **)&v12);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue((__int64)v11, *(_QWORD *)(a1 + 1496), a1, (unsigned int)*(char *)(a1 + 195));
      v2 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    v5 = (__int64)v11;
    LOBYTE(v3) = v4;
    KeUpdateThreadSchedulingProperties(a1, v3, v11);
    if ( v2 )
      KiAddThreadToPrcbQueue(v5, a1, *(char *)(a1 + 195), 0, 0);
    if ( v5 )
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
    result = v12;
    if ( v12 )
      _InterlockedAnd64(v12, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
