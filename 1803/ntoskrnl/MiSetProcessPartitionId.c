/*
 * XREFs of MiSetProcessPartitionId @ 0x140071958
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1454) = a2;
}
