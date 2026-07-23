/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x18006A010
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 *     RtlAvlInsertNodeEx @ 0x18006AFD0 (RtlAvlInsertNodeEx.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 *v19; // rax
  int v21; // ebx
  int v22; // edx
  int v23; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( (int)sub_18007CFD4() < 0 )
    return 0;
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v21 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap(qword_18016F270, 0);
    if ( v21 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v21 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 )
  {
    if ( v10 + 112 >= 0xFF000 )
    {
LABEL_39:
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015BF98);
        v23 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v23 - 1;
        if ( v23 == 1 )
          RtlProtectHeap(qword_18016F270, 1u);
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
      }
      return 0;
    }
    ProcessHeap = qword_18016F270;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, v10 + 112);
  v15 = (__int64)Heap;
  if ( !Heap )
    goto LABEL_39;
  Heap[2].QuadPart = TableIdentifier;
  ZwQuerySystemTime(Heap + 3);
  *(_QWORD *)(v15 + 32) = BaseAddress;
  *(_QWORD *)(v15 + 40) = BaseAddress + v6;
  *(_QWORD *)(v15 + 64) = Context;
  *(_QWORD *)(v15 + 48) = BaseAddress;
  *(_QWORD *)(v15 + 56) = Callback;
  *(_DWORD *)(v15 + 80) = 2;
  *(_QWORD *)(v15 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v15 + 72) = v15 + 112;
    sub_1800377C0((_WORD *)(v15 + 112), v10, (__int64)OutOfProcessCallbackDll);
  }
  sub_1800259B4(0);
  RtlAcquireSRWLockExclusive(&stru_18015B2B0);
  v16 = (_QWORD *)qword_18016F2A0;
  LOBYTE(v17) = 0;
  if ( qword_18016F2A0 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v15 + 32) < *(v16 - 7) )
      {
        v18 = (_QWORD *)*v16;
        if ( !*v16 )
        {
          LOBYTE(v17) = 0;
          break;
        }
      }
      else
      {
        v18 = (_QWORD *)v16[1];
        if ( !v18 )
        {
          LOBYTE(v17) = 1;
          break;
        }
      }
      v16 = v18;
    }
  }
  RtlAvlInsertNodeEx(&qword_18016F2A0, v16, v17, v15 + 88);
  v19 = (__int64 *)qword_18016F2B0;
  if ( *(__int64 **)qword_18016F2B0 != &qword_18016F2A8 )
    __fastfail(3u);
  *(_QWORD *)v15 = &qword_18016F2A8;
  *(_QWORD *)(v15 + 8) = v19;
  *v19 = v15;
  qword_18016F2B0 = v15;
  RtlReleaseSRWLockExclusive(&stru_18015B2B0);
  sub_1800259B4(1);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v22 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v22 - 1;
    if ( v22 == 1 )
      RtlProtectHeap(qword_18016F270, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  return 1;
}
