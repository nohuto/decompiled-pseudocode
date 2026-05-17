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
    RtlRaiseStatus(-1073741811);
  v15 = a1;
  v16 = 1;
  v2 = NtSetInformationProcess(-1LL, 53LL, &v15, 16LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  LdrProtectMrdata(0);
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v3, v4, v5);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v13 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v3, v4, v5);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTree, a1 + 88);
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = *(_QWORD **)(a1 + 8), *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v9, v10, v11);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 - 1;
    if ( v14 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return LdrProtectMrdata(1);
}
