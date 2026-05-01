/*
 * XREFs of IsComCtl32Present @ 0x18009B604
 * Callers:
 *     _dynamic_initializer_for__s_rgShellComponent__ @ 0x180001440 (_dynamic_initializer_for__s_rgShellComponent__.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18009BDA0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsComCtl32Present()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180437DA0 == 1 )
    return 1;
  if ( dword_180437DA0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_180437DA0 = 2 - (v1 != 0);
  return result;
}
