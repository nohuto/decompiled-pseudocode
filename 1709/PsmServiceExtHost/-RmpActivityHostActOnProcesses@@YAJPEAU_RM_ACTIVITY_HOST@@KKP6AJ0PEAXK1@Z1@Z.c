/*
 * XREFs of ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8
 * Callers:
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005188 (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008A64 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001F1DC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180035C00 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800365B0 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003A890 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004346C (-HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180005AA0 (-RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800073D0 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpSystemIsProcessInApplication@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180008A0C (-RmpSystemIsProcessInApplication@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpActivityHostGetPsmProcessList@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEA_KPEAK@Z @ 0x180008C64 (-RmpActivityHostGetPsmProcessList@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEA_KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        int a3,
        int (*a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        _QWORD *a5)
{
  char v6; // si
  int PsmProcessList; // eax
  char *v10; // r14
  NTSTATUS v11; // ebx
  ACCESS_MASK v12; // r12d
  __int64 v13; // rsi
  unsigned int v14; // r13d
  int v15; // eax
  void *ProcessHandle; // [rsp+30h] [rbp-41h] BYREF
  PVOID P; // [rsp+38h] [rbp-39h] BYREF
  char v19; // [rsp+40h] [rbp-31h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+48h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+5Fh] BYREF
  int v23; // [rsp+E0h] [rbp+6Fh]

  v23 = a3;
  P = 0LL;
  ProcessHandle = 0LL;
  v6 = a3;
  if ( *((_DWORD *)a1 + 14) == 1 )
  {
    v11 = ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, _QWORD, _QWORD, _QWORD *))a4)(
            a1,
            *((_QWORD *)a1 + 116),
            *((unsigned int *)a1 + 22),
            a5);
    if ( (v6 & 1) != 0 )
      v11 = 0;
  }
  else
  {
    PsmProcessList = RmpActivityHostGetPsmProcessList(a1, (unsigned __int64 **)&P, &v22);
    v10 = (char *)P;
    v11 = PsmProcessList;
    if ( PsmProcessList >= 0 )
    {
      v12 = a2 | 0x1000;
      v13 = 0LL;
      if ( v22 )
      {
        while ( 1 )
        {
          if ( ProcessHandle )
          {
            NtClose(ProcessHandle);
            ProcessHandle = 0LL;
          }
          v14 = *(_DWORD *)&v10[8 * v13];
          ClientId.UniqueProcess = (HANDLE)v14;
          ClientId.UniqueThread = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v11 = NtOpenProcess(&ProcessHandle, v12, &ObjectAttributes, &ClientId);
          if ( v11 < 0
            || RmpSystemIsProcessInApplication(a1, ProcessHandle)
            && ((char *)a4 != (char *)RmpActivityHostCommitDebtCallback
              ? ((char *)a4 != (char *)RmpEnforcementApplyForegroundBoost
               ? (v15 = ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, _QWORD, _QWORD *))a4)(
                          a1,
                          ProcessHandle,
                          v14,
                          a5))
               : (v15 = RmpEnforcementApplyForegroundBoost(a1, ProcessHandle, v14, a5)))
              : (v15 = RmpActivityHostCommitDebtCallback(a1, ProcessHandle, v14, a5)),
                v11 = v15,
                v15 < 0) )
          {
            if ( (v23 & 1) == 0 )
              break;
          }
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v22 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v11 = 0;
      }
    }
    if ( v10 && v10 != &v19 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v11;
}
