/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18019F1C4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019E370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18019E370.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // eax
  unsigned int v5; // ecx

  if ( *(_DWORD *)a2 == -363000348
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1784571261)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -1793664922)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_9516d866_ca0f_40ca_8997_efa618b50f99.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_9516d866_ca0f_40ca_8997_efa618b50f99.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_9516d866_ca0f_40ca_8997_efa618b50f99.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -2030348378)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -1219107104)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4[4] )
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
