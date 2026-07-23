/*
 * XREFs of sub_180071028 @ 0x180071028
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180071020 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800D3BE0 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlEncodePointer @ 0x180071270 (RtlEncodePointer.c)
 *     RtlQueryProtectedPolicy @ 0x1800712C0 (RtlQueryProtectedPolicy.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 */

ULONG_PTR **__fastcall sub_180071028(int a1, void *a2, unsigned int a3)
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
  if ( (int)sub_18007CFD4() < 0 || RtlQueryProtectedPolicy((PGUID)&PolicyGuid, &PolicyValue) >= 0 && PolicyValue )
    return 0LL;
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v14 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap(qword_18016F270, 0);
    if ( v14 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v14 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
    ProcessHeap = qword_18016F270;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (ULONG_PTR **)RtlAllocateHeap(ProcessHeap, 0, 0x20uLL);
  v9 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = 1;
    Heap[3] = (ULONG_PTR *)RtlEncodePointer(a2);
    v10 = &LdrSystemDllInitBlock.ScpCfgCheckFunction + 3 * v3;
    sub_1800259B4(0);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * v3 + 2]);
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
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * v3 + 2]);
    sub_1800259B4(1);
  }
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v15 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v15 - 1;
    if ( v15 == 1 )
      RtlProtectHeap(qword_18016F270, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  return v9;
}
