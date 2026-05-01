/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007C4EC
 * Callers:
 *     ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C410 (-QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@789Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2524 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDis_ea_1800F2524.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _QWORD *v5; // r8
  unsigned int v6; // r9d
  _DWORD *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r11

  if ( !InlineIsEqualGUID(a2, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9) )
  {
    if ( !InlineIsEqualGUID(v2, &GUID_dec04b18_357e_41d8_9b71_b991243bea34) )
    {
      v9 = v8 + 8;
      if ( *v7 == 2119596781
        && v7[1] == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data2
        && v7[2] == *(_DWORD *)GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4
        && v7[3] == *(_DWORD *)&GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef.Data4[4]
        || (v9 = v8 + 16, *v7 == -1738762077)
        && v7[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
        && v7[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
        && v7[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
      {
        *v5 = v9;
        return v6;
      }
      v8 += 24LL;
      if ( *v7 != -189734543
        || v7[1] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
        || v7[2] != *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
        || v7[3] != *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
      {
        v8 = v9 + 16;
        if ( *v7 != -1811144131
          || v7[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
          || v7[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
          || v7[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
        {
          if ( InlineIsEqualGUID(v7, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e) )
            *v10 = v11 + 8;
          else
            return (unsigned int)-2147467262;
          return v6;
        }
      }
    }
    *v5 = v8;
    return v6;
  }
  *v3 = v4;
  return 0LL;
}
