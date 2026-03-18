/*
 * XREFs of ExGetVMType @ 0x1407BDE9C
 * Callers:
 *     ExpGetVMActivationStatus @ 0x1405F36F0 (ExpGetVMActivationStatus.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x1401722C0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x140172300 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HviGetEnlightenmentInformation @ 0x1402C0B60 (HviGetEnlightenmentInformation.c)
 */

__int64 __fastcall ExGetVMType(_DWORD *a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      HviGetHypervisorFeatures(v3);
      if ( (v3[0] & 0x100000000000LL) == 0 || (HviGetEnlightenmentInformation(v3), (v3[0] & 0x1000) != 0) )
        *a1 = 1;
    }
    else
    {
      *a1 = 2;
    }
  }
  return 0LL;
}
