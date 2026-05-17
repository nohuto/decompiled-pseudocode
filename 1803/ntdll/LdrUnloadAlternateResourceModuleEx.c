/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180047210
 * Callers:
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     LdrUnloadAlternateResourceModule @ 0x180047200 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x180088510 (LdrResRelease.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800486A8 @ 0x1800486A8 (sub_1800486A8.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int16 v4; // r12
  char v6; // bl
  unsigned int v7; // edi
  int v8; // esi
  int v9; // r13d
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  __int64 v18; // [rsp+60h] [rbp+8h]

  v4 = a2;
  v6 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3E8, a2, a3, a4);
  v7 = dword_18015B2A0;
  if ( dword_18015B2A0 )
  {
    v8 = dword_18015B2A0;
    for ( i = dword_18015B2A0; ; i = v9 )
    {
      if ( v8 <= 0 )
        goto LABEL_30;
      v9 = v8 - 1;
      v10 = qword_18015B298 + ((__int64)(v8 - 1) << 6);
      if ( *(_QWORD *)(v10 + 8) == a1 )
        break;
LABEL_6:
      v8 = v9;
    }
    v18 = qword_18015B298 + ((__int64)v9 << 6);
    v11 = (_QWORD *)(v10 + 32);
    v12 = *(_QWORD *)(v10 + 32);
    if ( v12 && (!v4 || v4 == *(_WORD *)v10) && v12 != -1 )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(v10 + 56) == -1073741799 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
        v8 = i;
        v10 = v18;
      }
      else
      {
        ZwUnmapViewOfSection(-1LL);
      }
      v14 = *(_QWORD *)(v10 + 40);
      if ( v14 )
      {
        ZwClose(v14);
        *(_QWORD *)(v10 + 40) = 0LL;
      }
      *v11 = 0LL;
      v7 = dword_18015B2A0;
    }
    if ( v8 != v7 )
      sub_1800486A8((unsigned int)(v8 - 1));
    dword_18015B2A0 = --v7;
    if ( v7 )
    {
      if ( v7 >= dword_18015B2A4 - 32 )
      {
LABEL_19:
        v6 = 1;
        goto LABEL_6;
      }
      Heap = RtlReAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               0,
               qword_18015B298,
               (unsigned __int64)(unsigned int)(dword_18015B2A4 - 32) << 6);
      if ( !Heap )
      {
        v6 = 0;
        goto LABEL_30;
      }
      qword_18015B298 = Heap;
      dword_18015B2A4 -= 32;
    }
    else
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_18015B298);
      qword_18015B298 = 0LL;
      dword_18015B2A4 = 0;
    }
    v7 = dword_18015B2A0;
    goto LABEL_19;
  }
  v6 = 1;
LABEL_30:
  RtlReleaseSRWLockExclusive(&qword_18015D3E8);
  return v6;
}
