/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationPresentationListener@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE0D0
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800D9E64 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationPresentationListener@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E15B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewHostItem@Holographic@Shell@In_ea_1800E15B0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationPresentationListener@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E17E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewHostItem@Holographic@Shell@In_ea_1800E17E0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationPresentationListener@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E1A00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewHostItem@Holographic@Shell@In_ea_1800E1A00.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationPresentationListener@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E1C70 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewHostItem@Holographic@Shell@In_ea_1800E1C70.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItem,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationPresentationListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  char *v5; // rcx

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
    if ( *(_DWORD *)a2 == -886028548
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_cb3046fc_126d_4b0e_ab76_805893800fa7.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_cb3046fc_126d_4b0e_ab76_805893800fa7.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_cb3046fc_126d_4b0e_ab76_805893800fa7.Data4[4]
      || (a1 += 8, *(_DWORD *)a2 == 56)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      v5 = a1 + 8;
      if ( *(_DWORD *)a2 == 217877616
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad.Data4[4]
        || (v5 += 8, *(_DWORD *)a2 == 165329126)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_09dab8e6_f09f_4b9b_8485_922137fd8070.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_09dab8e6_f09f_4b9b_8485_922137fd8070.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_09dab8e6_f09f_4b9b_8485_922137fd8070.Data4[4] )
      {
        *a3 = v5;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v5 + 8),
                      (const struct _GUID *)a2,
                      a3);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
