/*
 * XREFs of HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x1C001AD20
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0013174 (HUBPDO_ValidateSelectConfigUrb.c)
 */

__int64 __fastcall HUBDSM_ValidatingSelectConfigUrbFromConfigured(__int64 a1)
{
  return HUBPDO_ValidateSelectConfigUrb(*(_QWORD *)(a1 + 960));
}
