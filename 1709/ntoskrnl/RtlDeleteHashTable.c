/*
 * XREFs of RtlDeleteHashTable @ 0x140124E50
 * Callers:
 *     RtlpCreateHashTable @ 0x140102000 (RtlpCreateHashTable.c)
 *     SepDeleteSessionLowboxEntries @ 0x140133A34 (SepDeleteSessionLowboxEntries.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405F0040 (SepInitializeLowBoxNumberTable.c)
 *     SepRmDestroyCapTable @ 0x140731E80 (SepRmDestroyCapTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *Directory; // rcx
  void *v3; // rdi
  unsigned int v4; // ebp
  PVOID *v5; // rsi

  if ( HashTable->TableSize <= 0x80 )
  {
    Directory = HashTable->Directory;
    if ( !Directory )
      goto LABEL_4;
    goto LABEL_3;
  }
  v3 = HashTable->Directory;
  if ( v3 )
  {
    v4 = 0;
    v5 = (PVOID *)HashTable->Directory;
    do
    {
      if ( !*v5 )
        break;
      ExFreePoolWithTag(*v5, 0);
      ++v4;
      ++v5;
    }
    while ( v4 < 0x10 );
    Directory = v3;
LABEL_3:
    ExFreePoolWithTag(Directory, 0);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    ExFreePoolWithTag(HashTable, 0);
}
