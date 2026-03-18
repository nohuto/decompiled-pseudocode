/*
 * XREFs of PpmInfoReleaseLocks @ 0x140519DCC
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140518648 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
