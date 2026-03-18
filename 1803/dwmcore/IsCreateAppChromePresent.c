/*
 * XREFs of IsCreateAppChromePresent @ 0x1800DCAB4
 * Callers:
 *     ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x1800B75A8 (-IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800DCD80 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1802D5E50 == 1 )
    return 1;
  if ( dword_1802D5E50 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_1802D5E50 = 2 - (v1 != 0);
  return result;
}
