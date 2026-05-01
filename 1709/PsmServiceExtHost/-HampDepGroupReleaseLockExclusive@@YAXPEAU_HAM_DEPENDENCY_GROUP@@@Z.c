/*
 * XREFs of ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198
 * Callers:
 *     ?HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018DE8 (-HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVI.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190A0 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeDesiredPsmState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A468 (-HampHostComputeDesiredPsmState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AC60 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180040264 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180043254 (-HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x180044658 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180044B28 (-HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045038 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180045330 (-HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045538 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180045780 (-HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800471A4 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C (-HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18004800C (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 * Callees:
 *     <none>
 */

void __fastcall HampDepGroupReleaseLockExclusive(struct _HAM_DEPENDENCY_GROUP *a1)
{
  _BYTE *Value; // rax

  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*Value & 4) == 0 )
      __int2c();
    if ( Value[10]-- == 1 )
      *(_QWORD *)Value &= ~4uLL;
  }
}
