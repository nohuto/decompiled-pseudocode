/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C9FE4
 * Callers:
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x1801C6A0C (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLi.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x1801C6B6C (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4View.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CC460 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801CC460.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002BBF0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverrid.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ViewWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>::CanCastTo(
        __int64 a1,
        int *a2)
{
  _QWORD *v4; // r8
  __int64 result; // rax
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r10d

  if ( InlineIsEqualGUID(a2, &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f) )
  {
    *v4 = a1;
    return 0LL;
  }
  if ( *a2 == 618114995
    && a2[1] == *(_DWORD *)&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data2
    && a2[2] == *(_DWORD *)GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data4
    && a2[3] == *(_DWORD *)&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data4[4]
    || *a2 == -1967932074
    && a2[1] == *(_DWORD *)&GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e.Data2
    && a2[2] == *(_DWORD *)GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e.Data4
    && a2[3] == *(_DWORD *)&GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e.Data4[4] )
  {
    *v4 = a1 + 8;
    result = 0LL;
  }
  else
  {
    result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
               a1 + 16,
               a2,
               v4);
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v7 = v8;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v6, &GUID_2dd4e662_f456_4daf_aeff_84a1c012e15f) )
    {
      *v9 = v10 + 8;
      return 0LL;
    }
    return v11;
  }
  return result;
}
