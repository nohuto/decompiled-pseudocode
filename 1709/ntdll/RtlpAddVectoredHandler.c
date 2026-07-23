/*
 * XREFs of RtlpAddVectoredHandler @ 0x180075888
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180075880 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180090350 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlEncodePointer @ 0x180075AD0 (RtlEncodePointer.c)
 *     RtlQueryProtectedPolicy @ 0x180075B20 (RtlQueryProtectedPolicy.c)
 */

ULONG_PTR **__fastcall RtlpAddVectoredHandler(int a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // eax
  PVOID ProcessHeap; // rcx
  ULONG_PTR **Heap; // rax
  ULONG_PTR **v9; // rbx
  ULONG_PTR *v10; // rdi
  ULONG_PTR v11; // rax
  ULONG_PTR **v13; // rax
  int v14; // ebx
  int v15; // ecx
  unsigned __int64 PolicyValue; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  if ( LdrEnsureMrdataHeapExists() < 0 || RtlQueryProtectedPolicy((PGUID)&PolicyGuid, &PolicyValue) >= 0 && PolicyValue )
    return 0LL;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v14 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (ULONG_PTR **)RtlAllocateHeap(ProcessHeap, 0, 0x20uLL);
  v9 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = 1;
    Heap[3] = (ULONG_PTR *)RtlEncodePointer(a2);
    v10 = &LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * v3;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
    if ( (ULONG_PTR *)*v10 == v10 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
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
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
    LdrProtectMrdata(1);
  }
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
    if ( v15 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return v9;
}
