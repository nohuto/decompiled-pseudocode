/*
 * XREFs of ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180014B10
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x1800334DC (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180040500 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x180001810 (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180004090 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x180020328 (-RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x1800252D0 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800254EC (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x1800259FC (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionTableFindOrCreatePartition(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        struct _RM_PARTITION **a3)
{
  void *v4; // rsi
  char *v6; // r12
  char *v7; // r14
  __int64 *v8; // rdi
  struct _RM_PARTITION *Heap; // rax
  struct _RM_PARTITION *v11; // rdi
  int State; // eax
  struct _RM_PARTITION *PartitionInternal; // rax
  unsigned __int64 v14; // r8
  char *v15; // rax
  char **v16; // rcx
  void *v17; // rcx
  int v18; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  void *v22; // [rsp+60h] [rbp-19h]
  int v23; // [rsp+68h] [rbp-11h]
  int v24; // [rsp+6Ch] [rbp-Dh]
  int *v25; // [rsp+70h] [rbp-9h]
  __int64 v26; // [rsp+78h] [rbp-1h]
  unsigned __int64 *v27; // [rsp+80h] [rbp+7h]
  __int64 v28; // [rsp+88h] [rbp+Fh]

  v19 = 0LL;
  v4 = a2;
  if ( a2 == (void *)-2LL )
    v4 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
  {
    v18 = -1073741058;
LABEL_9:
    RtlReleaseSRWLockShared(a1);
    goto LABEL_10;
  }
  v6 = (char *)*((_QWORD *)a1 + 2);
  v7 = (char *)a1 + 16;
  if ( v6 != (char *)a1 + 16 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)(v6 - 8);
      if ( (int)NtCompareObjects(*((_QWORD *)v6 + 3), v4) >= 0 )
        break;
      v6 = *(char **)v6;
      if ( v6 == v7 )
        goto LABEL_17;
    }
    if ( (v8[28] & 3) == 1 )
    {
      if ( _InterlockedIncrement64(v8) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_PARTITION *)v8;
      v18 = 0;
      goto LABEL_9;
    }
  }
LABEL_17:
  RtlReleaseSRWLockShared(a1);
  Heap = (struct _RM_PARTITION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v11 = Heap;
  if ( !Heap )
  {
    v18 = -1073741801;
    goto LABEL_12;
  }
  RmpPartitionInitialize((struct _RM_PARTITION_TABLE *)((char *)a1 - 312), Heap);
  State = RmpMemoryMonitorAllocateState((struct _RM_PARTITION *)((char *)v11 + 40));
  if ( State >= 0 )
    State = 0;
  v18 = State;
  if ( State >= 0 )
  {
    RmpAcquireGlobalLock();
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    ++*((_DWORD *)a1 + 20);
    v18 = RmpArrayGrow<_RM_PARTITION *>(
            (PVOID *)a1 + 8,
            (unsigned int *)a1 + 18,
            *((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 20));
    RmpReleaseGlobalLock();
    if ( v18 >= 0 )
    {
      if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
      {
LABEL_37:
        v18 = -1073741058;
      }
      else
      {
        while ( 1 )
        {
          PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v4, 0xFu);
          if ( !PartitionInternal )
          {
            v14 = *((_QWORD *)a1 + 7);
            v19 = v14;
            *((_QWORD *)a1 + 7) = v14 + 1;
            v18 = RmpPartitionStart(v11, v4, v14);
            if ( v18 < 0 )
            {
              v17 = (void *)*((_QWORD *)v11 + 4);
              if ( v17 )
              {
                NtClose(v17);
                *((_QWORD *)v11 + 4) = 0LL;
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 19);
              v15 = (char *)v11 + 8;
              v16 = (char **)*((_QWORD *)a1 + 3);
              if ( *v16 != v7 )
                __fastfail(3u);
              *((_QWORD *)v11 + 2) = v16;
              *(_QWORD *)v15 = v7;
              *v16 = v15;
              *((_QWORD *)a1 + 3) = v15;
              RtlWakeAllConditionVariable((char *)a1 + 32);
              *a3 = v11;
              v11 = 0LL;
              v18 = 0;
            }
            goto LABEL_27;
          }
          if ( (*((_DWORD *)PartitionInternal + 56) & 3) == 1 )
            break;
          CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 32);
          if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
            goto LABEL_37;
        }
        if ( _InterlockedIncrement64((volatile signed __int64 *)PartitionInternal) <= 1 )
          __fastfail(0xEu);
        *a3 = PartitionInternal;
        v18 = 0;
      }
    }
LABEL_27:
    --*((_DWORD *)a1 + 20);
    *((_DWORD *)a1 + 2) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  if ( v11 )
    RmpPartitionRelease((HANDLE *)v11);
LABEL_10:
  if ( v18 >= 0 )
    v19 = *((_QWORD *)*a3 + 27);
LABEL_12:
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    v26 = 4LL;
    v25 = &v18;
    v27 = &v19;
    v28 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180058615 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v22 = &unk_180058620;
    UserData.Reserved = 2;
    v23 = 40;
    v24 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (unsigned int)v18;
}
