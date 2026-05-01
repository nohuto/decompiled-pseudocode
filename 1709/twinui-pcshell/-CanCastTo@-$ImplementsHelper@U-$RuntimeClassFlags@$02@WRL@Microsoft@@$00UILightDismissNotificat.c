/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIHolographicExperienceExtension@Holographic@89Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009CF14
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIHolographicExperienceExtension@Holographic@789@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009AF50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDism.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1924325694
    || a2[1] != *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data2
    || a2[2] != *(_DWORD *)GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4
    || a2[3] != *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 56
      || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 33874264
        || a2[1] != *(_DWORD *)&GUID_0204e158_c053_499b_811c_acd15ef07559.Data2
        || a2[2] != *(_DWORD *)GUID_0204e158_c053_499b_811c_acd15ef07559.Data4
        || a2[3] != *(_DWORD *)&GUID_0204e158_c053_499b_811c_acd15ef07559.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -557823208
          || a2[1] != *(_DWORD *)&GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data2
          || a2[2] != *(_DWORD *)GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data4
          || a2[3] != *(_DWORD *)&GUID_dec04b18_357e_41d8_9b71_b991243bea34.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != 2119596781
            || a2[1] != *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data2
            || a2[2] != *(_DWORD *)GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4
            || a2[3] != *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4[4] )
          {
            return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::CanCastTo(a1 + 8);
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
