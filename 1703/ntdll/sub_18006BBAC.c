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
  __int64 v8; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // rbx
  int v12; // ebp
  unsigned __int64 *v13; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(&qword_1801593D8);
    v5 = sub_18006BCD4(a1);
    if ( v5 )
    {
LABEL_3:
      RtlReleaseSRWLockExclusive(&qword_1801593D8);
      result = 0LL;
      *a2 = v5;
      return result;
    }
    LODWORD(v4) = v4 ^ 0x100;
    v7 = sub_18006BCD4(v4);
    if ( v7 )
    {
      v15 = *(_QWORD *)(v7 + 8);
      v14 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v8 = a1;
      LODWORD(v8) = a1 & 0xFFFFFEFF;
      NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v8, 0LL, &v15, &v14);
      if ( NlsSectionPtr < 0 )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive(&qword_1801593D8);
        return (unsigned int)NlsSectionPtr;
      }
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 144LL);
    v11 = Heap;
    if ( Heap )
    {
      v5 = Heap + 24;
      v12 = sub_18006BCFC(a1, v15, v14, Heap + 24);
      if ( v12 >= 0 )
      {
        *(_DWORD *)(v11 + 16) = a1;
        v13 = (unsigned __int64 *)off_180155648[0];
        if ( *(_UNKNOWN ***)off_180155648[0] != &off_180155640 )
          __fastfail(3u);
        *(_QWORD *)v11 = &off_180155640;
        *(_QWORD *)(v11 + 8) = v13;
        *v13 = v11;
        off_180155648[0] = (_UNKNOWN *)v11;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      NlsSectionPtr = v12;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_11;
  }
  return 3221225712LL;
}
