/*
 * XREFs of StorPortGetVirtualAddress @ 0x1C0032E80
 * Callers:
 *     StorPortGetVirtualAddressVrfy @ 0x1C0067340 (StorPortGetVirtualAddressVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
