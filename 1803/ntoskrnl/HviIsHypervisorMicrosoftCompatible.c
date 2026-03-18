/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140172300
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140172250 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x1401722C0 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1402C0B60 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x1402C0C70 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1402C0CC0 (HviGetImplementationLimits.c)
 *     ExGetVMType @ 0x1407BDE9C (ExGetVMType.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x140172340 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
