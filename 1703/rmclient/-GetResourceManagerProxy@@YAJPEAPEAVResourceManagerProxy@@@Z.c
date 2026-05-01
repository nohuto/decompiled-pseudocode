/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001840
 * Callers:
 *     RmAccessCheck @ 0x180001520 (RmAccessCheck.c)
 *     RmAcquireResources @ 0x180001560 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x180001620 (RmReleaseResources.c)
 *     RmRegisterResource @ 0x180001660 (RmRegisterResource.c)
 *     RmAccessCheckOnSelf @ 0x18000C2E0 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x18000C310 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x18000C390 (RmGetNotification.c)
 *     RmGetResourceSetInfoPolicy @ 0x18000C3E0 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000C450 (RmGetResourceSetTypePolicy.c)
 *     SHGetResourceManagementValue @ 0x18000C4C0 (SHGetResourceManagementValue.c)
 * Callees:
 *     sub_180001280 @ 0x180001280 (sub_180001280.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int v3; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_1800186E8;
  if ( !qword_1800186E8 )
  {
    v3 = sub_180001280();
    if ( v3 < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_1800186E8;
  }
  *a1 = v2;
  v3 = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)v3;
}
