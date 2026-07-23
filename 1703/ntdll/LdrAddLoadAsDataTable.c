/*
 * XREFs of LdrAddLoadAsDataTable @ 0x180078680
 * Callers:
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 *     sub_1800788A8 @ 0x1800788A8 (sub_1800788A8.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
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
  PVOID *v17; // rax
  PVOID *Heap; // rax

  v9 = 0;
  if ( !Module )
    return -1073741811;
  sub_18002FBD4(dword_18015A270, &stru_18015A220);
  RtlEnterCriticalSection(&stru_18015A220);
  v10 = 0;
  v11 = (PVOID *)qword_18015A248;
  while ( v10 < dword_18015A254 )
  {
    if ( v11[6 * v10] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0LL, 0LL, 0);
      v11 = (PVOID *)qword_18015A248;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( dword_18015A254 < (unsigned int)dword_18015A200 )
      goto LABEL_6;
    Heap = (PVOID *)RtlReAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      0,
                      qword_18015A248,
                      48LL * (unsigned int)(dword_18015A200 + 32));
    v11 = Heap;
    if ( !Heap )
      goto LABEL_18;
    qword_18015A248 = Heap;
    dword_18015A200 += 32;
  }
  else
  {
    v17 = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
    v11 = v17;
    if ( !v17 )
      goto LABEL_18;
    qword_18015A248 = v17;
    dword_18015A200 = 32;
  }
  v9 = 0;
LABEL_6:
  v12 = 0LL;
  if ( FilePath )
  {
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
      v11 = (PVOID *)qword_18015A248;
      goto LABEL_11;
    }
LABEL_18:
    v9 = -1073741801;
    goto LABEL_21;
  }
LABEL_11:
  v16 = 6LL * (unsigned int)dword_18015A254;
  v11[v16] = Module;
  v11[v16 + 1] = v12;
  v11[v16 + 2] = (PVOID)Size;
  v11[v16 + 3] = Handle;
  LODWORD(v11[v16 + 4]) = 1;
  v11[v16 + 5] = ActCtx;
  ++dword_18015A254;
LABEL_21:
  RtlLeaveCriticalSection(&stru_18015A220);
  if ( v9 >= 0 )
  {
    if ( FilePath )
      sub_1800788A8(Module, FilePath);
  }
  return v9;
}
