/*
 * XREFs of IsCreateAppChromePresent @ 0x1400048D8
 * Callers:
 *     wWinMain @ 0x140001A80 (wWinMain.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140004930 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14000F8F0 == 1 )
    return 1;
  if ( dword_14000F8F0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_14000F8F0 = 2 - (v1 != 0);
  return result;
}
