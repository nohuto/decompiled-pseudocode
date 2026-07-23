/*
 * XREFs of ZwSetUuidSeed @ 0x1401AA9E0
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
