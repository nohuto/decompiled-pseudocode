/*
 * XREFs of RmGetResourceSetTypePolicy @ 0x18000C450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001840 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000C12C (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000E858 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 */

__int64 __fastcall RmGetResourceSetTypePolicy(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  bool v6; // sf
  struct ResourceManagerProxy *v7; // [rsp+40h] [rbp+18h] BYREF
  struct ExecutionModel::ResourceSetTypeToInfoConverter *v8; // [rsp+48h] [rbp+20h] BYREF

  result = GetResourceManagerProxy(&v7);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::GetResourceSetTypeConverter(v7, &v8, v5);
    v6 = (int)result < 0;
    if ( (int)result >= 0 )
    {
      result = ExecutionModel::ResourceSetTypeToInfoConverter::GetRmResourceSetInfo(v8, a1, a2);
      v6 = (int)result < 0;
    }
    if ( !v6 )
      return 0LL;
  }
  return result;
}
