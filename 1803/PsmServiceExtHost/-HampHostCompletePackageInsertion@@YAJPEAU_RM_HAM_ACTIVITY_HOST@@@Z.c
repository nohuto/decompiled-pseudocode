/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009680
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011B7C (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180005E9C (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800093E8 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180009458 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800095C8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009610 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009928 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009954 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180011D50 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011D7C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180066560 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180066914 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // r14
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  unsigned int v11; // edx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  unsigned int v13; // edx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v15; // rcx
  bool v16; // zf
  __int64 v17; // r8
  struct _HAM_RC_TREE_NODE *j; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v19; // rax
  struct _RM_HAM_ACTIVITY_HOST *v20; // rbp

  v1 = *((_QWORD *)a1 + 93);
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 88);
  RmpAcquireGlobalLock();
  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v1);
  v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568);
  if ( v5 && RmHamHostReferenceUnsafe(v5) )
    v6 = *(_QWORD *)(v1 + 568);
  else
    v6 = 0LL;
  RmpReleaseGlobalLock();
  v7 = *(_QWORD **)(v1 + 600);
  v8 = (_QWORD *)((char *)a1 + 776);
  if ( *v7 != v1 + 592 )
    __fastfail(3u);
  *v8 = v1 + 592;
  *((_QWORD *)a1 + 98) = v7;
  *v7 = v8;
  *(_QWORD *)(v1 + 600) = v8;
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    if ( *(_QWORD *)(v1 + 568) )
    {
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      HampAppQueueTerminate(v1, v9, 4864LL);
      v10 = -1058275322;
      goto LABEL_39;
    }
    *(_QWORD *)(v1 + 568) = a1;
  }
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
  if ( *((_DWORD *)a1 + 140) != 2 )
  {
    if ( v6 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
      *((_QWORD *)a1 + 94) = RmHamHostReference((struct _RM_HAM_ACTIVITY_HOST *)v6);
      HampHostReleaseLockExclusiveEx(a1, v11);
      RmpReleaseGlobalLock();
    }
    goto LABEL_38;
  }
  for ( i = HampAppGetFirstHost((struct _HAM_APPLICATION *)v1); ; i = HampAppGetNextHost(v14) )
  {
    v14 = i;
    if ( !i )
      break;
    if ( *((_DWORD *)i + 140) != 2 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v14, 0);
      *((_QWORD *)v14 + 94) = RmHamHostReference(a1);
      HampHostReleaseLockExclusiveEx(v14, v13);
      RmpReleaseGlobalLock();
    }
  }
  if ( (*((_QWORD *)a1 + 79) & 0x10000000000000LL) != 0 )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_QWORD *)(v4 + 320) = a1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    v17 = 0LL;
    for ( j = (struct _HAM_RC_TREE_NODE *)v4; ; j = *(struct _HAM_RC_TREE_NODE **)(*((_QWORD *)v20 + 93) + 88LL) )
    {
      v19 = HampHostEnumerateHostsInNode(j, 3, v17);
      v20 = v19;
      if ( !v19 )
        break;
      if ( *((_DWORD *)v19 + 140) == 2 && v19 != a1 && !*((_QWORD *)v19 + 84) )
      {
        v10 = HampDepGroupAddPpleDependency(v19, a1);
        if ( v10 < 0 )
          goto LABEL_39;
      }
      v17 = (__int64)v20;
    }
    goto LABEL_38;
  }
  if ( *((_QWORD *)a1 + 84) )
  {
LABEL_38:
    v10 = 0;
    goto LABEL_39;
  }
  RmpAcquireGlobalLock();
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
  v15 = *(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 320);
  if ( v15 && RmHamHostReferenceUnsafe(v15) )
  {
    v3 = *(_QWORD *)(v4 + 320);
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RmpReleaseGlobalLock();
    v10 = HampDepGroupAddPpleDependency(a1, (struct _RM_HAM_ACTIVITY_HOST *)v3);
    if ( v10 < 0 )
      goto LABEL_27;
  }
  else
  {
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RmpReleaseGlobalLock();
  }
  v10 = 0;
LABEL_27:
  if ( v3 )
  {
    RmpAcquireGlobalLock();
    v16 = (*(_QWORD *)(v3 + 576))-- == 1LL;
    if ( v16 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v3 - 64));
    RmpReleaseGlobalLock();
  }
LABEL_39:
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v16 = (*(_QWORD *)(v6 + 576))-- == 1LL;
    if ( v16 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v6 - 64));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v10;
}
