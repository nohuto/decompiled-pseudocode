/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180074B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180074D74 @ 0x180074D74 (sub_180074D74.c)
 *     RtlAvlInsertNodeEx @ 0x180074D90 (RtlAvlInsertNodeEx.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
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
  int v10; // ebx
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  LONGLONG *v13; // rbx
  NTSTATUS v14; // ebp
  __int64 v15; // r8
  __int64 *i; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  LONGLONG **v19; // rax
  int v20; // ecx
  PVOID v21; // rcx
  PVOID v22; // rcx
  int v23; // ecx
  int v24; // ecx
  LONGLONG *ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  char v26; // [rsp+28h] [rbp-20h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = sub_180083738();
  if ( (result & 0x80000000) == 0 )
  {
    if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      goto LABEL_29;
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v10 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
      RtlProtectHeap(qword_18016B260, 0);
    if ( v10 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v10 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      ProcessHeap = qword_18016B260;
    else
LABEL_29:
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
      v26 = 0;
      v14 = ZwSetInformationProcess(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              ProcessDynamicFunctionTableInformation,
              &ProcessInformation,
              0x10u);
      if ( v14 < 0 )
      {
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
          v21 = qword_18016B260;
        else
          v21 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v21, 0, v13);
        if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
          return v14;
        RtlAcquireSRWLockExclusive(&stru_18015AF70);
        v20 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
          __fastfail(0xEu);
        }
        goto LABEL_31;
      }
      sub_18001DEA8(0);
      RtlAcquireSRWLockExclusive(&stru_18015A2B0);
      for ( i = (__int64 *)qword_18016B298; ; i = (__int64 *)*i )
      {
        if ( i == &qword_18016B298 )
          goto LABEL_18;
        if ( RangeBase < i[5] && RangeEnd > i[4] )
          break;
      }
      if ( i[4] == RangeBase && i[5] == RangeEnd )
      {
LABEL_18:
        v17 = (_QWORD *)qword_18016B290;
        LOBYTE(v15) = 0;
        if ( !qword_18016B290 )
          goto LABEL_25;
        while ( 1 )
        {
          if ( (int)sub_180074D74(v13[4], v17, v15) < 0 )
          {
            v18 = (_QWORD *)*v17;
            if ( !*v17 )
            {
              LOBYTE(v15) = 0;
              goto LABEL_25;
            }
          }
          else
          {
            v18 = (_QWORD *)v17[1];
            if ( !v18 )
            {
              LOBYTE(v15) = 1;
LABEL_25:
              RtlAvlInsertNodeEx(&qword_18016B290, v17, v15, v13 + 11);
              v19 = (LONGLONG **)qword_18016B2A0;
              if ( *(__int64 **)qword_18016B2A0 != &qword_18016B298 )
                __fastfail(3u);
              *v13 = (LONGLONG)&qword_18016B298;
              v13[1] = (LONGLONG)v19;
              *v19 = v13;
              qword_18016B2A0 = (__int64)v13;
              RtlReleaseSRWLockExclusive(&stru_18015A2B0);
              sub_18001DEA8(1);
              *DynamicTable = v13;
              if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
                return v14;
              RtlAcquireSRWLockExclusive(&stru_18015AF70);
              v20 = *(_DWORD *)qword_18016B270;
              if ( !*(_DWORD *)qword_18016B270 )
              {
                RtlReleaseSRWLockExclusive(&stru_18015AF70);
                __fastfail(0xEu);
              }
LABEL_31:
              *(_DWORD *)qword_18016B270 = v20 - 1;
              if ( v20 == 1 )
                RtlProtectHeap(qword_18016B260, 1u);
              RtlReleaseSRWLockExclusive(&stru_18015AF70);
              return v14;
            }
          }
          v17 = v18;
        }
      }
      RtlReleaseSRWLockExclusive(&stru_18015A2B0);
      sub_18001DEA8(1);
      v26 = 1;
      ZwSetInformationProcess(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        ProcessDynamicFunctionTableInformation,
        &ProcessInformation,
        0x10u);
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
        v22 = qword_18016B260;
      else
        v22 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v22, 0, v13);
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      {
        RtlAcquireSRWLockExclusive(&stru_18015AF70);
        v23 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016B270 = v23 - 1;
        if ( v23 == 1 )
          RtlProtectHeap(qword_18016B260, 1u);
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
      }
      return -1073741800;
    }
    else
    {
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      {
        RtlAcquireSRWLockExclusive(&stru_18015AF70);
        v24 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016B270 = v24 - 1;
        if ( v24 == 1 )
          RtlProtectHeap(qword_18016B260, 1u);
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
      }
      return -1073741670;
    }
  }
  return result;
}
