/*
 * XREFs of HUBPDO_NoPingResponse @ 0x1C0016F50
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 */

void __fastcall HUBPDO_NoPingResponse(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 504, 4059);
}
