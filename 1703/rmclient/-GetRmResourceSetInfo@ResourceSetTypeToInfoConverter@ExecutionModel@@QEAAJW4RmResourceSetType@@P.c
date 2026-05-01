/*
 * XREFs of ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000E858
 * Callers:
 *     RmGetResourceSetTypePolicy @ 0x18000C450 (RmGetResourceSetTypePolicy.c)
 *     ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000E080 (-RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResource.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180004250 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000E5E4 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18000E79C (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::GetRmResourceSetInfo(
        __int64 a1,
        unsigned int a2,
        const struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 result; // rax
  struct RmResourceSetInfo *v7; // r8
  _BYTE v8[384]; // [rsp+20h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(a1, a2, (__int64)v8);
  if ( (int)result >= 0 )
  {
    ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo((ExecutionModel *)v8, a3, v7);
    return 0LL;
  }
  return result;
}
