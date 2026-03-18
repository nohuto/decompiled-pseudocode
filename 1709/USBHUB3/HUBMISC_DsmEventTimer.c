/*
 * XREFs of HUBMISC_DsmEventTimer @ 0x1C0026D30
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMISC_DsmEventTimer(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 504, 1002);
}
