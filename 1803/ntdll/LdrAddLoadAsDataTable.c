/*
 * XREFs of LdrAddLoadAsDataTable @ 0x180072E40
 * Callers:
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001F8B0 @ 0x18001F8B0 (sub_18001F8B0.c)
 *     sub_180073058 @ 0x180073058 (sub_180073058.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall LdrAddLoadAsDataTable(wchar_t *String2, _WORD *Src, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // r8
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 Heap; // rax
  __int64 v18; // rax

  v9 = 0;
  if ( !String2 )
    return 3221225485LL;
  sub_18001F8B0();
  RtlEnterCriticalSection((__int64)&unk_18015B260);
  v10 = 0;
  v11 = qword_18015B288;
  while ( v10 < dword_18015B290 )
  {
    if ( *(wchar_t **)(v11 + 48LL * v10) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2);
      v11 = qword_18015B288;
    }
    ++v10;
  }
  if ( !v11 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1536LL);
    v11 = Heap;
    if ( !Heap )
      goto LABEL_18;
    qword_18015B288 = Heap;
    dword_18015B248 = 32;
    goto LABEL_17;
  }
  if ( dword_18015B290 >= (unsigned int)dword_18015B248 )
  {
    v18 = RtlReAllocateHeap(
            (__int64)NtCurrentPeb()->ProcessHeap,
            0,
            qword_18015B288,
            48LL * (unsigned int)(dword_18015B248 + 32));
    v11 = v18;
    if ( !v18 )
      goto LABEL_18;
    qword_18015B288 = v18;
    dword_18015B248 += 32;
LABEL_17:
    v9 = 0;
  }
  v12 = 0LL;
  if ( !Src )
  {
LABEL_14:
    v16 = 6LL * (unsigned int)dword_18015B290;
    *(_QWORD *)(v11 + 8 * v16) = String2;
    *(_QWORD *)(v11 + 8 * v16 + 8) = v12;
    *(_QWORD *)(v11 + 8 * v16 + 16) = a3;
    *(_QWORD *)(v11 + 8 * v16 + 24) = a4;
    *(_DWORD *)(v11 + 8 * v16 + 32) = 1;
    *(_QWORD *)(v11 + 8 * v16 + 40) = a5;
    ++dword_18015B290;
    goto LABEL_21;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( Src[v13] );
  v14 = 2 * v13 + 2;
  v15 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14);
  v12 = v15;
  if ( v15 )
  {
    memmove(v15, Src, v14 - 2);
    v9 = 0;
    v11 = qword_18015B288;
    goto LABEL_14;
  }
LABEL_18:
  v9 = -1073741801;
LABEL_21:
  RtlLeaveCriticalSection((__int64)&unk_18015B260);
  if ( v9 >= 0 && Src )
    sub_180073058(String2, Src);
  return (unsigned int)v9;
}
