/*
 * XREFs of IsCreateSystemInputHostPresent @ 0x1800C4894
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800C4A20 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateSystemInputHostPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18026EA98 == 1 )
    return 1;
  if ( dword_18026EA98 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"TV", &v1) < 0 )
    return 0;
  result = v1;
  dword_18026EA98 = 2 - (v1 != 0);
  return result;
}
