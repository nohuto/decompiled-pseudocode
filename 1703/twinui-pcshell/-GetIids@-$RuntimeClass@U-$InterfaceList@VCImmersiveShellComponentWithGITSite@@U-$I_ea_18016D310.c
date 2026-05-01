/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIImmersiveLayoutChanges@@U?$InterfaceList@UITabTipAdapterOwner@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18016D310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x80uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
    v6[2] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
    v6[3] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
    v6[4] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[5] = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
    v6[6] = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
    v6[7] = GUID_bc5ec145_0464_42ff_aeda_cf0c82a89156;
    *a2 = 8;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
