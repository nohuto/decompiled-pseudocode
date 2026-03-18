/*
 * XREFs of RtlLookupEntryHashTable @ 0x14003D9B0
 * Callers:
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140461F4C (SepFindMatchingCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     SepIsValidProcUniqueLuid @ 0x1406F8570 (SepIsValidProcUniqueLuid.c)
 *     SepFindSharedSidEntry @ 0x1406F9998 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v3; // r10
  unsigned int Shift; // ecx
  unsigned int v7; // ecx
  __int64 v8; // r8
  char *Directory; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v10; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v11; // rdx
  _QWORD *v12; // rax
  ULONG_PTR v13; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  unsigned int v15; // ecx
  char v16; // [rsp+0h] [rbp-28h] BYREF

  v3 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v16;
  Shift = HashTable->Shift;
  if ( Context )
    v3 = Context;
  v7 = (69069 * ((unsigned int)Signature >> Shift) + 1) & 0xFFFF0000 | ((1103515245 * ((unsigned int)Signature >> Shift)
                                                                       + 12345) >> 16);
  v8 = v7 & HashTable->DivisorMask;
  if ( (unsigned int)v8 < HashTable->Pivot )
    v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
  if ( HashTable->TableSize > 0x80 )
  {
    _BitScanReverse(&v15, v8 + 128);
    v8 = ((_DWORD)v8 + 128) ^ (unsigned int)(1 << v15);
    Directory = (char *)*((_QWORD *)HashTable->Directory + v15 - 7);
  }
  else
  {
    Directory = (char *)HashTable->Directory;
  }
  v10 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&Directory[16 * v8];
  v11 = v10;
  if ( *v10 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v10 )
  {
    do
    {
      v12 = *v11;
      v13 = (*v11)->Signature;
      if ( v13 && v13 >= Signature )
        break;
      v11 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v11;
    }
    while ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v12 != v10 );
  }
  v3->ChainHead = (_LIST_ENTRY *)v10;
  v3->PrevLinkage = (_LIST_ENTRY *)v11;
  v3->Signature = Signature;
  result = *v11;
  if ( v10 == (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v11 || result->Signature != Signature )
    return 0LL;
  return result;
}
