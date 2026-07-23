/*
 * XREFs of ZwSetUuidSeed @ 0x140180DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetUuidSeed(PUCHAR UuidSeed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UuidSeed);
}
