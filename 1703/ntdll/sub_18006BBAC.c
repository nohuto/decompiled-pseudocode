/*
 * XREFs of sub_18006BBAC @ 0x18006BBAC
 * Callers:
 *     RtlIsNormalizedString @ 0x180002AB0 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x18006B080 (RtlNormalizeString.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18006BCD4 @ 0x18006BCD4 (sub_18006BCD4.c)
 *     sub_18006BCFC @ 0x18006BCFC (sub_18006BCFC.c)
 *     ZwGetNlsSectionPtr @ 0x1800A70F0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall sub_18006BBAC(unsigned int a1, __int64 *a2)
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

  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801593D8);
    v5 = sub_18006BCD4(a1);
    if ( v5 )
    {
LABEL_3:
      RtlReleaseSRWLockExclusive(&stru_1801593D8);
      result = 0LL;
      *a2 = v5;
      return result;
    }
    LODWORD(v4) = v4 ^ 0x100;
    v7 = sub_18006BCD4(v4);
    if ( v7 )
    {
      SectionPointer = *(PVOID *)(v7 + 8);
      SectionSize = *(_QWORD *)(v7 + 16);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive(&stru_1801593D8);
        return (unsigned int)NlsSectionPtr;
      }
    }
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v10 = Heap;
    if ( Heap )
    {
      v5 = (__int64)(Heap + 24);
      v11 = sub_18006BCFC(a1, SectionPointer, SectionSize, Heap + 24);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v10 + 4) = a1;
        v12 = off_180155648[0];
        if ( *(_UNKNOWN ***)off_180155648[0] != &off_180155640 )
          __fastfail(3u);
        *(_QWORD *)v10 = &off_180155640;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        off_180155648[0] = v10;
        goto LABEL_3;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = v11;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_11;
  }
  return 3221225712LL;
}
