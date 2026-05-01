/*
 * XREFs of RmAccessCheck @ 0x180001520
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z @ 0x1800016B8 (-RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z.c)
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001840 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 */

__int64 __fastcall RmAccessCheck(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax
  struct ResourceManagerProxy *v5; // [rsp+40h] [rbp+18h] BYREF

  result = GetResourceManagerProxy(&v5);
  if ( (int)result >= 0 )
    return ResourceManagerProxy::RmAccessCheck(v5, a1, a2);
  return result;
}
