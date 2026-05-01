/*
 * XREFs of SHGetResourceManagementValue @ 0x18000CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001470 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?GetResourceManagementValue@ResourceManagerProxy@@QEAAJKPEA_K@Z @ 0x18000CB08 (-GetResourceManagementValue@ResourceManagerProxy@@QEAAJKPEA_K@Z.c)
 */

CLIENT_CALL_RETURN __fastcall SHGetResourceManagementValue(int a1, unsigned __int64 *a2)
{
  CLIENT_CALL_RETURN result; // rax
  ResourceManagerProxy *v5; // [rsp+40h] [rbp+18h] BYREF

  result.Simple = GetResourceManagerProxy(&v5);
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = ResourceManagerProxy::GetResourceManagementValue(v5, a1, a2).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
