/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1401348F0
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140134808 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x1401348B0 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14028B470 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x14028B580 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x14028B5D0 (HviGetImplementationLimits.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x140134930 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
