/*
 * XREFs of RtlInsertEntryHashTable @ 0x14001AAC0
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 *     SepGetCachedHandlesEntry @ 0x140563D30 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140731478 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x140731814 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpGetChainHead @ 0x14001ABBC (RtlpGetChainHead.c)
 *     RtlpPopulateContext @ 0x140103E38 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  _QWORD *ChainHead; // rax
  unsigned __int64 v10; // r10
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *Flink; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  Entry->Signature = Signature;
  v4 = Context;
  ++HashTable->NumEntries;
  if ( Context )
  {
    if ( !Context->ChainHead )
      RtlpPopulateContext(HashTable, Context);
  }
  else
  {
    v7 = (69069 * ((unsigned int)Signature >> HashTable->Shift) + 1) & 0xFFFF0000 | ((1103515245
                                                                                    * ((unsigned int)Signature >> HashTable->Shift)
                                                                                    + 12345) >> 16);
    v8 = v7 & HashTable->DivisorMask;
    if ( (unsigned int)v8 < HashTable->Pivot )
      v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
    ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, v8);
    v11 = ChainHead;
    if ( (_QWORD *)*ChainHead != ChainHead )
    {
      do
      {
        v12 = (_QWORD *)*v11;
        v13 = *(_QWORD *)(*v11 + 16LL);
        if ( v13 && v13 >= v10 )
          break;
        v11 = (_QWORD *)*v11;
      }
      while ( (_QWORD *)*v12 != ChainHead );
    }
    v17[0] = ChainHead;
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)v17;
    v17[1] = v11;
    v17[2] = v10;
  }
  if ( v4->ChainHead->Flink == v4->ChainHead )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  Flink = PrevLinkage->Flink;
  if ( PrevLinkage->Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Entry->Linkage.Blink = PrevLinkage;
  Entry->Linkage.Flink = Flink;
  Flink->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}
