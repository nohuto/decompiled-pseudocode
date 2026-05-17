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
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 BeginAddress; // r8
  PRUNTIME_FUNCTION v16; // r10
  ULONG v17; // r9d
  unsigned __int64 EndAddress; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // r8
  __int64 v28; // r9
  int v30; // ebx
  int v31; // edx
  int v32; // r11d
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  bool v39; // cf
  unsigned __int64 v40; // rax
  int v41; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
    v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v30 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v30 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 112LL);
  v14 = Heap;
  if ( !Heap )
  {
    if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
      v41 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v41 - 1;
      if ( v41 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v16 = FunctionTable + 1;
  *(_QWORD *)(v14 + 32) = BeginAddress;
  v17 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v14 + 80) = 0;
  *(_QWORD *)(v14 + 40) = EndAddress;
  *(_QWORD *)(v14 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v32 = 0;
    do
    {
      v33 = EndAddress;
      v34 = EndAddress;
      v35 = BeginAddress;
      v36 = BeginAddress;
      if ( !v32 && v16->BeginAddress < FunctionTable[v17 - 1].BeginAddress )
      {
        v32 = 1;
        *(_DWORD *)(v14 + 80) = 1;
      }
      v37 = v16->BeginAddress;
      v38 = *(_QWORD *)(v14 + 32);
      v39 = v37 < BeginAddress;
      BeginAddress = v37;
      if ( v39 )
        v38 = v16->BeginAddress;
      *(_QWORD *)(v14 + 32) = v38;
      v40 = v16->EndAddress;
      if ( v37 >= v36 )
        BeginAddress = v35;
      if ( v40 > EndAddress )
        *(_QWORD *)(v14 + 40) = v40;
      ++v16;
      ++v17;
      EndAddress = v40;
      if ( v40 <= v34 )
        EndAddress = v33;
    }
    while ( v17 < EntryCount );
  }
  *(_QWORD *)(v14 + 32) += BaseAddress;
  *(_QWORD *)(v14 + 40) += BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v19, v20, v21);
  v22 = (_QWORD *)RtlpDynamicFunctionTableTree;
  LOBYTE(v23) = 0;
  if ( RtlpDynamicFunctionTableTree )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v14 + 32) < *(v22 - 7) )
      {
        v24 = (_QWORD *)*v22;
        if ( !*v22 )
        {
          LOBYTE(v23) = 0;
          break;
        }
      }
      else
      {
        v24 = (_QWORD *)v22[1];
        if ( !v24 )
        {
          LOBYTE(v23) = 1;
          break;
        }
      }
      v22 = v24;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTree, v22, v23, v14 + 88);
  v25 = (__int64 *)qword_18016F2A0;
  if ( *(__int64 **)qword_18016F2A0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v14 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v14 + 8) = v25;
  *v25 = v14;
  qword_18016F2A0 = v14;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v26, v27, v28);
    v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
    if ( v31 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
