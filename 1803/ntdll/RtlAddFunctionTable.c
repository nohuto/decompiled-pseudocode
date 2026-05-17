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
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v16; // r8
  ULONG v17; // edi
  unsigned __int64 EndAddress; // rcx
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
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r9
  int v34; // r11d
  unsigned __int64 v35; // rdx
  int v36; // ecx

  if ( (int)sub_18007CFD4() < 0 )
    return 0;
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v6, v7, v8);
    v30 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 0);
    if ( v30 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v30 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)qword_18016F270;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 112LL);
  v14 = Heap;
  if ( !Heap )
  {
    if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
      v36 = *(_DWORD *)qword_18016F280;
      if ( !*(_DWORD *)qword_18016F280 )
      {
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016F280 = v36 - 1;
      if ( v36 == 1 )
        RtlProtectHeap((_DWORD *)qword_18016F270, 1);
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
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
    v32 = EndAddress;
    v33 = BeginAddress;
    v34 = 0;
    do
    {
      if ( !v34 && v16->BeginAddress < FunctionTable[v17 - 1].BeginAddress )
      {
        v34 = 1;
        *(_DWORD *)(v14 + 80) = 1;
      }
      BeginAddress = v16->BeginAddress;
      if ( BeginAddress >= v33 )
      {
        BeginAddress = v33;
      }
      else
      {
        v33 = (unsigned int)BeginAddress;
        *(_QWORD *)(v14 + 32) = BeginAddress;
      }
      EndAddress = v16->EndAddress;
      if ( EndAddress <= v32 )
      {
        v35 = *(_QWORD *)(v14 + 40);
        EndAddress = v32;
      }
      else
      {
        *(_QWORD *)(v14 + 40) = EndAddress;
        v35 = (unsigned int)EndAddress;
      }
      ++v16;
      ++v17;
      v32 = v35;
    }
    while ( v17 < EntryCount );
  }
  *(_QWORD *)(v14 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v14 + 40) = EndAddress + BaseAddress;
  sub_1800259B4(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015B2B0, v19, v20, v21);
  v22 = (_QWORD *)qword_18016F2A0;
  LOBYTE(v23) = 0;
  if ( qword_18016F2A0 )
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
  RtlAvlInsertNodeEx(&qword_18016F2A0, v22, v23, v14 + 88);
  v25 = (__int64 *)qword_18016F2B0;
  if ( *(__int64 **)qword_18016F2B0 != &qword_18016F2A8 )
    __fastfail(3u);
  *(_QWORD *)v14 = &qword_18016F2A8;
  *(_QWORD *)(v14 + 8) = v25;
  *v25 = v14;
  qword_18016F2B0 = v14;
  RtlReleaseSRWLockExclusive(&qword_18015B2B0);
  sub_1800259B4(1);
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v26, v27, v28);
    v31 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v31 - 1;
    if ( v31 == 1 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 1);
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  return 1;
}
