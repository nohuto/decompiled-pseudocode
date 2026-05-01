/*
 * XREFs of PsmHamTerminateHost @ 0x18004CD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsmHamTerminateHost(__int64 a1, unsigned int a2)
{
  return HamSrvTerminateHostForBi((char *)RmSvcGlobals + 1312, a1, a2);
}
