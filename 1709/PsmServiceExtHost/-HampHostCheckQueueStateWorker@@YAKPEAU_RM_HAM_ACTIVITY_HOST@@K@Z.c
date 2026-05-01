/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800446D8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C (-HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016EC0 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostComputeDesiredPsmState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A468 (-HampHostComputeDesiredPsmState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FDC4 (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  struct _HAM_DEPENDENCY_GROUP *v2; // r14
  unsigned int v5; // ebx
  int v6; // r11d
  int v7; // r9d
  int v8; // r10d
  BOOL v9; // esi
  int v10; // eax

  v2 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 80);
  HampDepGroupAcquireLockExclusive(v2);
  v5 = 1;
  v6 = HampHostComputeDesiredPsmState(a1, 1LL);
  v7 = *((_DWORD *)a1 + 237) & 0x180;
  v8 = *((_DWORD *)a1 + 238) & 0x180;
  v9 = v6 != v7 || (a2 & 2) != 0 || HampHostShouldTerminate(a1);
  if ( ((v6 & 0x80u) != 0 || ((v8 | v7) & 0x80u) == 0) && ((a2 & 1) == 0 || (*((_BYTE *)a1 + 628) & 3) == 0) )
    v5 = 0;
  HampDepGroupReleaseLockExclusive(v2);
  if ( v5 )
  {
    if ( !v9 )
      return v5;
    if ( (*((_BYTE *)a1 + 952) & 0x27) != 0 )
      RmHamEnforcementEmptySignalAbort(a1);
  }
  if ( v9 )
  {
    v10 = *((_DWORD *)a1 + 157);
    if ( (v10 & 0x400) == 0 )
    {
      *((_DWORD *)a1 + 157) = v10 | 0x400;
      RmpObjectAddRef((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
      TpPostWork(*((_QWORD *)a1 + 77));
    }
  }
  return v5;
}
