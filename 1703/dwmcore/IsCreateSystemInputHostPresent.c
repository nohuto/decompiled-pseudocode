/*
 * XREFs of IsCreateSystemInputHostPresent @ 0x1800D4454
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800D45D0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateSystemInputHostPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18023E3A4 == 1 )
    return 1;
  if ( dword_18023E3A4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"TV", &v1) < 0 )
    return 0;
  result = v1;
  dword_18023E3A4 = 2 - (v1 != 0);
  return result;
}
