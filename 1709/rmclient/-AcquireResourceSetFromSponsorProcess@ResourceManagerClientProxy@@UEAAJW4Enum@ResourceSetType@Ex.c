/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18000E020
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800046D0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000E128 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18000FAD0 (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSetFromSponsorProcess(
        ResourceManagerClientProxy *a1,
        unsigned int a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  __int64 result; // rax
  _BYTE v18[384]; // [rsp+70h] [rbp-1C8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v18);
  result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo((char *)a1 + 16, a2, v18);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerClientProxy::AcquireResourceSetImpl(
               a1,
               (struct ExecutionModel::_ResourceSetInfo *)v18,
               a3,
               a4,
               a5,
               Sid,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
