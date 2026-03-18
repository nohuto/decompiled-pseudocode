/*
 * XREFs of HUBDSM_SettingExtPropDescSemaphoreForMsOs2 @ 0x1C001E010
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C006E324 (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 */

__int64 __fastcall HUBDSM_SettingExtPropDescSemaphoreForMsOs2(__int64 a1)
{
  return HUBMISC_SetExtPropDescSemaphoreInRegistry(*(_QWORD *)(a1 + 960));
}
