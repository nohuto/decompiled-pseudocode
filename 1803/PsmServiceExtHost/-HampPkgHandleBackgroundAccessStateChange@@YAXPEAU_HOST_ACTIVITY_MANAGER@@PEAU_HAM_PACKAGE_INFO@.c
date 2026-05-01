/*
 * XREFs of ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180005138
 * Callers:
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180004F20 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180005E9C (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800095C8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009610 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EE58 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z @ 0x180068534 (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgHandleBackgroundAccessStateChange(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        int a3)
{
  struct _HAM_PACKAGE *result; // rax
  struct _HAM_PACKAGE *v5; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v6; // r8
  struct _HAM_PACKAGE *i; // rcx
  struct _HAM_ACTIVITY *j; // rax
  unsigned int v9; // edx
  struct _HAM_ACTIVITY *v10; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v11; // rax
  struct _RM_HAM_ACTIVITY_HOST *v12; // rsi
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  result = HampPkgFindInManager(a1, a2);
  v5 = result;
  if ( result )
  {
    HampPkgAcquireLockExclusive(result);
    *((_DWORD *)v5 + 90) = a3;
    HampPkgReleaseLockExclusive(v5);
    if ( (a3 & 1) != 0 )
    {
      v6 = 0LL;
      for ( i = v5; ; i = *(struct _HAM_PACKAGE **)(*((_QWORD *)v12 + 93) + 88LL) )
      {
        v11 = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode(i, 3LL, v6);
        v12 = v11;
        if ( !v11 )
          break;
        HampHostAcquireLockExclusiveEx(v11, 0);
        for ( j = HampHostGetFirstActivity(v12); ; j = HampHostGetNextActivity(v10) )
        {
          v10 = j;
          if ( !j )
            break;
          if ( HampActShouldBeRevoked(j, &v13) )
            HampActRequestStop(v10, 1LL, 7LL, 6400LL, v13, 0LL);
        }
        HampHostReleaseLockExclusiveEx(v12, v9);
        v6 = v12;
      }
    }
    return (struct _HAM_PACKAGE *)CemRcObjectDereference(v5);
  }
  return result;
}
