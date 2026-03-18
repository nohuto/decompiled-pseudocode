/*
 * XREFs of VmUnsecureBackingMemory @ 0x1407A0CB0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
