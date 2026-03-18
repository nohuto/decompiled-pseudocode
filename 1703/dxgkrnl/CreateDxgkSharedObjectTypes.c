/*
 * XREFs of CreateDxgkSharedObjectTypes @ 0x1C0120E54
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0110864 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX34_K7@ZP6AX4@ZPEAPEAU_OBJECT_TYPE@@W4_POOL_TYPE@@@Z @ 0x1C0120FB4 (-CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@.c)
 */

__int64 CreateDxgkSharedObjectTypes()
{
  __int64 result; // rax
  struct _GENERIC_MAPPING v1; // [rsp+40h] [rbp-18h] BYREF

  result = 0LL;
  if ( g_pDxgkSharedAllocationObjectType
    || (v1 = (struct _GENERIC_MAPPING)xmmword_1C004CD18,
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
      v1 = (struct _GENERIC_MAPPING)xmmword_1C004CD38;
      result = CreateSharedObject(
                 L"DxgkSharedSyncObject",
                 &v1,
                 (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                 0LL,
                 (void (*)(void *))DxgkSharedSyncObjectObDeleteProcedure,
                 &g_pDxgkSharedSyncObjectType,
                 PagedPool);
    }
    if ( (int)result >= 0 && !g_pDxgkSharedSwapChainObjectType )
    {
      v1 = (struct _GENERIC_MAPPING)xmmword_1C004CD28;
      result = CreateSharedObject(
                 L"DxgkSharedSwapChainObject",
                 &v1,
                 (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))SwapChainObOpenProcedure,
                 (void (*)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64))SwapChainObCloseProcedure,
                 (void (*)(void *))SwapChainObDeleteProcedure,
                 &g_pDxgkSharedSwapChainObjectType,
                 PagedPool);
    }
  }
  if ( !g_pDxgkCurrentDxgProcessObjectType )
  {
    v1 = (struct _GENERIC_MAPPING)xmmword_1C004CD18;
    return CreateSharedObject(
             L"DxgkCurrentDxgProcessObject",
             &v1,
             0LL,
             0LL,
             0LL,
             &g_pDxgkCurrentDxgProcessObjectType,
             (enum _POOL_TYPE)512);
  }
  return result;
}
