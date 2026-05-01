/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180150824
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014DC10 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIXamlLaun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<IXamlLauncherState,Microsoft::WRL::Details::InterfaceList<IImmersiveLauncherCortana,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::Nil>>>>>,0,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rcx

  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    v4 = 1;
    *a3 = a1;
  }
  else
  {
    v4 = 0;
  }
  result = v4 == 0 ? 0x80004002 : 0;
  if ( !v4 )
  {
    v6 = a1 + 16;
    if ( *a2 == -2111458614
      && a2[1] == *(_DWORD *)&GUID_8225b2ca_9cb0_4c0a_9ce1_64b7f668942d.Data2
      && a2[2] == *(_DWORD *)GUID_8225b2ca_9cb0_4c0a_9ce1_64b7f668942d.Data4
      && a2[3] == *(_DWORD *)&GUID_8225b2ca_9cb0_4c0a_9ce1_64b7f668942d.Data4[4]
      || (v6 = a1 + 24, *a2 == 1593280783)
      && a2[1] == *(_DWORD *)&GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data2
      && a2[2] == *(_DWORD *)GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data4
      && a2[3] == *(_DWORD *)&GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce.Data4[4]
      || (v6 = a1 + 32, *a2 == -189734543)
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
    {
      *a3 = v6;
      return 0LL;
    }
    if ( *a2 == -1738762077
      && a2[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
      && a2[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
      && a2[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
    {
      *a3 = a1 + 40;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
