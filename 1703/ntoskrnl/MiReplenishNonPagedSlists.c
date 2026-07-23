/*
 * XREFs of MiReplenishNonPagedSlists @ 0x1400AE774
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x1400ACC90 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x1400AE930 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x1400AED74 (MiAllocatingNonPagedPoolVa.c)
 *     InterlockedPushListSList @ 0x140189520 (InterlockedPushListSList.c)
 */

__int64 __fastcall MiReplenishNonPagedSlists(
        __int128 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        PSLIST_ENTRY ListEnd)
{
  _SLIST_HEADER *v6; // r13
  unsigned int Alignment_low; // r8d
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int16 v10; // bx
  __int64 v11; // rdi
  __int64 v12; // r12
  _SLIST_ENTRY *v13; // r15
  __int16 v14; // bx
  __int16 v15; // r14
  __int64 ClearBitsAndSet; // rax
  unsigned __int64 v17; // rbx
  _SLIST_ENTRY *v18; // rax
  _SLIST_ENTRY *v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-58h]
  _SLIST_HEADER *ListHead; // [rsp+28h] [rbp-50h]
  __int128 v23; // [rsp+30h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEnda; // [rsp+A0h] [rbp+28h]

  v6 = &qword_14036C1C8[25 * a2];
  ListHead = &v6[(_QWORD)((_QWORD)&ListEnd->Next + 3)];
  Alignment_low = LOWORD(ListHead->Alignment);
  if ( Alignment_low >= (unsigned int)dword_14036BD08[(_QWORD)ListEnd - 1] >> 1 )
    return 0LL;
  v8 = a4 & 0xFFFFFFFFFFFFFE00uLL;
  v23 = *a1;
  if ( a4 + 2LL * (_QWORD)ListEnd > (unsigned __int64)v23 + (a4 & 0xFFFFFFFFFFFFFE00uLL) )
    return 0LL;
  v9 = v23 - v8;
  v10 = dword_14036BD08[(_QWORD)ListEnd - 1];
  *((_QWORD *)&v23 + 1) += 8 * (v8 >> 6);
  if ( (unsigned __int64)v23 - v8 > 0x200 )
    v9 = 512LL;
  v11 = 0LL;
  *(_QWORD *)&v23 = v9;
  v12 = 0LL;
  ListEnda = 0LL;
  v13 = 0LL;
  v14 = v10 - Alignment_low;
  if ( v14 )
  {
    v15 = v14;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v23, ListEnd, a4);
      v21 = ClearBitsAndSet;
      if ( ClearBitsAndSet == -1 )
        break;
      v17 = v6[20].Alignment + ((a3 + ClearBitsAndSet + v8) << 12);
      MiAllocatingNonPagedPoolVa(v6, 0LL, a3 + ClearBitsAndSet + v8, ListEnd);
      *(_QWORD *)v17 = v17 ^ qword_14036CFC0;
      v18 = (_SLIST_ENTRY *)(v17 + 16);
      *(_QWORD *)(v17 + 16) = v13;
      if ( v13 )
        v18 = ListEnda;
      v13 = (_SLIST_ENTRY *)(v17 + 16);
      v19 = v18;
      ListEnda = v18;
      a4 = (unsigned __int64)ListEnd + v21;
      ++v12;
      if ( !--v15 )
        goto LABEL_13;
    }
    v19 = ListEnda;
LABEL_13:
    if ( v13 )
    {
      InterlockedPushListSList(ListHead, v13, v19, v12);
      return (_QWORD)ListEnd * v12;
    }
  }
  return v11;
}
