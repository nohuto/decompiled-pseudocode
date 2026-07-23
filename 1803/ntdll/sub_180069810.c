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

__int64 __fastcall sub_180069810(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *Heap; // rax
  char *v10; // rbx
  int v11; // ebp
  _QWORD *v12; // rax
  __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&stru_18015A560);
  v5 = sub_180069928(a1);
  if ( v5 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&stru_18015A560);
    result = 0LL;
    *a2 = v5;
    return result;
  }
  LODWORD(v4) = v4 ^ 0x100;
  v7 = sub_180069928(v4);
  if ( v7 )
  {
    SectionPointer = *(PVOID *)(v7 + 8);
    SectionSize = *(_QWORD *)(v7 + 16);
LABEL_6:
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v10 = Heap;
    if ( Heap )
    {
      v5 = (__int64)(Heap + 24);
      v11 = sub_180069950(a1, SectionPointer, SectionSize, Heap + 24);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v10 + 4) = a1;
        v12 = off_180156698[0];
        if ( *(_UNKNOWN ***)off_180156698[0] != &off_180156690 )
          __fastfail(3u);
        *(_QWORD *)v10 = &off_180156690;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        off_180156698[0] = (_UNKNOWN **)v10;
        goto LABEL_3;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = v11;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_14;
  }
  NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_6;
LABEL_14:
  RtlReleaseSRWLockExclusive(&stru_18015A560);
  return (unsigned int)NlsSectionPtr;
}
