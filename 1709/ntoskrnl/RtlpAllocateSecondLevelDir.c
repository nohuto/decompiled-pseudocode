/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14010219C
 * Callers:
 *     RtlExpandHashTable @ 0x1401019A0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140102000 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
