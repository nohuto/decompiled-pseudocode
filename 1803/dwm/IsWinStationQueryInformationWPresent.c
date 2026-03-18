/*
 * XREFs of IsWinStationQueryInformationWPresent @ 0x1400040DC
 * Callers:
 *     ?IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x1400017D0 (-IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z.c)
 *     ?IsRAILRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x140001880 (-IsRAILRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1400043F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWinStationQueryInformationWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14000E810 == 1 )
    return 1;
  if ( dword_14000E810 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_14000E810 = 2 - (v1 != 0);
  return result;
}
