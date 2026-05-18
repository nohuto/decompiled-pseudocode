/*
 * XREFs of IsCreateAppChromePresent @ 0x1800069D0
 * Callers:
 *     ?IsMobileCore@@YA_NXZ @ 0x1800015FC (-IsMobileCore@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180007250 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000C680 == 1 )
    return 1;
  if ( dword_18000C680 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000C680 = 2 - (v1 != 0);
  return result;
}
