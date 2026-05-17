/*
 * XREFs of LdrAddDllDirectory @ 0x18008F390
 * Callers:
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     RtlDetermineDosPathNameType_U @ 0x18004FB50 (RtlDetermineDosPathNameType_U.c)
 *     sub_180089230 @ 0x180089230 (sub_180089230.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _local_unwind @ 0x180096C40 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall LdrAddDllDirectory(unsigned __int16 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 Heap; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdi
  int v12; // ecx
  _DWORD v13[18]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int16 v14; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-78h]
  _DWORD *v16; // [rsp+58h] [rbp-70h]
  int v17; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+68h] [rbp-60h]
  unsigned __int16 *v19; // [rsp+70h] [rbp-58h]
  int v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+80h] [rbp-48h]
  char v22[40]; // [rsp+90h] [rbp-38h] BYREF

  v16 = v13;
  if ( (dword_180158674 & 4) == 0 )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(*((_WORD **)a1 + 1));
  if ( v4 <= 5 )
  {
    v12 = 41;
    if ( _bittest(&v12, v4) )
      return 3221225485LL;
  }
  v5 = sub_18003E060(0, 0, (__m128i *)a1, 0LL, &v14, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v17 = 48;
    v18 = 0LL;
    v20 = 64;
    v19 = &v14;
    v21 = 0LL;
    v5 = ZwQueryAttributesFile(&v17, v22);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
  }
  if ( v5 < 0 )
    return (unsigned int)v5;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1 + 18LL);
  v7 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove((void *)(Heap + 18), *((const void **)a1 + 1), *a1);
  *(_WORD *)(v7 + 16) = *a1;
  RtlAcquireSRWLockExclusive(&qword_18015C3A8);
  v8 = *a1 + (unsigned __int16)word_1801553E8 + 2;
  v13[16] = v8;
  if ( v8 > 0xFFFE )
  {
    local_unwind(v16, &loc_1800D2098);
LABEL_11:
    __fastfail(3u);
  }
  word_1801553E8 = v8;
  v9 = off_1801553D8;
  if ( *((_UNKNOWN ***)off_1801553D8 + 1) != &off_1801553D8 )
    goto LABEL_11;
  *(_QWORD *)v7 = off_1801553D8;
  *(_QWORD *)(v7 + 8) = &off_1801553D8;
  v9[1] = v7;
  off_1801553D8 = (_UNKNOWN *)v7;
  RtlReleaseSRWLockExclusive(&qword_18015C3A8);
  RtlAcquireSRWLockExclusive(&qword_18015C3A0);
  v10 = sub_180089230(&qword_18015A2D0);
  RtlReleaseSRWLockExclusive(&qword_18015C3A0);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  *a2 = v7;
  return 0LL;
}
