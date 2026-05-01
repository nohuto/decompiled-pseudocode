/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18019E1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0xA0uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
    v6[2] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
    v6[3] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
    v6[4] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[5] = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
    v6[6] = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
    v6[7] = GUID_9516d866_ca0f_40ca_8997_efa618b50f99;
    v6[8] = GUID_86fb57a6_3c81_4f40_a971_6280be4e526e;
    v6[9] = GUID_b755e6e0_b048_49cc_8911_11a041216f5f;
    *a2 = 10;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
