/*
 * XREFs of HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C001B970
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C00265A4 (HUBMISC_GetGenericErrorResponseOnDescriptorFailure.c)
 */

__int64 __fastcall HUBDSM_ReturningErrorResponseOnProductStringQuery(__int64 a1)
{
  return HUBMISC_GetGenericErrorResponseOnDescriptorFailure(*(_QWORD *)(a1 + 960));
}
