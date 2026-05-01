/*
 * XREFs of RmGetResourceSetInfoPolicy @ 0x18000CE20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001470 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000CB6C (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18000FAD0 (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall RmGetResourceSetInfoPolicy(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  struct ResourceManagerProxy *v5; // [rsp+40h] [rbp+18h] BYREF
  struct ExecutionModel::ResourceSetTypeToInfoConverter *v6; // [rsp+48h] [rbp+20h] BYREF

  result = GetResourceManagerProxy(&v5);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::GetResourceSetTypeConverter(v5, &v6);
    if ( (int)result >= 0 )
    {
      result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(v6, a1, a2);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
