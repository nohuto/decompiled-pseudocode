/*
 * XREFs of ndisReadMiniportDefaultPortAuthStates @ 0x1C00AB870
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00AB964 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     ndisReadMiniportSpecificPortAuthStates @ 0x1C00AC3B0 (ndisReadMiniportSpecificPortAuthStates.c)
 *     NdisCloseConfiguration @ 0x1C00ADB10 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadMiniportDefaultPortAuthStates(__int64 a1)
{
  unsigned int MiniportMediaSpecificPortAuthStates; // edi
  unsigned int MiniportSpecificPortAuthStates; // eax
  PVOID v4; // rcx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+20h] [rbp-28h] BYREF
  PVOID ConfigurationHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x35u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1);
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  MiniportMediaSpecificPortAuthStates = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !MiniportMediaSpecificPortAuthStates )
  {
    MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
    v4 = ConfigurationHandle;
    MiniportMediaSpecificPortAuthStates = MiniportSpecificPortAuthStates;
    if ( !MiniportSpecificPortAuthStates )
    {
      *(_DWORD *)(a1 + 2688) |= 8u;
      NdisCloseConfiguration(v4);
      goto LABEL_9;
    }
    NdisCloseConfiguration(ConfigurationHandle);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 32) < 6u )
LABEL_6:
    MiniportMediaSpecificPortAuthStates = ndisReadMiniportMediaSpecificPortAuthStates(a1);
  if ( MiniportMediaSpecificPortAuthStates )
  {
    *(_DWORD *)(a1 + 3344) = ndisGlobalPortSendAuthorizationState;
    *(_DWORD *)(a1 + 3348) = ndisGlobalPortReceiveAuthorizationState;
    *(_DWORD *)(a1 + 3336) = ndisGlobalPortSendControlState;
    *(_DWORD *)(a1 + 3340) = ndisGlobalPortReceiveControlState;
    *(_DWORD *)(a1 + 3328) = ndisGlobalPortSendAuthorizationState;
    *(_DWORD *)(a1 + 3332) = ndisGlobalPortReceiveAuthorizationState;
    *(_DWORD *)(a1 + 3320) = ndisGlobalPortSendControlState;
    *(_DWORD *)(a1 + 3324) = ndisGlobalPortReceiveControlState;
  }
LABEL_9:
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x36u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1, MiniportMediaSpecificPortAuthStates);
  return MiniportMediaSpecificPortAuthStates;
}
