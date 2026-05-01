/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800040D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x1800160C8 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 */

__int64 __fastcall RmpRpExtResourceManagerThunk::AcquireResourceSetFromSponsorProcess(
        struct _RM_SERVICE_GLOBALS **this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        const unsigned __int16 *a5,
        void *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  __int64 result; // rax

  if ( !a10 )
    return 2147942487LL;
  result = RmpRpExtResourceSetThunk::AcquireResourceSet(this[1], a2, a3, a4, a5, a6, a7, a8, a9, a10, a12, a11, a13);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
