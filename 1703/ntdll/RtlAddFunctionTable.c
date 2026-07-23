/*
 * XREFs of RtlAddFunctionTable @ 0x1800747E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180074D90 (RtlAvlInsertNodeEx.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // ebx
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v9; // rbx
  unsigned __int64 BeginAddress; // r8
  PRUNTIME_FUNCTION v11; // rdx
  ULONG v12; // r9d
  unsigned __int64 EndAddress; // r10
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 *v17; // rax
  int v19; // edx
  int v20; // r11d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // ecx

  if ( (int)sub_180083738() < 0 )
    return 0;
  if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    goto LABEL_19;
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
LABEL_19:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x70uLL);
  v9 = (__int64)Heap;
  if ( !Heap )
  {
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      RtlAcquireSRWLockExclusive(&stru_18015AF70);
      v23 = *(_DWORD *)qword_18016B270;
      if ( !*(_DWORD *)qword_18016B270 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016B270 = v23 - 1;
      if ( v23 == 1 )
        RtlProtectHeap(qword_18016B260, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
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
    v20 = 0;
    do
    {
      if ( !v20 && v11->BeginAddress < FunctionTable[v12 - 1].BeginAddress )
      {
        v20 = 1;
        *(_DWORD *)(v9 + 80) = 1;
      }
      v21 = v11->BeginAddress;
      if ( v21 < BeginAddress )
      {
        BeginAddress = (unsigned int)v21;
        *(_QWORD *)(v9 + 32) = v21;
      }
      v22 = v11->EndAddress;
      if ( v22 > EndAddress )
      {
        EndAddress = (unsigned int)v22;
        *(_QWORD *)(v9 + 40) = v22;
      }
      ++v11;
      ++v12;
    }
    while ( v12 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) += BaseAddress;
  *(_QWORD *)(v9 + 40) += BaseAddress;
  sub_18001DEA8(0);
  RtlAcquireSRWLockExclusive(&stru_18015A2B0);
  v14 = (_QWORD *)qword_18016B290;
  LOBYTE(v15) = 0;
  if ( qword_18016B290 )
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
  RtlAvlInsertNodeEx(&qword_18016B290, v14, v15, v9 + 88);
  v17 = (__int64 *)qword_18016B2A0;
  if ( *(__int64 **)qword_18016B2A0 != &qword_18016B298 )
    __fastfail(3u);
  *(_QWORD *)v9 = &qword_18016B298;
  *(_QWORD *)(v9 + 8) = v17;
  *v17 = v9;
  qword_18016B2A0 = v9;
  RtlReleaseSRWLockExclusive(&stru_18015A2B0);
  sub_18001DEA8(1);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v19 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v19 - 1;
    if ( v19 == 1 )
      RtlProtectHeap(qword_18016B260, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  return 1;
}
