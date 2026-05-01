/*
 * XREFs of ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18004094C
 * Callers:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180040724 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006776C (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_ST.c)
 * Callees:
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800094A0 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800094FC (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011D7C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppTryReferenceMixedHost(struct _HAM_APPLICATION *a1)
{
  __int64 v2; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v3; // rcx
  __int64 v4; // rbx

  RmpAcquireGlobalLock();
  HampAppAcquireLockShared(a1);
  v3 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 71);
  v4 = 0LL;
  if ( v3 && (unsigned int)RmHamHostReferenceUnsafe(v3) )
    v4 = *((_QWORD *)a1 + 71);
  HampAppReleaseLockShared(a1, v2);
  RmpReleaseGlobalLock();
  return (struct _RM_HAM_ACTIVITY_HOST *)v4;
}
