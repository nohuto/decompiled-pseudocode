/*
 * XREFs of RmRegisterResource @ 0x180001660
 * Callers:
 *     <none>
 * Callees:
 *     ?RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z @ 0x1800017EC (-RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z.c)
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001840 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 */

__int64 __fastcall RmRegisterResource(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  struct ResourceManagerProxy *v7; // [rsp+48h] [rbp+20h] BYREF

  result = GetResourceManagerProxy(&v7);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::RmRegisterResource(v7, a1, a2, a3);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
