/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIHolographicExperienceExtension@Holographic@Shell@Internal@9@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009D008
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIHolographicExperienceExtension@Holographic@89Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009CF14 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotificat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == -1738762077
    && a2[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
    && a2[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
    && a2[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4]
    || (a1 += 8LL, *a2 == -189734543)
    && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
    && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
    && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
    || (a1 += 8LL, *a2 == -1811144131)
    && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
    || (a1 += 8LL, *a2 == 819308585)
    && a2[1] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
    && a2[2] == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
    && a2[3] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -2087238501
    && a2[1] == *(_DWORD *)&GUID_8397449b_59a3_4c1d_868d_68f27513cee4.Data2
    && a2[2] == *(_DWORD *)GUID_8397449b_59a3_4c1d_868d_68f27513cee4.Data4
    && a2[3] == *(_DWORD *)&GUID_8397449b_59a3_4c1d_868d_68f27513cee4.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
