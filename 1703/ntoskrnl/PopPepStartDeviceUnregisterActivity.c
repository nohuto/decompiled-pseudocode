/*
 * XREFs of PopPepStartDeviceUnregisterActivity @ 0x14022F370
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

char __fastcall PopPepStartDeviceUnregisterActivity(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  return 0;
}
