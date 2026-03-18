/*
 * XREFs of PpmUpdateIdleDomains @ 0x14023C8A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1)
{
  int v2; // ebx
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-C8h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  if ( a1
    && (KeAndAffinityEx((unsigned __int16 *)(a1 + 8), (unsigned __int16 *)KeActiveProcessors, v4),
        (unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(a1 + 8), v4)) )
  {
    v2 = PopExecuteOnTargetProcessors(a1 + 8, (__int64)PpmInstallNewIdleDomains, a1, a1 + 8);
    if ( v2 >= 0 )
      v2 = 0;
  }
  else
  {
    v2 = -1073741811;
  }
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return (unsigned int)v2;
}
