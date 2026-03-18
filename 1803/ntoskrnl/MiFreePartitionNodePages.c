/*
 * XREFs of MiFreePartitionNodePages @ 0x14026F120
 * Callers:
 *     MiFreePartitionTree @ 0x14026F18C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionNodePages(__int16 *a1, __int64 a2, char a3)
{
  unsigned int v6; // edx
  __int16 *v8[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, 0x38uLL);
  v8[0] = a1;
  v6 = 1;
  if ( (a3 & 4) == 0 )
    v6 = 2 * ((a3 & 1) == 0);
  MiActOnPartitionNodePages(a2, v6, v8);
  return HIDWORD(v8[2]);
}
