/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800440B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044180 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180044180.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180096000 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180096000.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099640 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180099640.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1614805935
    && a2[1] == *(_DWORD *)&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999.Data2
    && a2[2] == *(_DWORD *)GUID_603ffbaf_2fd6_4711_8c68_de56f864f999.Data4
    && a2[3] == *(_DWORD *)&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999.Data4[4]
    || (a1 += 8LL, *a2 == 1019376897)
    && a2[1] == *(_DWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data2
    && a2[2] == *(_DWORD *)GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data4
    && a2[3] == *(_DWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data4[4]
    || (a1 += 8LL, *a2 == 418570778)
    && a2[1] == *(_DWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data2
    && a2[2] == *(_DWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4
    && a2[3] == *(_DWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -605254686
    && a2[1] == *(_DWORD *)&GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61.Data2
    && a2[2] == *(_DWORD *)GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61.Data4
    && a2[3] == *(_DWORD *)&GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
