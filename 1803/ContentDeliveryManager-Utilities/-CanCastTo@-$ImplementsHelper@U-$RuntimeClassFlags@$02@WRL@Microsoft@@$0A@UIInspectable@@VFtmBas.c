/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@8@UIProcessStartMenuEvent@8@UIProcessContextualSuggestionsEvent@8@UILayoutResolver@8@UILockScreenRegistrySettingProvider@8@UITaskBarAppProperties@8@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180028680
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180026E00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180026E00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1350114592
    || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    a1 += 8LL;
    if ( (*a2 != -1796592748
       || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
       || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
       || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
      && (*a2 != 3
       || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
       || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
       || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
    {
      a1 += 32LL;
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -1599924213
          || a2[1] != *(_DWORD *)&GUID_a0a3180b_3c8a_4906_ae66_be3daac93eac.Data2
          || a2[2] != *(_DWORD *)GUID_a0a3180b_3c8a_4906_ae66_be3daac93eac.Data4
          || a2[3] != *(_DWORD *)&GUID_a0a3180b_3c8a_4906_ae66_be3daac93eac.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != 820887424
            || a2[1] != *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data2
            || a2[2] != *(_DWORD *)GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4
            || a2[3] != *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4[4] )
          {
            return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::CanCastTo(a1 + 8);
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
