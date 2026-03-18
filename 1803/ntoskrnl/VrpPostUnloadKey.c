/*
 * XREFs of VrpPostUnloadKey @ 0x14070B498
 * Callers:
 *     VrpRegistryCallback @ 0x140707D90 (VrpRegistryCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     EtwActivityIdControl @ 0x14012A620 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpPostUnloadKey(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  GUID v8; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v8.Data1 = 0LL;
  *(_QWORD *)v8.Data4 = 0LL;
  EtwActivityIdControl(3u, &v8);
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    if ( *(int *)(a1 + 8) >= 0 )
      VrpDestroyNamespaceNode((ULONGLONG *)a2, v6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16), v6, v4, v5);
    KeAbPostRelease(a2 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
