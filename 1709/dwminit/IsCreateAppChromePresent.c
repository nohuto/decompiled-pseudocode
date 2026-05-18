/*
 * XREFs of IsCreateAppChromePresent @ 0x1800096F8
 * Callers:
 *     ?IsMobileCore@@YA_NXZ @ 0x180005408 (-IsMobileCore@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800096F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000F704 == 1 )
    return 1;
  if ( dword_18000F704 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"DF", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_18000F704 = 2 - (v1 != 0);
  return result;
}
