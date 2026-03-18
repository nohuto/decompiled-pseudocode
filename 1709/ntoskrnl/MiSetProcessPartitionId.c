/*
 * XREFs of MiSetProcessPartitionId @ 0x1400B7E78
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1452) = a2;
}
