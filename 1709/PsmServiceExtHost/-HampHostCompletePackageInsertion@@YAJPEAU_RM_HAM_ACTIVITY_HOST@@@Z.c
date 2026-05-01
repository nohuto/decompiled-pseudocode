/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800434F4
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043390 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018F44 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040248 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180043254 (-HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180046404 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465B4 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PACKAGE@@@Z @ 0x180046980 (-HampPkgGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800469C4 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046E78 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  int v8; // ebx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdi

  v1 = *((_QWORD *)a1 + 90);
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 48);
  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v1);
  v5 = *(_QWORD **)(v1 + 120);
  v6 = (_QWORD *)((char *)a1 + 728);
  if ( *v5 != v1 + 112 )
    __fastfail(3u);
  *v6 = v1 + 112;
  *((_QWORD *)a1 + 92) = v5;
  *v5 = v6;
  *(_QWORD *)(v1 + 120) = v6;
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
  if ( *(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 80) + 32LL) != a1 || *((_DWORD *)a1 + 140) != 2 )
    return 0;
  if ( RmpActivityHostIsPple((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64)) )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_QWORD *)(v4 + 320) = a1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    for ( i = HampPkgGetFirstHost((struct _HAM_PACKAGE *)v4); ; i = HampPkgGetNextHost(v11) )
    {
      v11 = i;
      if ( !i )
        break;
      if ( *((_DWORD *)i + 140) == 2 && i != a1 )
      {
        v8 = HampHostAddPpleDependency(i, a1);
        if ( v8 < 0 )
          return (unsigned int)v8;
      }
    }
    return 0;
  }
  RmpAcquireGlobalLock();
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
  v7 = *(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 320);
  if ( v7 && (unsigned int)RmHamHostReferenceUnsafe(v7) )
  {
    v3 = *(_QWORD *)(v4 + 320);
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RmpReleaseGlobalLock();
    v8 = HampHostAddPpleDependency(a1, (struct _RM_HAM_ACTIVITY_HOST *)v3);
    if ( v8 < 0 )
      goto LABEL_12;
  }
  else
  {
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RmpReleaseGlobalLock();
  }
  v8 = 0;
LABEL_12:
  if ( v3 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v3 + 576))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v3 - 64));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v8;
}
