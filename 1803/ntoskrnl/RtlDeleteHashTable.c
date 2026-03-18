/*
 * XREFs of RtlDeleteHashTable @ 0x1401625B0
 * Callers:
 *     SepDeleteSessionLowboxEntries @ 0x1400C33BC (SepDeleteSessionLowboxEntries.c)
 *     RtlpCreateHashTable @ 0x140162330 (RtlpCreateHashTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x140613FF0 (SepInitializeLowBoxNumberTable.c)
 *     SepRmDestroyCapTable @ 0x140795780 (SepRmDestroyCapTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *Directory; // rbx
  unsigned int v3; // ebp
  PVOID *v4; // rsi

  Directory = HashTable->Directory;
  if ( HashTable->TableSize <= 0x80 )
  {
    if ( !Directory )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( Directory )
  {
    v3 = 0;
    v4 = (PVOID *)HashTable->Directory;
    do
    {
      if ( !*v4 )
        break;
      ExFreePoolWithTag(*v4, 0);
      ++v3;
      ++v4;
    }
    while ( v3 < 0x10 );
LABEL_3:
    ExFreePoolWithTag(Directory, 0);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    ExFreePoolWithTag(HashTable, 0);
}
