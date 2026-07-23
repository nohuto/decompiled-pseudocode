/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x14017E6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Luid);
}
