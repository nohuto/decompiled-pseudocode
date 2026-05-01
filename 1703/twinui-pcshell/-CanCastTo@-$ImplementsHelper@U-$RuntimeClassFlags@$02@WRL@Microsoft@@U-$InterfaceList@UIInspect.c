/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIImmersiveLayoutChanges@@U?$InterfaceList@UITabTipAdapterOwner@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18016D6F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIImmersiveLayoutChanges@@U?$InterfaceList@UITabTipAdapterOwner@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016D4E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSit_ea_18016D4E0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmersiveShellComponent@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001A760 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmers.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>,0,0>::CanCastTo(
        void *a1,
        _DWORD *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r11

  if ( *a2 == -1350114592
    && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    goto LABEL_10;
  }
  result = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,CImmersiveShellComponent,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
             (__int64)a1 + 8,
             a2,
             a3);
  if ( (int)result >= 0 )
    return result;
  a1 = (void *)(v5 + 80);
  if ( *(_DWORD *)v4 != 56
    || *(_DWORD *)(v4 + 4) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || *(_DWORD *)(v4 + 8) != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || *(_DWORD *)(v4 + 12) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    a1 = (void *)(v5 + 88);
    if ( *(_DWORD *)v4 != -363000348
      || *(_DWORD *)(v4 + 4) != *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data2
      || *(_DWORD *)(v4 + 8) != *(_DWORD *)GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4
      || *(_DWORD *)(v4 + 12) != *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4[4] )
    {
      a1 = (void *)(v5 + 96);
      if ( *(_DWORD *)v4 != 1784571261
        || *(_DWORD *)(v4 + 4) != *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
        || *(_DWORD *)(v4 + 8) != *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
        || *(_DWORD *)(v4 + 12) != *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4] )
      {
        a1 = (void *)(v5 + 104);
        if ( *(_DWORD *)v4 != -1134640827
          || *(_DWORD *)(v4 + 4) != *(_DWORD *)&GUID_bc5ec145_0464_42ff_aeda_cf0c82a89156.Data2
          || *(_DWORD *)(v4 + 8) != *(_DWORD *)GUID_bc5ec145_0464_42ff_aeda_cf0c82a89156.Data4
          || *(_DWORD *)(v4 + 12) != *(_DWORD *)&GUID_bc5ec145_0464_42ff_aeda_cf0c82a89156.Data4[4] )
        {
          return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 112), (const struct _GUID *)v4, a3);
        }
      }
    }
  }
LABEL_10:
  *a3 = a1;
  return 0LL;
}
