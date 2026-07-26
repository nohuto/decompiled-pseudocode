/*
 * XREFs of DisableMagicPacketKeyword @ 0x1C00DEE70
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 *     ndisWritePMAdminConfigState @ 0x1C00E22BC (ndisWritePMAdminConfigState.c)
 */

void __fastcall DisableMagicPacketKeyword(_DWORD *a1)
{
  NDIS_STATUS v2; // eax
  NDIS_HANDLE v3; // rcx
  struct _NDIS_CONFIGURATION_OBJECT v4; // [rsp+20h] [rbp-28h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+50h] [rbp+8h] BYREF

  ConfigurationHandle = 0LL;
  v4.Flags = 0;
  v4.NdisHandle = a1;
  v4.Header = (_NDIS_OBJECT_HEADER)1573289;
  v2 = NdisOpenConfigurationEx(&v4, &ConfigurationHandle);
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_dq(0x91u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v2, a1);
  }
  else
  {
    ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnMagicPacketStr);
    v3 = ConfigurationHandle;
    a1[984] = a1[984] & 0xFFFFFFF3 | 4;
    NdisCloseConfiguration(v3);
  }
}
