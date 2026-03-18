/*
 * XREFs of VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x14077D310
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x14077DC74 (ViResourceAcquireSanityChecks.c)
 */

__int64 __fastcall VerifierExAcquireResourceExclusiveLiteNoReboot(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvExAcquireResourceExclusiveLite)(a1, v4);
}
