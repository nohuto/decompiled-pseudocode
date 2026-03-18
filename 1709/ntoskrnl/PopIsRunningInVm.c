/*
 * XREFs of PopIsRunningInVm @ 0x14023D330
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1401348B0 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HviGetEnlightenmentInformation @ 0x14028B470 (HviGetEnlightenmentInformation.c)
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
