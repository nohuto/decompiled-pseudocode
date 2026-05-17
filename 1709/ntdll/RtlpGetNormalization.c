/*
 * XREFs of RtlpGetNormalization @ 0x180080AA0
 * Callers:
 *     RtlIsNormalizedString @ 0x1800018C0 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x180080670 (RtlNormalizeString.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NormalizationList__Lookup @ 0x180080BB8 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x180080BE0 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x1800A1ED0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  unsigned __int64 v13; // rbx
  int Tables; // ebp
  unsigned __int64 *v15; // rax
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&NormalizationListLock, (unsigned __int64)a2, a3, a4);
  v7 = NormalizationList__Lookup(a1);
  if ( v7 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&NormalizationListLock);
    result = 0LL;
    *a2 = v7;
    return result;
  }
  LODWORD(v6) = v6 ^ 0x100;
  v9 = NormalizationList__Lookup(v6);
  if ( v9 )
  {
    v17 = *(_QWORD *)(v9 + 8);
    v16 = *(_QWORD *)(v9 + 16);
LABEL_6:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 144LL);
    v13 = Heap;
    if ( Heap )
    {
      v7 = Heap + 24;
      Tables = Normalization__LoadTables(a1, v17, v16, Heap + 24);
      if ( Tables >= 0 )
      {
        *(_DWORD *)(v13 + 16) = a1;
        v15 = (unsigned __int64 *)off_180159688[0];
        if ( *(_UNKNOWN ***)off_180159688[0] != &NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v13 = &NormalizationListHead;
        *(_QWORD *)(v13 + 8) = v15;
        *v15 = v13;
        off_180159688[0] = (_UNKNOWN **)v13;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_14;
  }
  v10 = a1;
  LODWORD(v10) = a1 & 0xFFFFFEFF;
  NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v10, 0LL, &v17, &v16);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_6;
LABEL_14:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}
