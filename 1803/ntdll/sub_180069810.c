/*
 * XREFs of sub_180069810 @ 0x180069810
 * Callers:
 *     RtlIsNormalizedString @ 0x180001EB0 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x180069450 (RtlNormalizeString.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180069928 @ 0x180069928 (sub_180069928.c)
 *     sub_180069950 @ 0x180069950 (sub_180069950.c)
 *     ZwGetNlsSectionPtr @ 0x18009C8F0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall sub_180069810(unsigned int a1, __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  unsigned __int64 v13; // rbx
  int v14; // ebp
  unsigned __int64 *v15; // rax
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)qword_18015A560, (unsigned __int64)a2, a3, a4);
  v7 = sub_180069928(a1);
  if ( v7 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(qword_18015A560);
    result = 0LL;
    *a2 = v7;
    return result;
  }
  LODWORD(v6) = v6 ^ 0x100;
  v9 = sub_180069928(v6);
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
      v14 = sub_180069950(a1, v17, v16, Heap + 24);
      if ( v14 >= 0 )
      {
        *(_DWORD *)(v13 + 16) = a1;
        v15 = (unsigned __int64 *)off_180156698[0];
        if ( *(_UNKNOWN ***)off_180156698[0] != &off_180156690 )
          __fastfail(3u);
        *(_QWORD *)v13 = &off_180156690;
        *(_QWORD *)(v13 + 8) = v15;
        *v15 = v13;
        off_180156698[0] = (_UNKNOWN **)v13;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
      NlsSectionPtr = v14;
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
  RtlReleaseSRWLockExclusive(qword_18015A560);
  return (unsigned int)NlsSectionPtr;
}
