/*
 * XREFs of ndisWmiSetPMAdminConfig @ 0x1C00D7CD0
 * Callers:
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     NdisCloseConfiguration @ 0x1C00ADB10 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 *     ndisIsValidPMAdminConfigState @ 0x1C00D4CE8 (ndisIsValidPMAdminConfigState.c)
 *     ndisWritePMAdminConfigState @ 0x1C00D7F10 (ndisWritePMAdminConfigState.c)
 */

int __fastcall ndisWmiSetPMAdminConfig(_DWORD *a1, __int64 a2)
{
  int result; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned __int8 v7; // r8
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  PVOID v10; // rsi
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+20h] [rbp-28h] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp+10h] BYREF

  ConfigurationHandle = 0LL;
  if ( *(_BYTE *)a2 != 0x80 || *(_BYTE *)(a2 + 1) != 1 || *(_WORD *)(a2 + 2) != 28 )
    return -1073741811;
  result = ndisIsValidPMAdminConfigState(*(_DWORD *)(a2 + 4), a1[984] & 3);
  if ( !result )
  {
    result = ndisIsValidPMAdminConfigState(*(_DWORD *)(a2 + 8), (v5 >> 2) & 3);
    if ( !result )
    {
      result = ndisIsValidPMAdminConfigState(*(_DWORD *)(a2 + 12), (v6 >> 4) & 3);
      if ( !result )
      {
        result = ndisIsValidPMAdminConfigState(*(_DWORD *)(a2 + 16), v7 >> 6);
        if ( !result )
        {
          result = ndisIsValidPMAdminConfigState(*(_DWORD *)(a2 + 20), (v8 >> 8) & 3);
          if ( !result )
          {
            result = ndisIsValidPMAdminConfigState(*(_DWORD *)(a2 + 24), (v9 >> 10) & 3);
            if ( !result )
            {
              ConfigObject.Flags = 0;
              ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
              ConfigObject.NdisHandle = a1;
              result = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
              if ( !result )
              {
                v10 = ConfigurationHandle;
                if ( *(_DWORD *)(a2 + 4) )
                {
                  ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnPatternStr);
                  a1[984] ^= (*(_DWORD *)(a2 + 4) ^ a1[984]) & 3;
                }
                if ( *(_DWORD *)(a2 + 8) )
                {
                  ndisWritePMAdminConfigState(v10, &WakeOnMagicPacketStr);
                  a1[984] ^= (a1[984] ^ (4 * *(_DWORD *)(a2 + 8))) & 0xC;
                }
                if ( *(_DWORD *)(a2 + 12) )
                {
                  ndisWritePMAdminConfigState(v10, &DeviceSleepOnDisconnectStr);
                  a1[984] ^= (a1[984] ^ (16 * *(_DWORD *)(a2 + 12))) & 0x30;
                }
                if ( *(_DWORD *)(a2 + 16) )
                {
                  ndisWritePMAdminConfigState(v10, &PMARPOffloadStr);
                  a1[984] ^= (a1[984] ^ (*(_DWORD *)(a2 + 16) << 6)) & 0xC0;
                }
                if ( *(_DWORD *)(a2 + 20) )
                {
                  ndisWritePMAdminConfigState(v10, &PMNSOffloadStr);
                  a1[984] ^= (a1[984] ^ (*(_DWORD *)(a2 + 20) << 8)) & 0x300;
                }
                if ( *(_DWORD *)(a2 + 24) )
                {
                  ndisWritePMAdminConfigState(v10, &PMWiFiRekeyOffloadStr);
                  a1[984] ^= (a1[984] ^ (*(_DWORD *)(a2 + 24) << 10)) & 0xC00;
                }
                if ( v10 )
                  NdisCloseConfiguration(v10);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
