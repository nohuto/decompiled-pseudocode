/*
 * XREFs of ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800469C4
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800434F4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F90 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180046184 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x1800461C8 (-HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18004642C (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x1800495FC (CemRcTableGetNext.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampPkgGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_APPLICATION *v1; // rbx
  __int64 v3; // rdx
  struct _RM_HAM_ACTIVITY_HOST *FirstLiveHost; // rsi
  __int64 v5; // rdx
  __int64 v7; // rdx
  struct _HAM_APPLICATION *Next; // rax
  struct _HAM_APPLICATION *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v1 = (struct _HAM_APPLICATION *)*((_QWORD *)a1 + 90);
  RmpAcquireGlobalLock();
  HampAppAcquireLockShared(v1, v3);
  FirstLiveHost = HampAppGetFirstLiveHost(v1, *((struct _LIST_ENTRY **)a1 + 91));
  HampAppReleaseLockShared(v1, v5);
  RmpReleaseGlobalLock();
  RmpAcquireGlobalLock();
  if ( (*((_QWORD *)a1 + 72))-- == 1LL )
    RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
  RmpReleaseGlobalLock();
  if ( !FirstLiveHost )
  {
    v7 = *((_QWORD *)a1 + 90);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
      __fastfail(0xEu);
    Next = (struct _HAM_APPLICATION *)CemRcTableGetNext(v7);
    v9 = Next;
    if ( Next )
    {
      FirstLiveHost = HampAppGetFirstHost(Next);
      CemRcObjectDereference(v9, v10, v11, v12);
    }
  }
  return FirstLiveHost;
}
