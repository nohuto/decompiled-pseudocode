/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164730
 * Callers:
 *     ?AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x1801641E4 (-AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAU.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164A40 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking_ea_180164A40.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164A60 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking_ea_180164A60.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164A70 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking_ea_180164A70.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164AA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking_ea_180164AA0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)a2
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != -1350114592
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *(_DWORD *)a2 == -715919450
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_d553efa6_cf93_494e_903c_f90e2f1c1052.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_d553efa6_cf93_494e_903c_f90e2f1c1052.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_d553efa6_cf93_494e_903c_f90e2f1c1052.Data4[4] )
    {
      *a3 = (void *)a1;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
      if ( CanCastTo >= 0 )
        goto LABEL_29;
      v7 = v6 + 128;
      if ( *(_DWORD *)v5 == 56
        && *(_DWORD *)(v5 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && *(_DWORD *)(v5 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && *(_DWORD *)(v5 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        *a3 = (void *)v7;
        CanCastTo = 0;
        goto LABEL_29;
      }
      if ( *(_DWORD *)v5 != -1959734868
        || *(_DWORD *)(v5 + 4) != *(_DWORD *)&GUID_8b30d1ac_11fa_4300_aa9b_ae77c6bbc345.Data2
        || *(_DWORD *)(v5 + 8) != *(_DWORD *)GUID_8b30d1ac_11fa_4300_aa9b_ae77c6bbc345.Data4
        || *(_DWORD *)(v5 + 12) != *(_DWORD *)&GUID_8b30d1ac_11fa_4300_aa9b_ae77c6bbc345.Data4[4] )
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v7 + 16),
                      (const struct _GUID *)v5,
                      a3);
LABEL_28:
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
LABEL_29:
        (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)CanCastTo;
      }
      *a3 = (void *)(v7 + 8);
    }
    CanCastTo = 0;
    goto LABEL_28;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
