/*
 * XREFs of RtlFlsAlloc @ 0x180050130
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlFindClearBitsAndSet @ 0x180050D90 (RtlFindClearBitsAndSet.c)
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  struct _TEB *v2; // r15
  _PEB *v5; // rdi
  PPEB ProcessEnvironmentBlock; // rsi
  void *v7; // rbp
  NTSTATUS v8; // ebx
  ULONG ClearBitsAndSet; // eax
  ULONG v10; // r14d
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _PEB *Heap; // rax
  PPEB *PatchLoaderData; // rcx

  v2 = NtCurrentTeb();
  if ( v2->FlsData )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  Heap = (_PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (Flags + 2883584) | 8, 0x410uLL);
  v5 = Heap;
  if ( Heap )
  {
    v2->FlsData = Heap;
LABEL_3:
    ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->SparePointers[0] )
    {
      v7 = 0LL;
    }
    else
    {
      v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 2883584, 0x800uLL);
      v7 = v12;
      if ( !v12 )
      {
        v8 = -1073741801;
        goto LABEL_29;
      }
      v13 = 128LL;
      do
      {
        *v12 = 0LL;
        v12[1] = 0LL;
        v12 += 2;
        --v13;
      }
      while ( v13 );
    }
    v8 = 0;
    RtlAcquireSRWLockExclusive(&stru_18015D260);
    if ( v7 && !ProcessEnvironmentBlock->SparePointers[0] )
    {
      ProcessEnvironmentBlock->SparePointers[0] = v7;
      v7 = 0LL;
    }
    if ( v5 )
    {
      PatchLoaderData = (PPEB *)ProcessEnvironmentBlock->PatchLoaderData;
      if ( *PatchLoaderData != (PPEB)&ProcessEnvironmentBlock->SparePointers[1] )
        __fastfail(3u);
      *(_QWORD *)&v5->InheritedAddressSpace = &ProcessEnvironmentBlock->SparePointers[1];
      v5->Mutant = PatchLoaderData;
      *PatchLoaderData = v5;
      ProcessEnvironmentBlock->PatchLoaderData = v5;
      v5 = 0LL;
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)ProcessEnvironmentBlock->ChpeV2ProcessInfo, 1u, 1u);
    v10 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
    {
      v8 = -1073741801;
    }
    else
    {
      *((_QWORD *)ProcessEnvironmentBlock->SparePointers[0] + 2 * ClearBitsAndSet) = Callback;
      *((_QWORD *)v2->FlsData + ClearBitsAndSet + 2) = 0LL;
      if ( ClearBitsAndSet > *(_DWORD *)&ProcessEnvironmentBlock->UseCaseMapping )
        *(_DWORD *)&ProcessEnvironmentBlock->UseCaseMapping = ClearBitsAndSet;
    }
    RtlReleaseSRWLockExclusive(&stru_18015D260);
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    if ( v8 >= 0 )
    {
      *FlsIndex = v10;
      return v8;
    }
LABEL_29:
    if ( v5 )
    {
      v2->FlsData = 0LL;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    return v8;
  }
  return -1073741801;
}
