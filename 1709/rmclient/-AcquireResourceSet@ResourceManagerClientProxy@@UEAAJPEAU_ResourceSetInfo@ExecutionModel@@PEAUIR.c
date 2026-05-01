/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000DD80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000E128 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        const unsigned __int16 *a5,
        void *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        bool *a10,
        struct ExecutionModel::IResourceSet *a11,
        struct ExecutionModel::IResourceSet **a12)
{
  return ResourceManagerClientProxy::AcquireResourceSetImpl(this, a2, a3, a4, a5, a6, a7, a8, a9, 0, a10, a11, a12);
}
