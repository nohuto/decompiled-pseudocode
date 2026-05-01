/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001470
 * Callers:
 *     RmAcquireResources @ 0x180001150 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x180001210 (RmReleaseResources.c)
 *     RmRegisterResource @ 0x180001250 (RmRegisterResource.c)
 *     RmAccessCheck @ 0x1800012B0 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x18000CD20 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x18000CD50 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x18000CDD0 (RmGetNotification.c)
 *     RmGetResourceSetInfoPolicy @ 0x18000CE20 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000CE90 (RmGetResourceSetTypePolicy.c)
 *     SHGetResourceManagementValue @ 0x18000CF00 (SHGetResourceManagementValue.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x180001090 (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_18001B740;
  if ( !qword_18001B740 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_18001B740;
  }
  *a1 = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
