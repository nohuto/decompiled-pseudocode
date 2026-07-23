/*
 * XREFs of sub_180077618 @ 0x180077618
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180077610 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180090550 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlEncodePointer @ 0x180077840 (RtlEncodePointer.c)
 *     RtlQueryProtectedPolicy @ 0x180077890 (RtlQueryProtectedPolicy.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 */

ULONG_PTR **__fastcall sub_180077618(int a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  PVOID ProcessHeap; // rcx
  ULONG_PTR **Heap; // rax
  ULONG_PTR **v9; // rbx
  ULONG_PTR *v10; // rdi
  ULONG_PTR v11; // rax
  ULONG_PTR **v13; // rax
  int v14; // ecx
  unsigned __int64 PolicyValue; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  if ( (int)sub_180083738() < 0 || RtlQueryProtectedPolicy((PGUID)&PolicyGuid, &PolicyValue) >= 0 && PolicyValue )
    return 0LL;
  if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    goto LABEL_18;
  RtlAcquireSRWLockExclusive(&stru_18015AF70);
  v6 = *(_DWORD *)qword_18016B270;
  if ( !*(_DWORD *)qword_18016B270 )
    RtlProtectHeap(qword_18016B260, 0);
  if ( v6 == -1 )
  {
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
    __fastfail(0xEu);
  }
  *(_DWORD *)qword_18016B270 = v6 + 1;
  RtlReleaseSRWLockExclusive(&stru_18015AF70);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    ProcessHeap = qword_18016B260;
  else
LABEL_18:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (ULONG_PTR **)RtlAllocateHeap(ProcessHeap, 0, 0x20uLL);
  v9 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = 1;
    Heap[3] = (ULONG_PTR *)RtlEncodePointer(a2);
    v10 = &LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * v3 + 1];
    sub_18001DEA8(0);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * v3]);
    if ( (ULONG_PTR *)*v10 == v10 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, v3 + 2);
    if ( a1 )
    {
      v11 = *v10;
      if ( *(ULONG_PTR **)(*v10 + 8) != v10 )
        __fastfail(3u);
      *v9 = (ULONG_PTR *)v11;
      v9[1] = v10;
      *(_QWORD *)(v11 + 8) = v9;
      *v10 = (ULONG_PTR)v9;
    }
    else
    {
      v13 = (ULONG_PTR **)v10[1];
      if ( *v13 != v10 )
        __fastfail(3u);
      *v9 = v10;
      v9[1] = (ULONG_PTR *)v13;
      *v13 = (ULONG_PTR *)v9;
      v10[1] = (ULONG_PTR)v9;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * v3]);
    sub_18001DEA8(1);
  }
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v14 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v14 - 1;
    if ( v14 == 1 )
      RtlProtectHeap(qword_18016B260, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  return v9;
}
