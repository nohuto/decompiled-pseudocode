/*
 * XREFs of ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002B9FC
 * Callers:
 *     ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18002B860 (-HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003217C (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000AB98 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerMarkAcquired @ 0x18001B190 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampDepGroupInvalidateDependency(struct _HAM_HOST_DEPENDENCY *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkAcquired((__int64)a1, a2, 2u, 0);
  RtlAcquireSRWLockShared(v2 + 48);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 96)) <= 1 )
    __fastfail(0xEu);
  HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v4);
  *((_DWORD *)a1 + 9) |= 1u;
  HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v4);
  v5 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkReleased(v7, v6, 2u);
  RtlReleaseSRWLockShared(v5 + 48);
  HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v4);
  HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v4);
}
