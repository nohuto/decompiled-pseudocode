/*
 * XREFs of ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800455F8
 * Callers:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180045698 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostDepCleanup(struct _HAM_HOST_DEPENDENCY *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rbx

  if ( *((_QWORD *)a1 + 4) )
    TpReleaseWait();
  if ( *((_QWORD *)a1 + 5) )
    TpReleaseWait();
  v2 = (void *)*((_QWORD *)a1 + 2);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 3);
  if ( v3 )
    NtClose(v3);
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    RmpAcquireGlobalLock();
    v5 = (*(_QWORD *)(v4 + 576))-- == 1LL;
    if ( v5 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
    RmpReleaseGlobalLock();
  }
  v6 = *((_QWORD *)a1 + 1);
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v5 = (*(_QWORD *)(v6 + 576))-- == 1LL;
    if ( v5 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v6 - 64));
    RmpReleaseGlobalLock();
  }
}
