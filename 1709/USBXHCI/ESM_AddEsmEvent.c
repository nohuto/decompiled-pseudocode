/*
 * XREFs of ESM_AddEsmEvent @ 0x1C003DBD0
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C0019B40 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall ESM_AddEsmEvent(__int64 a1)
{
  return ESM_AddEvent((PVOID)(a1 + 288));
}
