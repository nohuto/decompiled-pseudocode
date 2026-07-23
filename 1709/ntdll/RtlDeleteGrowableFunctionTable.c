/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800730E0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180072F20 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlAvlRemoveNode @ 0x180073280 (RtlAvlRemoveNode.c)
 *     NtSetInformationProcess @ 0x1800A0440 (NtSetInformationProcess.c)
 */

void __cdecl RtlDeleteGrowableFunctionTable(PVOID DynamicTable)
{
  int v2; // eax
  _QWORD *v3; // rdx
  PVOID *v4; // rax
  int v5; // eax
  PVOID ProcessHeap; // rcx
  int v7; // edi
  int v8; // ecx
  PVOID v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)DynamicTable + 20) != 3 )
    RtlRaiseStatus(-1073741811);
  v9 = DynamicTable;
  v10 = 1;
  v2 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDynamicFunctionTableInformation, &v9, 0x10u);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  LdrProtectMrdata(0);
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v7 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTree, (char *)DynamicTable + 88);
  v3 = *(_QWORD **)DynamicTable;
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable
    || (v4 = (PVOID *)*((_QWORD *)DynamicTable + 1), *v4 != DynamicTable) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = v4;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LOBYTE(v5) = LdrControlFlowGuardEnforced();
  if ( v5 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v8 - 1;
    if ( v8 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LdrProtectMrdata(1);
}
