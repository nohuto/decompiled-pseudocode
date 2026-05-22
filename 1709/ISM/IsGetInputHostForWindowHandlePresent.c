/*
 * XREFs of IsGetInputHostForWindowHandlePresent @ 0x1800CB3C8
 * Callers:
 *     RegisterManipulationThread @ 0x180005900 (RegisterManipulationThread.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800CB7C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetInputHostForWindowHandlePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18010EC0C == 1 )
    return 1;
  if ( dword_18010EC0C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"LN", &v1) < 0 )
    return 0;
  result = v1;
  dword_18010EC0C = 2 - (v1 != 0);
  return result;
}
