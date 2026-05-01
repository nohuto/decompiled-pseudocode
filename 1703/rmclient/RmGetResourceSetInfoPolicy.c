/*
 * XREFs of RmGetResourceSetInfoPolicy @ 0x18000C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001840 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000C12C (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18000E79C (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall RmGetResourceSetInfoPolicy(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  struct ResourceManagerProxy *v6; // [rsp+40h] [rbp+18h] BYREF
  struct ExecutionModel::ResourceSetTypeToInfoConverter *v7; // [rsp+48h] [rbp+20h] BYREF

  result = GetResourceManagerProxy(&v6);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::GetResourceSetTypeConverter(v6, &v7, v5);
    if ( (int)result >= 0 )
    {
      result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(v7, a1, a2);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
