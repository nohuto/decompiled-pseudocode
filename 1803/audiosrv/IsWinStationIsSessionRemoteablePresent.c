/*
 * XREFs of IsWinStationIsSessionRemoteablePresent @ 0x1800626D8
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180008D5C (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180062EE0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWinStationIsSessionRemoteablePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180189C90 == 1 )
    return 1;
  if ( dword_180189C90 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_180189C90 = 2 - (v1 != 0);
  return result;
}
