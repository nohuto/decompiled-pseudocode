/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14003CEC4
 * Callers:
 *     RtlpCreateHashTable @ 0x14003CD28 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x140150B90 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
