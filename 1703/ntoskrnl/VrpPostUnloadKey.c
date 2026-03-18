/*
 * XREFs of VrpPostUnloadKey @ 0x14067C4D8
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpPostUnloadKey(__int64 a1, __int64 a2)
{
  GUID v5; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v5.Data1 = 0LL;
  *(_QWORD *)v5.Data4 = 0LL;
  EtwActivityIdControl(3u, &v5);
  if ( *(int *)(a1 + 8) >= 0 )
    VrpDestroyNamespaceNode((ULONGLONG *)a2, *(_QWORD *)(a1 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
  KeAbPostRelease(a2 + 16);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
