/*
 * XREFs of IsDwmSetWindowAttributePresent @ 0x18019691C
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4_SET_SHELL_CLOAK@@@Z @ 0x1800CF4F0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4_SET_SHELL_CLOAK@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801971C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmSetWindowAttributePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1802441E8 == 1 )
    return 1;
  if ( dword_1802441E8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"8:", &v1) < 0 )
    return 0;
  result = v1;
  dword_1802441E8 = 2 - (v1 != 0);
  return result;
}
