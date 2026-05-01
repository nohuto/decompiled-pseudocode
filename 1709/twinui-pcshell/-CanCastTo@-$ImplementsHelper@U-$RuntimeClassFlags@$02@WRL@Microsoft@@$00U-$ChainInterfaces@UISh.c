/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DBDEC
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@67@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@67@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DBBAC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800DBBAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // r9d
  char v4; // r10
  char v5; // al
  __int64 v6; // rcx

  v3 = 0;
  v4 = 1;
  if ( *a2 == -1572387332
    && a2[1] == *(_DWORD *)&GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf.Data2
    && a2[2] == *(_DWORD *)GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf.Data4
    && a2[3] == *(_DWORD *)&GUID_a24745fc_7a2e_4b7c_b092_8cb224694bbf.Data4[4] )
  {
    *a3 = a1;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( !v5 )
  {
    if ( *a2 == 659858260
      && a2[1] == *(_DWORD *)&GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7.Data2
      && a2[2] == *(_DWORD *)GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7.Data4
      && a2[3] == *(_DWORD *)&GUID_2754a354_56cd_4a4a_a0ed_ec256a88d6b7.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      v4 = 0;
    }
    if ( !v4 )
    {
      v6 = a1 + 8;
      if ( *a2 == 1337586361
        && a2[1] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
        && a2[2] == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
        && a2[3] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4]
        || (v6 += 8LL, *a2 == -1738762077)
        && a2[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
        && a2[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
        && a2[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
      {
        *a3 = v6;
      }
      else if ( *a2 == -421385957
             && a2[1] == *(_DWORD *)&GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9.Data2
             && a2[2] == *(_DWORD *)GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9.Data4
             && a2[3] == *(_DWORD *)&GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9.Data4[4] )
      {
        *a3 = v6 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
  }
  return v3;
}
