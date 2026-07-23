/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x18006AD20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_18006AFAC @ 0x18006AFAC (sub_18006AFAC.c)
 *     RtlAvlInsertNodeEx @ 0x18006AFD0 (RtlAvlInsertNodeEx.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
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
  LONGLONG *v13; // rbx
  NTSTATUS v14; // ebp
  __int64 v15; // r8
  __int64 *i; // rax
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  LONGLONG **v21; // rax
  int v22; // ebx
  int v23; // ecx
  int v24; // eax
  PVOID v25; // rcx
  int v26; // eax
  PVOID v27; // rcx
  int v28; // ecx
  int v29; // ecx
  LONGLONG *ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  char v31; // [rsp+28h] [rbp-20h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = sub_18007CFD4();
  if ( (result & 0x80000000) == 0 )
  {
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015BF98);
      v22 = *(_DWORD *)qword_18016F280;
      if ( !*(_DWORD *)qword_18016F280 )
        RtlProtectHeap(qword_18016F270, 0);
      if ( v22 == -1 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016F280 = v22 + 1;
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
    }
    LOBYTE(v10) = LdrControlFlowGuardEnforced();
    if ( v10 )
      ProcessHeap = qword_18016F270;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x70uLL);
    v13 = (LONGLONG *)Heap;
    if ( Heap )
    {
      Heap[2].QuadPart = (LONGLONG)FunctionTable;
      Heap[10].HighPart = EntryCount;
      ZwQuerySystemTime(Heap + 3);
      v13[4] = RangeBase;
      v13[5] = RangeEnd;
      v13[6] = RangeBase;
      *((_DWORD *)v13 + 20) = 3;
      ProcessInformation = v13;
      v31 = 0;
      v14 = ZwSetInformationProcess(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              ProcessDynamicFunctionTableInformation,
              &ProcessInformation,
              0x10u);
      if ( v14 < 0 )
      {
        LOBYTE(v24) = LdrControlFlowGuardEnforced();
        if ( v24 )
          v25 = qword_18016F270;
        else
          v25 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v25, 0, v13);
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&stru_18015BF98);
          v23 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
          {
            RtlReleaseSRWLockExclusive(&stru_18015BF98);
            __fastfail(0xEu);
          }
LABEL_34:
          *(_DWORD *)qword_18016F280 = v23 - 1;
          if ( v23 == 1 )
            RtlProtectHeap(qword_18016F270, 1u);
          RtlReleaseSRWLockExclusive(&stru_18015BF98);
        }
        return v14;
      }
      else
      {
        sub_1800259B4(0);
        RtlAcquireSRWLockExclusive(&stru_18015B2B0);
        for ( i = (__int64 *)qword_18016F2A8; ; i = (__int64 *)*i )
        {
          if ( i == &qword_18016F2A8 )
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
          v19 = (_QWORD *)qword_18016F2A0;
          LOBYTE(v15) = 0;
          if ( !qword_18016F2A0 )
            goto LABEL_22;
          while ( 1 )
          {
            if ( (int)sub_18006AFAC(v13[4], v19) < 0 )
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
                RtlAvlInsertNodeEx(&qword_18016F2A0, v19, v15, v13 + 11);
                v21 = (LONGLONG **)qword_18016F2B0;
                if ( *(__int64 **)qword_18016F2B0 != &qword_18016F2A8 )
                  __fastfail(3u);
                *v13 = (LONGLONG)&qword_18016F2A8;
                v13[1] = (LONGLONG)v21;
                *v21 = v13;
                qword_18016F2B0 = (__int64)v13;
                RtlReleaseSRWLockExclusive(&stru_18015B2B0);
                sub_1800259B4(1);
                *DynamicTable = v13;
                if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
                {
                  RtlAcquireSRWLockExclusive(&stru_18015BF98);
                  v23 = *(_DWORD *)qword_18016F280;
                  if ( !*(_DWORD *)qword_18016F280 )
                  {
                    RtlReleaseSRWLockExclusive(&stru_18015BF98);
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
        RtlReleaseSRWLockExclusive(&stru_18015B2B0);
        sub_1800259B4(1);
        v31 = 1;
        ZwSetInformationProcess(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          ProcessDynamicFunctionTableInformation,
          &ProcessInformation,
          0x10u);
        LOBYTE(v26) = LdrControlFlowGuardEnforced();
        if ( v26 )
          v27 = qword_18016F270;
        else
          v27 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v27, 0, v13);
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&stru_18015BF98);
          v28 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
          {
            RtlReleaseSRWLockExclusive(&stru_18015BF98);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016F280 = v28 - 1;
          if ( v28 == 1 )
            RtlProtectHeap(qword_18016F270, 1u);
          RtlReleaseSRWLockExclusive(&stru_18015BF98);
        }
        return -1073741800;
      }
    }
    else
    {
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015BF98);
        v29 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v29 - 1;
        if ( v29 == 1 )
          RtlProtectHeap(qword_18016F270, 1u);
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
      }
      return -1073741670;
    }
  }
  return result;
}
