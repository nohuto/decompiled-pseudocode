/*
 * XREFs of ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180024BF0
 * Callers:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180022DF0 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     CemRcObjectCleanup @ 0x180024C80 (CemRcObjectCleanup.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActDestroy(struct _CEM_RC_OBJECT *a1)
{
  HAM_ACTIVITY_RM_CONTEXT *v2; // rcx
  __int64 v3; // rax
  void (*v4)(void); // rax
  __int64 v5; // rbx

  v2 = (HAM_ACTIVITY_RM_CONTEXT *)*((_QWORD *)a1 + 11);
  if ( v2 )
  {
    v3 = *(_QWORD *)v2;
    *((_QWORD *)v2 + 1) = 0LL;
    v4 = *(void (**)(void))(v3 + 16);
    if ( (char *)v4 == (char *)HAM_ACTIVITY_RM_CONTEXT::Release )
      HAM_ACTIVITY_RM_CONTEXT::Release(v2);
    else
      v4();
  }
  v5 = *((_QWORD *)a1 + 10);
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v5 + 576))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64));
    RmpReleaseGlobalLock();
  }
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
