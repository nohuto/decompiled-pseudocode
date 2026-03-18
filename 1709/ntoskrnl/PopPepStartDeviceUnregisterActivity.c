/*
 * XREFs of PopPepStartDeviceUnregisterActivity @ 0x1402433A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

char __fastcall PopPepStartDeviceUnregisterActivity(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  return 0;
}
