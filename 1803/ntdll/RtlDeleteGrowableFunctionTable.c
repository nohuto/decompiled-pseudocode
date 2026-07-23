/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x18006A480
 * Callers:
 *     RtlDeleteFunctionTable @ 0x18006A2B0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlAvlRemoveNode @ 0x18006A620 (RtlAvlRemoveNode.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
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
  v2 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDynamicFunctionTableInformation, &v9, 0x10u);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  sub_1800259B4(0);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v7 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap(qword_18016F270, 0);
    if ( v7 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v7 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  RtlAcquireSRWLockExclusive(&stru_18015B2B0);
  RtlAvlRemoveNode(&qword_18016F2A0, (char *)DynamicTable + 88);
  v3 = *(_QWORD **)DynamicTable;
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable
    || (v4 = (PVOID *)*((_QWORD *)DynamicTable + 1), *v4 != DynamicTable) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = v4;
  RtlReleaseSRWLockExclusive(&stru_18015B2B0);
  LOBYTE(v5) = LdrControlFlowGuardEnforced();
  if ( v5 )
    ProcessHeap = qword_18016F270;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v8 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v8 - 1;
    if ( v8 == 1 )
      RtlProtectHeap(qword_18016F270, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  sub_1800259B4(1);
}
