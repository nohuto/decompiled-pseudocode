/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x1C0037780
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  return RaCallMiniportAdapterControl(a1 + 296);
}
