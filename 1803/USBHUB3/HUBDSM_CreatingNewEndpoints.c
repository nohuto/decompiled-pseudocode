/*
 * XREFs of HUBDSM_CreatingNewEndpoints @ 0x1C001DAA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_CreateEndpointsInUCX @ 0x1C0020EE4 (HUBUCX_CreateEndpointsInUCX.c)
 */

__int64 __fastcall HUBDSM_CreatingNewEndpoints(__int64 a1)
{
  return HUBUCX_CreateEndpointsInUCX(*(_QWORD *)(a1 + 960));
}
