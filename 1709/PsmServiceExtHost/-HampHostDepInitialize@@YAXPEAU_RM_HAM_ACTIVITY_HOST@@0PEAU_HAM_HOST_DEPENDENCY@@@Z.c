/*
 * XREFs of ?HampHostDepInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180045710
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180040228 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

void __fastcall HampHostDepInitialize(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_HOST_DEPENDENCY *a3)
{
  memset_0(a3, 0, 0x58uLL);
  RmpAcquireGlobalLock();
  *(_QWORD *)a3 = RmHamHostReference(a1);
  *((_QWORD *)a3 + 1) = RmHamHostReference(a2);
  RmpReleaseGlobalLock();
  *((_QWORD *)a3 + 7) = 0LL;
  *((_QWORD *)a3 + 8) = 0LL;
  *((_QWORD *)a3 + 9) = 0LL;
  *((_QWORD *)a3 + 9) = -1LL;
}
