/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1400D2460
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1400ACEB4 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400070C8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400D2520 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400D269C (KeUpdateThreadSchedulingProperties.c)
 */

unsigned __int64 __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rsi
  char v9; // bl
  __int64 v10; // r8
  volatile signed __int64 *v11; // r11
  int v12; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int64 *v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = 0LL;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = KiAcquireThreadStateLock(a1, &v14, (volatile signed __int32 **)&v13);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v7) = v6;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v8 = v14;
  v9 = v6;
  result = KeUpdateThreadSchedulingProperties(a1, v7, v14);
  v11 = v13;
  if ( v9 == 1 && v13 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = KiRemoveThreadFromSharedReadyQueue((__int64)v13, a1, *(_BYTE *)(a1 + 195));
    v8 = v14;
    *(_BYTE *)(a1 + 388) = 7;
  }
  if ( v8 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
    v11 = v13;
  }
  if ( v11 )
    _InterlockedAnd64(v11, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( CurrentPrcb )
    return KiDeferredReadyThread((__int64)CurrentPrcb, a1, v10);
  return result;
}
