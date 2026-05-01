/*
 * XREFs of ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AC60
 * Callers:
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ACD0 (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180044E68 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupRemoveHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rbx

  HampDepGroupAcquireLockExclusive(a1);
  RtlRbRemoveNode((char *)a1 + 48, (char *)a2 + 648);
  *((_QWORD *)a2 + 83) = -1LL;
  if ( (*((_BYTE *)a2 + 708) & 1) != 0 )
    HampDepGroupQueueWorker(a1);
  HampDepGroupReleaseLockExclusive(a1);
  v4 = *((_QWORD *)a1 + 4);
  HampDepGroupDereference(a1);
  if ( (struct _RM_HAM_ACTIVITY_HOST *)v4 != a2 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v4 + 576))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
    RmpReleaseGlobalLock();
  }
}
