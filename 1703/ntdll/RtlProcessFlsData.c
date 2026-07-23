/*
 * XREFs of RtlProcessFlsData @ 0x180070090
 * Callers:
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18006FA10 (LdrShutdownProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
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
  void (*v12)(void); // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax

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
        v12 = *(void (**)(void))((char *)v1->SparePointers[0] + v11);
        if ( v12 && v10[2] )
        {
          v12();
          v10[2] = 0LL;
        }
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)((char *)v1->SparePointers[0] + v11 + 8));
      }
    }
    RtlAcquireSRWLockExclusive(&stru_18015C200);
    v13 = *a1;
    v14 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v14 != a1 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    goto LABEL_5;
  }
  v3 = NtCurrentTeb();
  Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015B268 + 2883584) | 8, 0x410uLL);
  v5 = Heap;
  if ( Heap )
  {
    v3->FlsData = Heap;
    RtlAcquireSRWLockExclusive(&stru_18015C200);
    PatchLoaderData = (struct _PEB **)v1->PatchLoaderData;
    if ( *PatchLoaderData != (struct _PEB *)&v1->SparePointers[1] )
      __fastfail(3u);
    *(_QWORD *)&v5->InheritedAddressSpace = &v1->SparePointers[1];
    v5->Mutant = PatchLoaderData;
    *PatchLoaderData = v5;
    v1->PatchLoaderData = v5;
LABEL_5:
    RtlReleaseSRWLockExclusive(&stru_18015C200);
    return 0LL;
  }
  return 3221225495LL;
}
