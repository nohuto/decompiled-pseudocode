/*
 * XREFs of ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006776C
 * Callers:
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180063AF8 (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180005C30 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180005E80 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180005F40 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180006068 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180011E78 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012AC8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800334DC (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18004094C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18006472C (-HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180064F50 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065034 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampPkgSuspend(
        struct _HAM_PACKAGE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        enum _HAM_EXTERNAL_APPLICATION_STATE *a3)
{
  int v6; // r15d
  __int64 v7; // rdx
  struct _HAM_APPLICATION *First; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  int v11; // ebx
  struct _HAM_TERMINATION_HOST_BLOCK *i; // rax
  struct _HAM_TERMINATION_HOST_BLOCK *j; // rax
  _BYTE v16[32]; // [rsp+20h] [rbp-48h] BYREF

  memset(v16, 0, 24);
  HampPkgAcquireLockShared(a1);
  v6 = *((_DWORD *)a1 + 88);
  HampPkgReleaseLockShared(a1, v7);
  First = HamRcNodeGetFirst(a1, 1);
  if ( First )
  {
    while ( 1 )
    {
      v9 = HampAppTryReferenceMixedHost(First);
      v10 = v9;
      if ( v9 )
      {
        v11 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)v16, v9);
        if ( v11 >= 0 )
          v11 = 0;
        RmpAcquireGlobalLock();
        if ( (*((_QWORD *)v10 + 72))-- == 1LL )
          RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64));
        RmpReleaseGlobalLock();
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741275 )
          break;
      }
      First = HamRcNodeGetSuccessor(a1, First);
      if ( !First )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    for ( i = HampHostSnapshotGetFirst((struct _HAM_HOST_SNAPSHOT *)v16);
          i;
          i = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)v16) )
    {
      HampHostDebugQueueSuspend(*(struct _RM_HAM_ACTIVITY_HOST **)i, a2);
    }
    for ( j = HampHostSnapshotGetFirst((struct _HAM_HOST_SNAPSHOT *)v16);
          j;
          j = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)v16) )
    {
      HampHostDebugWaitForSuspendComplete(*(struct _RM_HAM_ACTIVITY_HOST **)j);
    }
    *(_DWORD *)a3 = v6;
    v11 = 0;
  }
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)v16);
  return (unsigned int)v11;
}
