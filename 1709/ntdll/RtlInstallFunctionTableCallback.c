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
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // r8
  __int64 v30; // r9
  int v32; // ebx
  int v33; // edx
  int v34; // ecx

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
  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v12, v13, v14);
    v32 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v32 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v32 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    if ( v10 + 112 >= 0xFF000 )
    {
LABEL_39:
      if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v15, v16, v17);
        v34 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v34 - 1;
        if ( v34 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      return 0;
    }
    ProcessHeap = (void *)LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v10 + 112);
  v20 = Heap;
  if ( !Heap )
    goto LABEL_39;
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v20 + 32) = BaseAddress;
  *(_QWORD *)(v20 + 40) = BaseAddress + v6;
  *(_QWORD *)(v20 + 64) = Context;
  *(_QWORD *)(v20 + 48) = BaseAddress;
  *(_QWORD *)(v20 + 56) = Callback;
  *(_DWORD *)(v20 + 80) = 2;
  *(_QWORD *)(v20 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v20 + 72) = v20 + 112;
    RtlStringCbCopyW((_WORD *)(v20 + 112), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v21, v22, v23);
  v24 = (_QWORD *)RtlpDynamicFunctionTableTree;
  LOBYTE(v25) = 0;
  if ( RtlpDynamicFunctionTableTree )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v20 + 32) < *(v24 - 7) )
      {
        v26 = (_QWORD *)*v24;
        if ( !*v24 )
        {
          LOBYTE(v25) = 0;
          break;
        }
      }
      else
      {
        v26 = (_QWORD *)v24[1];
        if ( !v26 )
        {
          LOBYTE(v25) = 1;
          break;
        }
      }
      v24 = v26;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTree, v24, v25, v20 + 88);
  v27 = (__int64 *)qword_18016F2A0;
  if ( *(__int64 **)qword_18016F2A0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v20 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v20 + 8) = v27;
  *v27 = v20;
  qword_18016F2A0 = v20;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v28, v29, v30);
    v33 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v33 - 1;
    if ( v33 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
