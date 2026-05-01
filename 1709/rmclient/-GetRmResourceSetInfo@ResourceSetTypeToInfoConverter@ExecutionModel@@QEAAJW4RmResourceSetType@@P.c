/*
 * XREFs of ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000FB48
 * Callers:
 *     RmGetResourceSetTypePolicy @ 0x18000CE90 (RmGetResourceSetTypePolicy.c)
 *     ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000F3A0 (-RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResource.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800046D0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F904 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18000FAD0 (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::GetRmResourceSetInfo(
        __int64 a1,
        unsigned int a2,
        const struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 result; // rax
  struct RmResourceSetInfo *v7; // r8
  _OWORD v8[24]; // [rsp+20h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(a1, a2, v8);
  if ( (int)result >= 0 )
  {
    ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo((ExecutionModel *)v8, a3, v7);
    return 0LL;
  }
  return result;
}
