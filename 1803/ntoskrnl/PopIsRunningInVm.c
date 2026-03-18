/*
 * XREFs of PopIsRunningInVm @ 0x1402747D0
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x1401722C0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HviGetEnlightenmentInformation @ 0x1402C0B60 (HviGetEnlightenmentInformation.c)
 */

bool PopIsRunningInVm()
{
  bool result; // al
  _QWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  result = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    HviGetHypervisorFeatures(v1);
    if ( (v1[0] & 0x100000000000LL) == 0 )
      return 1;
    HviGetEnlightenmentInformation(v1);
    if ( (v1[0] & 0x1000) != 0 )
      return 1;
  }
  return result;
}
