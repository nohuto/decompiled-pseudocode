/*
 * XREFs of HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach @ 0x1C001E490
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure @ 0x1C0022094 (HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure.c)
 */

__int64 __fastcall HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach(__int64 a1)
{
  return HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure(*(_QWORD *)(a1 + 960));
}
