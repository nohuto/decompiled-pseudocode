/*
 * XREFs of HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C000F5C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_IsD3ColdSupported @ 0x1C002C104 (HUBMISC_IsD3ColdSupported.c)
 */

__int64 __fastcall HUBPSM30_CheckingIsD3ColdIsEnabled(__int64 a1)
{
  return HUBMISC_IsD3ColdSupported(*(_QWORD *)(a1 + 960));
}
