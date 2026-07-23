/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x1400A0EEC
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1404F0CC4 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x14006C5FC (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlEnumerateEntryHashTable @ 0x1400A0FE0 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400A1100 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x1400A1160 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1400A11B0 (RtlInitEnumerationHashTable.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void SepCleanupMarkedForDeletionEntries()
{
  _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  KIRQL v7; // bp
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v8; // rax
  unsigned int *v9; // rbx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  v0 = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v8 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v9 = (unsigned int *)v8;
    if ( !v8 )
      break;
    if ( LOBYTE(v8[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v8, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v9[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v6 = *((_QWORD *)v2 + 2);
        v7 = v3;
        *((_QWORD *)v2 + 1) = 0LL;
        if ( v6 )
        {
          AuthzBasepFreeSecurityAttributesList(v6, v4, v5);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        __writecr8(v7);
      }
      _bittestandreset(*(signed __int32 **)(SeLuidToIndexMapping + 24), v9[10]);
      ExFreePoolWithTag(v9, 0);
    }
  }
  RtlEndEnumerationHashTable(v0, &Enumerator);
}
