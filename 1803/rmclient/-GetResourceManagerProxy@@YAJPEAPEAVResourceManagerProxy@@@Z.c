/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180003CA8
 * Callers:
 *     RmAcquireResources @ 0x1800010A0 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x180001160 (RmReleaseResources.c)
 *     RmRegisterResource @ 0x1800011A0 (RmRegisterResource.c)
 *     RmAccessCheck @ 0x180003AF0 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x18000C5C0 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x18000C5F0 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x18000C670 (RmGetNotification.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x180003EF8 (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_18001C720;
  if ( !qword_18001C720 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_18001C720;
  }
  *a1 = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
