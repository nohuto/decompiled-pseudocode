/*
 * XREFs of ZwSetUuidSeed @ 0x1401AA9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetUuidSeed(PUCHAR UuidSeed)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(UuidSeed, v1, v2);
}
