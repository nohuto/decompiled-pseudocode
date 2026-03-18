/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140155D50
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140155CA0 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x140155D10 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x140261890 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x1402619A0 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1402619F0 (HviGetImplementationLimits.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x140155D90 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorInterface(v1);
  return v1[0] == 824407624;
}
