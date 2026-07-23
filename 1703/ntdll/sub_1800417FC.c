/*
 * XREFs of sub_1800417FC @ 0x1800417FC
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_1800141D4 @ 0x1800141D4 (sub_1800141D4.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180078A1C @ 0x180078A1C (sub_180078A1C.c)
 */

int *__fastcall sub_1800417FC(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edi
  int v4; // r14d
  NTSTATUS v5; // eax
  __int64 v6; // r13
  unsigned int v7; // r12d
  unsigned int *v8; // r15
  unsigned int *v9; // r8
  unsigned int v10; // eax
  int v11; // edx
  PVOID Heap; // rax
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  CHAR *v17; // rcx
  unsigned __int64 v18; // rax
  int *result; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  DWORD v21; // [rsp+80h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+48h] BYREF
  __int64 v23; // [rsp+90h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = sub_180078A1C(v1);
  if ( v3 >= 0 )
    v3 = sub_18003999C(a1);
  if ( v3 < 0 )
    goto LABEL_35;
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_39;
  v5 = sub_180032C0C(*(_QWORD *)(v1 + 48), 1, 1u, &v21, (char **)&v23);
  v6 = v23;
  v7 = 0;
  if ( v5 < 0 )
    v6 = 0LL;
  v8 = (unsigned int *)(v6 + 12);
  if ( !*(_DWORD *)(v6 + 12) )
    goto LABEL_32;
  v9 = (unsigned int *)(v6 + 16);
  do
  {
    v10 = *v9;
    if ( !*v9 )
      break;
    v11 = v4 + 1;
    ++v7;
    v9 += 5;
    if ( !*(_QWORD *)(v10 + *(_QWORD *)(v1 + 48)) )
      v11 = v4;
    v4 = v11;
  }
  while ( *(v9 - 1) );
  if ( !v4 )
    goto LABEL_32;
  Heap = RtlAllocateHeap(HeapHandle, (dword_18015B268 + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 80) = Heap;
  if ( !Heap )
  {
    v3 = -1073741801;
    goto LABEL_31;
  }
  *(_QWORD *)(a1 + 120) = v6;
  *(_DWORD *)(a1 + 88) = v7;
  BaseAddress = 0LL;
  v13 = 0;
  *(_DWORD *)(a1 + 92) = v4 + 1;
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
    v3 = sub_180041A60(&SourceString, *(_QWORD *)(a1 + 80) + 8LL * v13, (__int64)&BaseAddress);
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
    RtlAcquireSRWLockExclusive(&stru_18015C040);
    v4 = --*(_DWORD *)(a1 + 92);
    RtlReleaseSRWLockExclusive(&stru_18015C040);
  }
LABEL_31:
  if ( !v4 )
  {
LABEL_32:
    if ( *(_QWORD *)(a1 + 96) )
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 152) + 56LL) = 4;
      if ( *(_QWORD *)(a1 + 40) )
        sub_1800141D4(a1);
      else
        v3 = sub_180032DD0(a1);
      goto LABEL_35;
    }
LABEL_39:
    *(_DWORD *)(*(_QWORD *)(v1 + 152) + 56LL) = 5;
  }
LABEL_35:
  result = (int *)(unsigned int)~v3;
  if ( v3 < 0 )
  {
    result = *(int **)(a1 + 32);
    *result = v3;
  }
  return result;
}
