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
  __int64 Heap; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  __int64 v17; // rcx
  bool v18; // zf
  char *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  int *result; // rax
  STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF

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
  Heap = RtlAllocateHeap(qword_18015C288, (dword_18015C294 + 1572864) | 8u, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( !Heap )
  {
    v3 = -1073741801;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 96) = v7;
  *(_DWORD *)(a1 + 100) = v4 + 1;
  v16 = 0;
  *(_QWORD *)(a1 + 128) = v6;
  v25 = 0LL;
  if ( !*v8 )
    goto LABEL_29;
  while ( v8[1] )
  {
    v13 = *(_QWORD *)(v1 + 48);
    if ( !*(_QWORD *)(v8[1] + v13) )
      goto LABEL_26;
    v17 = *v8;
    v18 = v13 + v17 == 0;
    v19 = (char *)(v13 + v17);
    *(_DWORD *)&SourceString.Length = 0;
    SourceString.Buffer = v19;
    if ( !v18 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v19[v20] );
      if ( v20 > 0xFFFE )
      {
        v3 = -1073741562;
        goto LABEL_24;
      }
      SourceString.Length = v20;
      SourceString.MaximumLength = v20 + 1;
    }
    v3 = 0;
LABEL_24:
    if ( v3 < 0 )
      break;
    v3 = sub_180039360(&SourceString, *(_QWORD *)(a1 + 88) + 8LL * v16, (__int64)&v25);
    if ( v3 < 0 )
      break;
LABEL_26:
    v8 += 5;
    ++v16;
    if ( !*v8 )
      break;
  }
  v14 = (unsigned __int64 *)v25;
  if ( v25 )
    RtlFreeHeap(qword_18015C288, 0, v25);
LABEL_29:
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v13, v14, v15);
    v4 = --*(_DWORD *)(a1 + 100);
    RtlReleaseSRWLockExclusive(&qword_18015D070);
  }
LABEL_31:
  if ( !v4 )
  {
LABEL_32:
    v21 = *(_QWORD *)(v1 + 152);
    if ( v2[13] )
    {
      *(_DWORD *)(v21 + 56) = 4;
      if ( v2[6] )
        sub_1800709B0(v2);
      else
        v3 = sub_18000FC70((__int64)v2);
    }
    else
    {
      *(_DWORD *)(v21 + 56) = 5;
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
