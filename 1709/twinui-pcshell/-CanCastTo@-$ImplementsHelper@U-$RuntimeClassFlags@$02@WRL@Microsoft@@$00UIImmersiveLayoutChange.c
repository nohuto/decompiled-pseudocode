/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B3634
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B3750 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801B3750.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IWnfCallback,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // eax
  unsigned int v5; // ecx

  if ( *(_DWORD *)a2 == 1784571261
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 845818411)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1582784273)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -69871127)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fbd5d9e9_e560_4560_8b72_872e1d434569.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fbd5d9e9_e560_4560_8b72_872e1d434569.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fbd5d9e9_e560_4560_8b72_872e1d434569.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -1211751484)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
  {
    *a3 = (void *)a1;
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    v5 = -2147467262;
    if ( CanCastTo >= 0 )
      return 0;
    return v5;
  }
}
