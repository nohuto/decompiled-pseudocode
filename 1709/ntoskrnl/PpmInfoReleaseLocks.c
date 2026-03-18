/*
 * XREFs of PpmInfoReleaseLocks @ 0x1404E1168
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404DEB98 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
