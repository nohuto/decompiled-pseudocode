/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008CA5C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008C9A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18008C9A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ecx
  BOOL IsEqualGUID; // eax
  _QWORD *v7; // r8
  __int64 v8; // r10

  if ( *a2 != -1049873362
    || a2[1] != *(_DWORD *)&GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data2
    || a2[2] != *(_DWORD *)GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data4
    || a2[3] != *(_DWORD *)&GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84.Data4[4] )
  {
    v3 = a1 + 8;
    if ( *a2 == 742802500
      && a2[1] == *(_DWORD *)&GUID_2c464444_1696_4977_b07c_617cf0de9c17.Data2
      && a2[2] == *(_DWORD *)GUID_2c464444_1696_4977_b07c_617cf0de9c17.Data4
      && a2[3] == *(_DWORD *)&GUID_2c464444_1696_4977_b07c_617cf0de9c17.Data4[4] )
    {
      *a3 = v3;
    }
    else
    {
      if ( *a2 != -662823169
        || a2[1] != *(_DWORD *)&GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3.Data2
        || a2[2] != *(_DWORD *)GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3.Data4
        || a2[3] != *(_DWORD *)&GUID_d87e1eff_10a6_41e5_a77b_e2dfd1b4c5d3.Data4[4] )
      {
        IsEqualGUID = InlineIsEqualGUID(a2, &GUID_9004b409_618f_4892_959c_26fcf2cbafa3);
        v4 = 0;
        if ( IsEqualGUID )
          *v7 = v8 + 8;
        else
          return (unsigned int)-2147467262;
        return v4;
      }
      *a3 = v3 + 8;
    }
    return 0;
  }
  *a3 = a1;
  return 0LL;
}
