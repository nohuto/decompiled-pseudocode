/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x180074030
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180073E80 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1800741C0 (RtlAvlRemoveNode.c)
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 */

void __cdecl RtlDeleteGrowableFunctionTable(PVOID DynamicTable)
{
  int v2; // eax
  _QWORD *v3; // rdx
  PVOID *v4; // rax
  PVOID ProcessHeap; // rcx
  int v6; // edi
  int v7; // ecx
  PVOID v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)DynamicTable + 20) != 3 )
    RtlRaiseStatus(-1073741811);
  v8 = DynamicTable;
  v9 = 1;
  v2 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDynamicFunctionTableInformation, &v8, 0x10u);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  sub_18001DEA8(0);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
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
  }
  RtlAcquireSRWLockExclusive(&stru_18015A2B0);
  RtlAvlRemoveNode(&qword_18016B290, (char *)DynamicTable + 88);
  v3 = *(_QWORD **)DynamicTable;
  v4 = (PVOID *)*((_QWORD *)DynamicTable + 1);
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable || *v4 != DynamicTable )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  RtlReleaseSRWLockExclusive(&stru_18015A2B0);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    ProcessHeap = qword_18016B260;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v7 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v7 - 1;
    if ( v7 == 1 )
      RtlProtectHeap(qword_18016B260, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  sub_18001DEA8(1);
}
