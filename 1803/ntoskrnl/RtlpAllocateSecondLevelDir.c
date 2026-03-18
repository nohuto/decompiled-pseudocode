/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1401624CC
 * Callers:
 *     RtlExpandHashTable @ 0x1400CBA10 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140162330 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
