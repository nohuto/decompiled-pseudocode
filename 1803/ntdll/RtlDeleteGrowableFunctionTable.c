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

__int64 __fastcall RtlDeleteGrowableFunctionTable(unsigned __int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rax
  void *ProcessHeap; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  int v13; // edi
  int v14; // ecx
  unsigned __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
    RtlRaiseStatus(3221225485LL);
  v15 = a1;
  v16 = 1;
  v2 = ZwSetInformationProcess(-1LL, 53LL, &v15, 16LL);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  sub_1800259B4(0);
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v3, v4, v5);
    v13 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 0);
    if ( v13 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v13 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015B2B0, v3, v4, v5);
  RtlAvlRemoveNode(&qword_18016F2A0, a1 + 88);
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = *(_QWORD **)(a1 + 8), *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&qword_18015B2B0);
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)qword_18016F270;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v9, v10, v11);
    v14 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v14 - 1;
    if ( v14 == 1 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 1);
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  return sub_1800259B4(1);
}
