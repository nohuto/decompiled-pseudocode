/*
 * XREFs of ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630
 * Callers:
 *     ?HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180007A10 (-HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001065C (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180010C5C (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001203C (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180012A54 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostNewProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032B94 (-RmpActivityHostNewProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032BFC (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800540F0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180054B88 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180059760 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006479C (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180010780 (-HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180011EE0 (-RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180014150 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180031070 (-RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?HampHostQueryProcessCountCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180032FE0 (-HampHostQueryProcessCountCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmHamHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        int (*a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        _QWORD *a5)
{
  unsigned int *v6; // rdi
  unsigned int *Heap; // r14
  char *v9; // rdx
  char *v10; // r10
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // r13d
  ACCESS_MASK v14; // r15d
  unsigned int v15; // r14d
  unsigned int *v16; // r12
  NTSTATUS v17; // eax
  int OfferedMemoryDxgCallback; // eax
  PVOID ProcessHeap; // rcx
  unsigned int *v21; // rax
  unsigned int v22; // [rsp+48h] [rbp-41h]
  unsigned int v23; // [rsp+4Ch] [rbp-3Dh] BYREF
  void *ProcessHandle; // [rsp+50h] [rbp-39h] BYREF
  char v25; // [rsp+58h] [rbp-31h] BYREF
  _CLIENT_ID ClientId; // [rsp+60h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF

  v6 = 0LL;
  ProcessHandle = 0LL;
  v23 = 1;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v9 = (char *)a1 + 88;
    v10 = (char *)a1 + 552;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
              v10,
              *((unsigned int *)a1 + 155),
              v9,
              *((unsigned int *)a1 + 156),
              *((_QWORD *)a1 + 4),
              Heap,
              &v23);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v6 = Heap;
        goto LABEL_5;
      }
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v11 != -2147483643 )
        break;
      RtlFreeHeap(ProcessHeap, 0, Heap);
      v21 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v23);
      v9 = (char *)a1 + 88;
      Heap = v21;
      v10 = (char *)a1 + 552;
      if ( !v21 )
      {
        v12 = -1073741801;
        goto LABEL_5;
      }
    }
    RtlFreeHeap(ProcessHeap, 0, Heap);
LABEL_5:
    v13 = v23;
    if ( v12 >= 0 )
    {
      v12 = 0;
      v14 = a2 | 0x1000;
      v15 = 0;
      if ( v23 )
      {
        v16 = v6;
        do
        {
          if ( ProcessHandle )
          {
            NtClose(ProcessHandle);
            ProcessHandle = 0LL;
          }
          v22 = *v16;
          ClientId.UniqueProcess = (HANDLE)*v16;
          ClientId.UniqueThread = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          v17 = NtOpenProcess(&ProcessHandle, v14, &ObjectAttributes, &ClientId);
          v12 = v17;
          if ( v17 < 0 )
          {
            if ( (a3 & 1) == 0 && v17 != -1073741813 )
              break;
          }
          else if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                      (char *)a1 + 552,
                      *((unsigned int *)a1 + 155),
                      (char *)a1 + 88,
                      *((unsigned int *)a1 + 156),
                      *((_QWORD *)a1 + 4),
                      ProcessHandle) )
          {
            if ( (char *)a4 == (char *)RmpActivityHostQueryOfferedMemoryDxgCallback )
            {
              OfferedMemoryDxgCallback = RmpActivityHostQueryOfferedMemoryDxgCallback(a1, ProcessHandle, v22, a5);
            }
            else if ( a4 == RmpActivityHostCommitDebtCallback )
            {
              OfferedMemoryDxgCallback = RmpActivityHostCommitDebtCallback(a1, ProcessHandle, v22, a5);
            }
            else if ( (char *)a4 == (char *)HampHostQueryProcessDebuggedCallback )
            {
              OfferedMemoryDxgCallback = HampHostQueryProcessDebuggedCallback(a1, ProcessHandle, v22, a5);
            }
            else if ( a4 == RmpEnforcementApplyForegroundBoost )
            {
              OfferedMemoryDxgCallback = RmpEnforcementApplyForegroundBoost(a1, ProcessHandle, v22, a5);
            }
            else
            {
              OfferedMemoryDxgCallback = a4 == HampHostQueryProcessCountCallback
                                       ? HampHostQueryProcessCountCallback(a1, ProcessHandle, v22, a5)
                                       : ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, _QWORD, _QWORD *))a4)(
                                           a1,
                                           ProcessHandle,
                                           v22,
                                           a5);
            }
            v12 = OfferedMemoryDxgCallback;
            if ( OfferedMemoryDxgCallback < 0 && (a3 & 1) == 0 )
              break;
          }
          ++v15;
          v16 += 2;
          v12 = 0;
        }
        while ( v15 < v13 );
      }
    }
    if ( v6 && v6 != (unsigned int *)&v25 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  else
  {
    v12 = -1073741801;
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v12;
}
