/*
 * XREFs of ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180046184
 * Callers:
 *     ?HampPkgGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PACKAGE@@@Z @ 0x180046980 (-HampPkgGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800469C4 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F90 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x1800461C8 (-HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18004642C (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetFirstHost(struct _HAM_APPLICATION *a1)
{
  __int64 v2; // rdx
  struct _RM_HAM_ACTIVITY_HOST *FirstLiveHost; // rbx

  RmpAcquireGlobalLock();
  HampAppAcquireLockShared(a1, v2);
  FirstLiveHost = HampAppGetFirstLiveHost(a1, *((struct _LIST_ENTRY **)a1 + 14));
  HampAppReleaseLockShared(a1);
  RmpReleaseGlobalLock();
  return FirstLiveHost;
}
