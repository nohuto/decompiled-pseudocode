/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015E080
 * Callers:
 *     ?AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x18015DAB4 (-AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLo.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015ECD0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Mu_ea_18015ECD0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015ED00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Mu_ea_18015ED00.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015ED30 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Mu_ea_18015ED30.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VSwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIAppViewSwitchItemDataSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015ED60 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VSwitchItemDataSourceBase@Common@Mu_ea_18015ED60.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItemDataSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // edi
  int v5; // ecx
  unsigned int CanCastTo; // ebx
  char *v7; // r9
  char *v8; // r9

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
    if ( *(_DWORD *)a2 == 1556520125
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5cc69cbd_8bcc_4674_a80b_9466992872d0.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5cc69cbd_8bcc_4674_a80b_9466992872d0.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5cc69cbd_8bcc_4674_a80b_9466992872d0.Data4[4] )
    {
      v5 = 1;
      *a3 = a1;
    }
    else
    {
      v5 = 0;
    }
    CanCastTo = v5 == 0 ? 0x80004002 : 0;
    if ( !v5 )
    {
      v7 = a1 + 64;
      if ( *(_DWORD *)a2 == 56
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        *a3 = v7;
        CanCastTo = 0;
        goto LABEL_35;
      }
      v8 = v7 + 8;
      if ( *(_DWORD *)a2 == 1920966295
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
      {
        *a3 = v8;
LABEL_27:
        CanCastTo = 0;
        goto LABEL_34;
      }
      if ( *(_DWORD *)a2 == 899883927
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_35a32397_d8f8_45d0_bb99_9bc1684c0223.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_35a32397_d8f8_45d0_bb99_9bc1684c0223.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_35a32397_d8f8_45d0_bb99_9bc1684c0223.Data4[4] )
      {
        *a3 = v8 + 8;
        goto LABEL_27;
      }
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 16), (const struct _GUID *)a2, a3);
    }
LABEL_34:
    if ( (CanCastTo & 0x80000000) != 0 )
      return CanCastTo;
LABEL_35:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
