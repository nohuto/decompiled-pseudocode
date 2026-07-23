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

NTSTATUS __cdecl LdrAddLoadAsDataTable(
        PVOID Module,
        PWSTR FilePath,
        SIZE_T Size,
        HANDLE Handle,
        PACTIVATION_CONTEXT ActCtx)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  PVOID *v11; // r8
  PVOID v12; // rdi
  __int64 v13; // rax
  SIZE_T v14; // rbx
  PVOID v15; // rax
  __int64 v16; // rdx
  PVOID *Heap; // rax
  PVOID *v18; // rax

  v9 = 0;
  if ( !Module )
    return -1073741811;
  sub_18001F8B0();
  RtlEnterCriticalSection(&stru_18015B260);
  v10 = 0;
  v11 = (PVOID *)qword_18015B288;
  while ( v10 < dword_18015B290 )
  {
    if ( v11[6 * v10] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0LL, 0LL, 0);
      v11 = (PVOID *)qword_18015B288;
    }
    ++v10;
  }
  if ( !v11 )
  {
    Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
    v11 = Heap;
    if ( !Heap )
      goto LABEL_18;
    qword_18015B288 = Heap;
    dword_18015B248 = 32;
    goto LABEL_17;
  }
  if ( dword_18015B290 >= (unsigned int)dword_18015B248 )
  {
    v18 = (PVOID *)RtlReAllocateHeap(
                     NtCurrentPeb()->ProcessHeap,
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
  if ( !FilePath )
  {
LABEL_14:
    v16 = 6LL * (unsigned int)dword_18015B290;
    v11[v16] = Module;
    v11[v16 + 1] = v12;
    v11[v16 + 2] = (PVOID)Size;
    v11[v16 + 3] = Handle;
    LODWORD(v11[v16 + 4]) = 1;
    v11[v16 + 5] = ActCtx;
    ++dword_18015B290;
    goto LABEL_21;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( FilePath[v13] );
  v14 = 2 * v13 + 2;
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
  v12 = v15;
  if ( v15 )
  {
    memmove(v15, FilePath, v14 - 2);
    v9 = 0;
    v11 = (PVOID *)qword_18015B288;
    goto LABEL_14;
  }
LABEL_18:
  v9 = -1073741801;
LABEL_21:
  RtlLeaveCriticalSection(&stru_18015B260);
  if ( v9 >= 0 && FilePath )
    sub_180073058(Module, FilePath);
  return v9;
}
