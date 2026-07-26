/*
 * XREFs of ndisReadPMRegistry @ 0x1C00AE270
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C00ADB74 (ndisInitializeConfiguration.c)
 * Callees:
 *     ndisReadPMAdminConfigState @ 0x1C00AE3B0 (ndisReadPMAdminConfigState.c)
 */

__int64 __fastcall ndisReadPMRegistry(NDIS_HANDLE ConfigurationHandle, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx

  *(_DWORD *)(a2 + 3936) ^= (*(_DWORD *)(a2 + 3936) ^ ndisReadPMAdminConfigState(ConfigurationHandle, &WakeOnPatternStr)) & 3;
  *(_DWORD *)(a2 + 3936) ^= (*(_DWORD *)(a2 + 3936) ^ (4
                                                     * ndisReadPMAdminConfigState(
                                                         ConfigurationHandle,
                                                         &WakeOnMagicPacketStr))) & 0xC;
  *(_DWORD *)(a2 + 3936) ^= (*(_DWORD *)(a2 + 3936) ^ (16
                                                     * ndisReadPMAdminConfigState(
                                                         ConfigurationHandle,
                                                         &DeviceSleepOnDisconnectStr))) & 0x30;
  *(_DWORD *)(a2 + 3936) ^= (*(_DWORD *)(a2 + 3936) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMARPOffloadStr) << 6)) & 0xC0;
  *(_DWORD *)(a2 + 3936) ^= (*(_DWORD *)(a2 + 3936) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMNSOffloadStr) << 8)) & 0x300;
  *(_DWORD *)(a2 + 3936) ^= (*(_DWORD *)(a2 + 3936) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMWiFiRekeyOffloadStr) << 10)) & 0xC00;
  *(_DWORD *)(a2 + 3936) ^= (*(_DWORD *)(a2 + 3936) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &SelectiveSuspendStr) << 12)) & 0x3000;
  result = (*(_DWORD *)(a2 + 3936) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                      ConfigurationHandle,
                                                      &NicAutoPowerSaverStr) << 14)) & 0xC000;
  *(_DWORD *)(a2 + 3936) ^= result;
  v5 = *(_DWORD *)(a2 + 3936);
  if ( (v5 & 0xC000) != 0 )
  {
    result = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 2)) & 0x3000;
    *(_DWORD *)(a2 + 3936) = result;
  }
  return result;
}
