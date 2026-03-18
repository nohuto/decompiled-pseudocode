/*
 * XREFs of HUBDSM_WritingCustomPropertiesInRegistry @ 0x1C001E130
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C006E3E4 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 */

__int64 __fastcall HUBDSM_WritingCustomPropertiesInRegistry(__int64 a1)
{
  return HUBMISC_ParseAndWriteCustomPropertiesInRegistry(*(_QWORD *)(a1 + 960));
}
