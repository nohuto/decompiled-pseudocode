/*
 * XREFs of HUBHSM_QueryingForHubHackFlags @ 0x1C0007990
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0069F2C (HUBFDO_QueryHubErrataFlags.c)
 */

__int64 __fastcall HUBHSM_QueryingForHubHackFlags(__int64 a1)
{
  return HUBFDO_QueryHubErrataFlags(*(_QWORD *)(a1 + 960));
}
