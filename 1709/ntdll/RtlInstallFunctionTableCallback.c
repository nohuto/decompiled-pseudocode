/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x180073620
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlStringCbCopyW @ 0x1800528E4 (RtlStringCbCopyW.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlAvlInsertNodeEx @ 0x180073ED0 (RtlAvlInsertNodeEx.c)
 *     ZwQuerySystemTime @ 0x1800A0C00 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 *v19; // rax
  int v21; // ebx
  int v22; // edx
  int v23; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v21 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v21 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 )
  {
    if ( v10 + 112 >= 0xFF000 )
    {
LABEL_39:
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
        if ( v23 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      return 0;
    }
    ProcessHeap = LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, v10 + 112);
  v15 = (__int64)Heap;
  if ( !Heap )
    goto LABEL_39;
  Heap[2].QuadPart = TableIdentifier;
  ZwQuerySystemTime(Heap + 3);
  *(_QWORD *)(v15 + 32) = BaseAddress;
  *(_QWORD *)(v15 + 40) = BaseAddress + v6;
  *(_QWORD *)(v15 + 64) = Context;
  *(_QWORD *)(v15 + 48) = BaseAddress;
  *(_QWORD *)(v15 + 56) = Callback;
  *(_DWORD *)(v15 + 80) = 2;
  *(_QWORD *)(v15 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v15 + 72) = v15 + 112;
    RtlStringCbCopyW((_WORD *)(v15 + 112), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v16 = (_QWORD *)RtlpDynamicFunctionTableTree;
  LOBYTE(v17) = 0;
  if ( RtlpDynamicFunctionTableTree )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v15 + 32) < *(v16 - 7) )
      {
        v18 = (_QWORD *)*v16;
        if ( !*v16 )
        {
          LOBYTE(v17) = 0;
          break;
        }
      }
      else
      {
        v18 = (_QWORD *)v16[1];
        if ( !v18 )
        {
          LOBYTE(v17) = 1;
          break;
        }
      }
      v16 = v18;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTree, v16, v17, v15 + 88);
  v19 = (__int64 *)qword_18016F2A0;
  if ( *(__int64 **)qword_18016F2A0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v15 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v15 + 8) = v19;
  *v19 = v15;
  qword_18016F2A0 = v15;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v22 - 1;
    if ( v22 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
