/*
 * XREFs of IsEnumDisplayDevicesWPresent @ 0x180007DDC
 * Callers:
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x1800022D4 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800085F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsEnumDisplayDevicesWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000E6D8 == 1 )
    return 1;
  if ( dword_18000E6D8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000E6D8 = 2 - (v1 != 0);
  return result;
}
