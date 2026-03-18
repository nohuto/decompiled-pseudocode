/*
 * XREFs of CreateDxgkSharedObjectTypes @ 0x1C01201A4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX34_K7@ZP6AX4@ZPEAPEAU_OBJECT_TYPE@@W4_POOL_TYPE@@@Z @ 0x1C0120400 (-CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@.c)
 */

__int64 CreateDxgkSharedObjectTypes()
{
  __int64 result; // rax
  struct _GENERIC_MAPPING v1; // [rsp+40h] [rbp-10h] BYREF

  result = 0LL;
  if ( g_pDxgkSharedAllocationObjectType
    || (v1 = (struct _GENERIC_MAPPING)xmmword_1C003F9F8,
        result = CreateSharedObject(
                   L"DxgkSharedResource",
                   &v1,
                   (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                   0LL,
                   (void (*)(void *))DxgkSharedAllocationObDeleteProcedure,
                   &g_pDxgkSharedAllocationObjectType,
                   PagedPool),
        (int)result >= 0) )
  {
    if ( !g_pDxgkSharedSyncObjectType )
    {
      v1 = (struct _GENERIC_MAPPING)xmmword_1C003FA18;
      result = CreateSharedObject(
                 L"DxgkSharedSyncObject",
                 &v1,
                 (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                 0LL,
                 (void (*)(void *))DxgkSharedSyncObjectObDeleteProcedure,
                 &g_pDxgkSharedSyncObjectType,
                 PagedPool);
    }
    if ( (int)result >= 0 )
    {
      if ( !g_pDxgkSharedSwapChainObjectType )
      {
        v1 = (struct _GENERIC_MAPPING)xmmword_1C003FA08;
        result = CreateSharedObject(
                   L"DxgkSharedSwapChainObject",
                   &v1,
                   (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                   (void (*)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64))SwapChainObCloseProcedure,
                   (void (*)(void *))SwapChainObDeleteProcedure,
                   &g_pDxgkSharedSwapChainObjectType,
                   PagedPool);
      }
      if ( (int)result >= 0 )
      {
        if ( !g_pDxgkDisplayManagerObjectType )
        {
          v1 = (struct _GENERIC_MAPPING)xmmword_1C003FA08;
          result = CreateSharedObject(
                     L"DxgkDisplayManagerObject",
                     &v1,
                     (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                     0LL,
                     (void (*)(void *))DxgkDisplayManagerDeleteProcedure,
                     &g_pDxgkDisplayManagerObjectType,
                     PagedPool);
        }
        if ( (int)result >= 0 )
        {
          if ( !g_pDxgkCurrentDxgProcessObjectType )
          {
            v1 = (struct _GENERIC_MAPPING)xmmword_1C003F9F8;
            result = CreateSharedObject(
                       L"DxgkCurrentDxgProcessObject",
                       &v1,
                       0LL,
                       0LL,
                       0LL,
                       &g_pDxgkCurrentDxgProcessObjectType,
                       (enum _POOL_TYPE)512);
          }
          if ( (int)result >= 0 )
          {
            if ( !g_pDxgkSharedProtectedSessionObjectType )
            {
              v1 = (struct _GENERIC_MAPPING)xmmword_1C003FA08;
              result = CreateSharedObject(
                         L"DxgkSharedProtectedSessionObject",
                         &v1,
                         (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                         0LL,
                         (void (*)(void *))DxgkSharedProtectedSessionObDeleteProcedure,
                         &g_pDxgkSharedProtectedSessionObjectType,
                         PagedPool);
            }
            if ( (int)result >= 0 && !g_pDxgkSharedBundleObjectType )
            {
              v1 = (struct _GENERIC_MAPPING)xmmword_1C003FA08;
              return CreateSharedObject(
                       L"DxgkSharedBundleObject",
                       &v1,
                       (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                       0LL,
                       (void (*)(void *))DxgkSharedBundleObjectObDeleteProcedure,
                       &g_pDxgkSharedBundleObjectType,
                       PagedPool);
            }
          }
        }
      }
    }
  }
  return result;
}
