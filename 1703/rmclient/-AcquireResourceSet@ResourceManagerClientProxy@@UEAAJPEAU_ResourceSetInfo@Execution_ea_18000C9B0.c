/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000C9B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007FF4 (memset_0.c)
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000CCD8 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct IUnknown *a3,
        GUID *rguid,
        bool *a5,
        struct ExecutionModel::IResourceSet *a6,
        struct ExecutionModel::IResourceSet **a7)
{
  OLECHAR *v11; // rcx
  OLECHAR sz[40]; // [rsp+70h] [rbp-98h] BYREF

  if ( rguid )
  {
    memset_0(sz, 0, 0x4EuLL);
    StringFromGUID2(rguid, sz, 39);
    v11 = sz;
  }
  else
  {
    v11 = 0LL;
  }
  return ResourceManagerClientProxy::AcquireResourceSetImpl(
           this,
           a2,
           a3,
           0LL,
           v11,
           0LL,
           0,
           0,
           0xFFFFFFFFFFFFFFFFuLL,
           0,
           a5,
           a6,
           a7);
}
