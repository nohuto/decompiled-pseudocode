/*
 * XREFs of RtlAddFunctionTable @ 0x1800738C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlAvlInsertNodeEx @ 0x180073ED0 (RtlAvlInsertNodeEx.c)
 *     ZwQuerySystemTime @ 0x1800A0C00 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v9; // rbx
  unsigned __int64 BeginAddress; // r8
  PRUNTIME_FUNCTION v11; // r10
  ULONG v12; // r9d
  unsigned __int64 EndAddress; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 *v17; // rax
  int v19; // ebx
  int v20; // edx
  int v21; // r11d
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  bool v28; // cf
  unsigned __int64 v29; // rax
  int v30; // ecx

  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v19 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v19 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x70uLL);
  v9 = (__int64)Heap;
  if ( !Heap )
  {
    if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v30 - 1;
      if ( v30 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v11 = FunctionTable + 1;
  *(_QWORD *)(v9 + 32) = BeginAddress;
  v12 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 40) = EndAddress;
  *(_QWORD *)(v9 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v21 = 0;
    do
    {
      v22 = EndAddress;
      v23 = EndAddress;
      v24 = BeginAddress;
      v25 = BeginAddress;
      if ( !v21 && v11->BeginAddress < FunctionTable[v12 - 1].BeginAddress )
      {
        v21 = 1;
        *(_DWORD *)(v9 + 80) = 1;
      }
      v26 = v11->BeginAddress;
      v27 = *(_QWORD *)(v9 + 32);
      v28 = v26 < BeginAddress;
      BeginAddress = v26;
      if ( v28 )
        v27 = v11->BeginAddress;
      *(_QWORD *)(v9 + 32) = v27;
      v29 = v11->EndAddress;
      if ( v26 >= v25 )
        BeginAddress = v24;
      if ( v29 > EndAddress )
        *(_QWORD *)(v9 + 40) = v29;
      ++v11;
      ++v12;
      EndAddress = v29;
      if ( v29 <= v23 )
        EndAddress = v22;
    }
    while ( v12 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) += BaseAddress;
  *(_QWORD *)(v9 + 40) += BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v14 = (_QWORD *)RtlpDynamicFunctionTableTree;
  LOBYTE(v15) = 0;
  if ( RtlpDynamicFunctionTableTree )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v9 + 32) < *(v14 - 7) )
      {
        v16 = (_QWORD *)*v14;
        if ( !*v14 )
        {
          LOBYTE(v15) = 0;
          break;
        }
      }
      else
      {
        v16 = (_QWORD *)v14[1];
        if ( !v16 )
        {
          LOBYTE(v15) = 1;
          break;
        }
      }
      v14 = v16;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTree, v14, v15, v9 + 88);
  v17 = (__int64 *)qword_18016F2A0;
  if ( *(__int64 **)qword_18016F2A0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v9 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v9 + 8) = v17;
  *v17 = v9;
  qword_18016F2A0 = v9;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v20 - 1;
    if ( v20 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
