/*
 * XREFs of RtlAddFunctionTable @ 0x18006A9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x18006AFD0 (RtlAvlInsertNodeEx.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v9; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v11; // r8
  ULONG v12; // edi
  unsigned __int64 EndAddress; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 *v17; // rax
  int v19; // ebx
  int v20; // edx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  int v23; // r11d
  unsigned __int64 v24; // rdx
  int v25; // ecx

  if ( (int)sub_18007CFD4() < 0 )
    return 0;
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v19 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap(qword_18016F270, 0);
    if ( v19 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v19 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
    ProcessHeap = qword_18016F270;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x70uLL);
  v9 = (__int64)Heap;
  if ( !Heap )
  {
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015BF98);
      v25 = *(_DWORD *)qword_18016F280;
      if ( !*(_DWORD *)qword_18016F280 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016F280 = v25 - 1;
      if ( v25 == 1 )
        RtlProtectHeap(qword_18016F270, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
    }
    return 0;
  }
  Heap[2].QuadPart = (LONGLONG)FunctionTable;
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
    v21 = EndAddress;
    v22 = BeginAddress;
    v23 = 0;
    do
    {
      if ( !v23 && v11->BeginAddress < FunctionTable[v12 - 1].BeginAddress )
      {
        v23 = 1;
        *(_DWORD *)(v9 + 80) = 1;
      }
      BeginAddress = v11->BeginAddress;
      if ( BeginAddress >= v22 )
      {
        BeginAddress = v22;
      }
      else
      {
        v22 = (unsigned int)BeginAddress;
        *(_QWORD *)(v9 + 32) = BeginAddress;
      }
      EndAddress = v11->EndAddress;
      if ( EndAddress <= v21 )
      {
        v24 = *(_QWORD *)(v9 + 40);
        EndAddress = v21;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = EndAddress;
        v24 = (unsigned int)EndAddress;
      }
      ++v11;
      ++v12;
      v21 = v24;
    }
    while ( v12 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v9 + 40) = EndAddress + BaseAddress;
  sub_1800259B4(0);
  RtlAcquireSRWLockExclusive(&stru_18015B2B0);
  v14 = (_QWORD *)qword_18016F2A0;
  LOBYTE(v15) = 0;
  if ( qword_18016F2A0 )
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
  RtlAvlInsertNodeEx(&qword_18016F2A0, v14, v15, v9 + 88);
  v17 = (__int64 *)qword_18016F2B0;
  if ( *(__int64 **)qword_18016F2B0 != &qword_18016F2A8 )
    __fastfail(3u);
  *(_QWORD *)v9 = &qword_18016F2A8;
  *(_QWORD *)(v9 + 8) = v17;
  *v17 = v9;
  qword_18016F2B0 = v9;
  RtlReleaseSRWLockExclusive(&stru_18015B2B0);
  sub_1800259B4(1);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v20 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v20 - 1;
    if ( v20 == 1 )
      RtlProtectHeap(qword_18016F270, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  return 1;
}
