/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801B34A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0xB0uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
    v6[2] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
    v6[3] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
    v6[4] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[5] = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
    v6[6] = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
    v6[7] = GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa;
    v6[8] = GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c;
    v6[9] = GUID_fbd5d9e9_e560_4560_8b72_872e1d434569;
    v6[10] = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
    *a2 = 11;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
