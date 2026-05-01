/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@U?$InterfaceList@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FBA70
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1800F2778 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@U?$InterfaceList@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801013E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@U-$InterfaceLis_ea_1801013E0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@U?$InterfaceList@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801018D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@U-$InterfaceLis_ea_1801018D0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@U?$InterfaceList@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101C50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@U-$InterfaceLis_ea_180101C50.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  _DWORD *v5; // rdx
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
    if ( *(_DWORD *)a2 == -1765728790
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_96c11dea_68de_44ef_a7f7_3aa869663d57.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57.Data4[4] )
    {
      *a3 = (void *)a1;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
      if ( CanCastTo >= 0 )
        goto LABEL_29;
      v7 = v6 + 48;
      if ( *v5 == 56
        && v5[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && v5[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && v5[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        *a3 = (void *)v7;
        CanCastTo = 0;
        goto LABEL_29;
      }
      if ( *v5 != -14357427
        || v5[1] != *(_DWORD *)&GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49.Data2
        || v5[2] != *(_DWORD *)GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49.Data4
        || v5[3] != *(_DWORD *)&GUID_ff24ec4d_0f9a_48f8_8083_39f5065b6a49.Data4[4] )
      {
        CanCastTo = -2147467262;
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
