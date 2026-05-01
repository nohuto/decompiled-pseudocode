/*
 * XREFs of ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010F30
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010DC0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACT.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x1800326C8 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180062E2C (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 */

__int64 __fastcall RmHamFindHostWithFullInfo(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v6; // rbx
  unsigned int v7; // edi
  const wchar_t *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  Host = RmHamFindHost(a1, *((_QWORD *)a2 + 68), (struct _RM_HAM_ACTIVITY_HOST **)&v10);
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)v10;
  v7 = Host;
  if ( Host >= 0 )
  {
    if ( _wcsicmp((const wchar_t *)a2, v10 + 12) || memcmp_0((char *)a2 + 464, (char *)v6 + 488, 0x58uLL) )
    {
      v7 = -1073741584;
    }
    else
    {
      *a3 = v6;
      v6 = 0LL;
      v7 = 0;
    }
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v6 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 - 64));
    RmpReleaseGlobalLock();
  }
  return v7;
}
