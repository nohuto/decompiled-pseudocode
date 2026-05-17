/*
 * XREFs of RtlDeleteFunctionTable @ 0x180072F20
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800730E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x180073280 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  unsigned __int64 v2; // rsi
  BOOLEAN v3; // di
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 *i; // rbx
  __int64 v11; // rcx
  __int64 **v12; // rax
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  int v18; // edi
  int v19; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v4, v5, v6);
  for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
  {
    v2 = (unsigned __int64)i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v7, v8, v9);
        v18 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        if ( v18 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v18 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      if ( *((_DWORD *)i + 20) != 3 )
      {
        RtlAvlRemoveNode(&RtlpDynamicFunctionTableTree, i + 11);
        v11 = *i;
        if ( *(__int64 **)(*i + 8) != i || (v12 = (__int64 **)i[1], *v12 != i) )
          __fastfail(3u);
        *v12 = (__int64 *)v11;
        *(_QWORD *)(v11 + 8) = v12;
      }
      v3 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v2 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v13 = LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v13, 0, v2);
    }
    if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v14, v15, v16);
      v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v3;
}
