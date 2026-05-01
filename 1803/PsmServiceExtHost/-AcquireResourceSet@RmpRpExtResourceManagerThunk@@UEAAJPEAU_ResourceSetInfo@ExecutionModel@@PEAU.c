/*
 * XREFs of ?AcquireResourceSet@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18004D400
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x18004D478 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 */

__int64 __fastcall RmpRpExtResourceManagerThunk::AcquireResourceSet(
        struct _RM_SERVICE_GLOBALS **this,
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
  return RmpRpExtResourceSetThunk::AcquireResourceSet(this[1], a2, a3, a4, a5, a6, a7, a8, a9, 0, a11, a10, a12);
}
