/*
 * XREFs of IsCreateAppChromePresent @ 0x1800C4704
 * Callers:
 *     ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x180077948 (-IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800C4A20 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18026EA88 == 1 )
    return 1;
  if ( dword_18026EA88 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_18026EA88 = 2 - (v1 != 0);
  return result;
}
