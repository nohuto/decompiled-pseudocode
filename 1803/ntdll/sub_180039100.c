/*
 * XREFs of sub_180039100 @ 0x180039100
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002B540 @ 0x18002B540 (sub_18002B540.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_1800709B0 @ 0x1800709B0 (sub_1800709B0.c)
 *     sub_180073CD4 @ 0x180073CD4 (sub_180073CD4.c)
 *     sub_180075C44 @ 0x180075C44 (sub_180075C44.c)
 */

int *__fastcall sub_180039100(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // rbx
  int v3; // edi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned int *v8; // rsi
  _DWORD *v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  PVOID Heap; // rax
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  CHAR *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  int *result; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (_QWORD *)a1;
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    v3 = sub_180073CD4(*(_QWORD *)(a1 + 56));
  if ( v3 >= 0 )
    v3 = sub_18002B540((__int64)v2);
  if ( v3 < 0 )
    goto LABEL_35;
  v4 = 0;
  if ( !v2[13] )
    goto LABEL_32;
  v5 = sub_180075C44(v2);
  v6 = v5;
  v7 = 0;
  v8 = (unsigned int *)(v5 + 12);
  if ( !*(_DWORD *)(v5 + 12) )
    goto LABEL_32;
  v9 = (_DWORD *)(v5 + 12);
  do
  {
    v10 = (unsigned int)v9[1];
    if ( !(_DWORD)v10 )
      break;
    v11 = v4 + 1;
    ++v7;
    v9 += 5;
    if ( !*(_QWORD *)(v10 + *(_QWORD *)(v1 + 48)) )
      v11 = v4;
    v4 = v11;
  }
  while ( *v9 );
  v2 = (_QWORD *)a1;
  if ( !v4 )
    goto LABEL_32;
  Heap = RtlAllocateHeap(HeapHandle, (Flags + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( !Heap )
  {
    v3 = -1073741801;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 96) = v7;
  *(_DWORD *)(a1 + 100) = v4 + 1;
  v13 = 0;
  *(_QWORD *)(a1 + 128) = v6;
  BaseAddress = 0LL;
  if ( !*v8 )
    goto LABEL_29;
  while ( v8[1] )
  {
    v14 = *(_QWORD *)(v1 + 48);
    if ( !*(_QWORD *)(v8[1] + v14) )
      goto LABEL_26;
    v15 = *v8;
    v16 = v14 + v15 == 0;
    v17 = (CHAR *)(v14 + v15);
    *(_DWORD *)&SourceString.Length = 0;
    SourceString.Buffer = v17;
    if ( !v16 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v17[v18] );
      if ( v18 > 0xFFFE )
      {
        v3 = -1073741562;
        goto LABEL_24;
      }
      SourceString.Length = v18;
      SourceString.MaximumLength = v18 + 1;
    }
    v3 = 0;
LABEL_24:
    if ( v3 < 0 )
      break;
    v3 = sub_180039360(&SourceString, *(_QWORD *)(a1 + 88) + 8LL * v13, (__int64)&BaseAddress);
    if ( v3 < 0 )
      break;
LABEL_26:
    v8 += 5;
    ++v13;
    if ( !*v8 )
      break;
  }
  if ( BaseAddress )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
LABEL_29:
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015D070);
    v4 = --*(_DWORD *)(a1 + 100);
    RtlReleaseSRWLockExclusive(&stru_18015D070);
  }
LABEL_31:
  if ( !v4 )
  {
LABEL_32:
    v19 = *(_QWORD *)(v1 + 152);
    if ( v2[13] )
    {
      *(_DWORD *)(v19 + 56) = 4;
      if ( v2[6] )
        sub_1800709B0(v2);
      else
        v3 = sub_18000FC70((__int64)v2);
    }
    else
    {
      *(_DWORD *)(v19 + 56) = 5;
    }
  }
LABEL_35:
  result = (int *)(unsigned int)~v3;
  if ( v3 < 0 )
  {
    result = (int *)v2[5];
    *result = v3;
  }
  return result;
}
