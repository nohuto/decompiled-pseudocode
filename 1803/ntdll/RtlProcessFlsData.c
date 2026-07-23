/*
 * XREFs of RtlProcessFlsData @ 0x180048090
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlProcessFlsData(_QWORD *a1)
{
  struct _PEB *v1; // rsi
  struct _TEB *v3; // rdi
  struct _PEB *Heap; // rax
  struct _PEB *v5; // rbx
  struct _PEB **PatchLoaderData; // rcx
  unsigned int v8; // ebp
  unsigned int i; // edi
  _QWORD *v10; // r15
  __int64 v11; // r14
  char *v12; // rdx
  void (*v13)(void); // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax

  v1 = NtCurrentPeb();
  if ( a1 )
  {
    v8 = *(_DWORD *)&v1->UseCaseMapping;
    for ( i = 1; i <= v8; ++i )
    {
      v10 = &a1[i];
      if ( v10[2] )
      {
        v11 = 16LL * i;
        RtlAcquireSRWLockShared((PRTL_SRWLOCK)((char *)v1->SparePointers[0] + v11 + 8));
        v12 = (char *)v1->SparePointers[0];
        v13 = *(void (**)(void))&v12[v11];
        if ( v13 && v10[2] )
        {
          v13();
          v10[2] = 0LL;
          v12 = (char *)v1->SparePointers[0];
        }
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)&v12[v11 + 8]);
      }
    }
    RtlAcquireSRWLockExclusive(&stru_18015D260);
    v14 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v15 = (_QWORD *)a1[1], (_QWORD *)*v15 != a1) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    goto LABEL_5;
  }
  v3 = NtCurrentTeb();
  Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (Flags + 2883584) | 8, 0x410uLL);
  v5 = Heap;
  if ( Heap )
  {
    v3->FlsData = Heap;
    RtlAcquireSRWLockExclusive(&stru_18015D260);
    PatchLoaderData = (struct _PEB **)v1->PatchLoaderData;
    if ( *PatchLoaderData != (struct _PEB *)&v1->SparePointers[1] )
      __fastfail(3u);
    *(_QWORD *)&v5->InheritedAddressSpace = &v1->SparePointers[1];
    v5->Mutant = PatchLoaderData;
    *PatchLoaderData = v5;
    v1->PatchLoaderData = v5;
LABEL_5:
    RtlReleaseSRWLockExclusive(&stru_18015D260);
    return 0LL;
  }
  return 3221225495LL;
}
