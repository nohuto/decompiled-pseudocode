/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180073C20
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlpDynamicFunctionTableTreeFindRoutine @ 0x180073EAC (RtlpDynamicFunctionTableTreeFindRoutine.c)
 *     RtlAvlInsertNodeEx @ 0x180073ED0 (RtlAvlInsertNodeEx.c)
 *     NtSetInformationProcess @ 0x1800A0440 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A0C00 (ZwQuerySystemTime.c)
 */

DWORD __cdecl RtlAddGrowableFunctionTable(
        PVOID *DynamicTable,
        PRUNTIME_FUNCTION FunctionTable,
        DWORD EntryCount,
        DWORD MaximumEntryCount,
        ULONG_PTR RangeBase,
        ULONG_PTR RangeEnd)
{
  DWORD result; // eax
  int v10; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 *v13; // rbx
  NTSTATUS v14; // ebp
  __int64 v15; // r8
  __int64 *i; // rax
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  __int64 **v21; // rax
  int v22; // ebx
  int v23; // ecx
  int v24; // eax
  PVOID v25; // rcx
  int v26; // eax
  PVOID v27; // rcx
  int v28; // ecx
  int v29; // ecx
  __int64 *ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  char v31; // [rsp+28h] [rbp-20h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  if ( (result & 0x80000000) == 0 )
  {
    if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap(LdrpMrdataHeap, 0);
      if ( v22 == -1 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v22 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    LOBYTE(v10) = LdrControlFlowGuardEnforced();
    if ( v10 )
      ProcessHeap = LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x70uLL);
    v13 = (__int64 *)Heap;
    if ( Heap )
    {
      Heap[2].QuadPart = (__int64)FunctionTable;
      Heap[10].HighPart = EntryCount;
      ZwQuerySystemTime(Heap + 3);
      v13[4] = RangeBase;
      v13[5] = RangeEnd;
      v13[6] = RangeBase;
      *((_DWORD *)v13 + 20) = 3;
      ProcessInformation = v13;
      v31 = 0;
      v14 = NtSetInformationProcess(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              ProcessDynamicFunctionTableInformation,
              &ProcessInformation,
              0x10u);
      if ( v14 < 0 )
      {
        LOBYTE(v24) = LdrControlFlowGuardEnforced();
        if ( v24 )
          v25 = LdrpMrdataHeap;
        else
          v25 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v25, 0, v13);
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
LABEL_34:
          *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
          if ( v23 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        return v14;
      }
      else
      {
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
        for ( i = (__int64 *)RtlpDynamicFunctionTable; ; i = (__int64 *)*i )
        {
          if ( i == &RtlpDynamicFunctionTable )
            goto LABEL_15;
          v17 = i[5];
          if ( RangeBase < v17 )
          {
            v18 = i[4];
            if ( RangeEnd > v18 )
              break;
          }
        }
        if ( v18 == RangeBase && v17 == RangeEnd )
        {
LABEL_15:
          v19 = (_QWORD *)RtlpDynamicFunctionTableTree;
          LOBYTE(v15) = 0;
          if ( !RtlpDynamicFunctionTableTree )
            goto LABEL_22;
          while ( 1 )
          {
            if ( (int)RtlpDynamicFunctionTableTreeFindRoutine(v13[4], v19, v15) < 0 )
            {
              v20 = (_QWORD *)*v19;
              if ( !*v19 )
              {
                LOBYTE(v15) = 0;
                goto LABEL_22;
              }
            }
            else
            {
              v20 = (_QWORD *)v19[1];
              if ( !v20 )
              {
                LOBYTE(v15) = 1;
LABEL_22:
                RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTree, v19, v15, v13 + 11);
                v21 = (__int64 **)qword_18016F2A0;
                if ( *(__int64 **)qword_18016F2A0 != &RtlpDynamicFunctionTable )
                  __fastfail(3u);
                *v13 = (__int64)&RtlpDynamicFunctionTable;
                v13[1] = (__int64)v21;
                *v21 = v13;
                qword_18016F2A0 = (__int64)v13;
                RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
                LdrProtectMrdata(1);
                *DynamicTable = v13;
                if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
                {
                  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
                  v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
                  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
                  {
                    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                    __fastfail(0xEu);
                  }
                  goto LABEL_34;
                }
                return v14;
              }
            }
            v19 = v20;
          }
        }
        RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
        LdrProtectMrdata(1);
        v31 = 1;
        NtSetInformationProcess(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          ProcessDynamicFunctionTableInformation,
          &ProcessInformation,
          0x10u);
        LOBYTE(v26) = LdrControlFlowGuardEnforced();
        if ( v26 )
          v27 = LdrpMrdataHeap;
        else
          v27 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v27, 0, v13);
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
          if ( v28 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        return -1073741800;
      }
    }
    else
    {
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v29 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v29 - 1;
        if ( v29 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      return -1073741670;
    }
  }
  return result;
}
