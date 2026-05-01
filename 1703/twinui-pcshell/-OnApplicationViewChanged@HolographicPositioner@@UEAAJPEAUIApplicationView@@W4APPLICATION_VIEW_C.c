/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800D7B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007E2E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CA-A.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800D97A0 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA4AC (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA590 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DAC2C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int IsViewManaged; // eax
  unsigned int v7; // r14d
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+34h] [rbp-3Ch] BYREF
  __int16 v16; // [rsp+38h] [rbp-38h]
  _QWORD v17[3]; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  __int16 v19; // [rsp+5Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v21; // [rsp+90h] [rbp+20h] BYREF

  v17[1] = -2LL;
  if ( !*(_DWORD *)(a1 + 48) )
    return 0LL;
  v21 = 0;
  IsViewManaged = HolographicPositioner::IsViewManaged((HolographicPositioner *)(a1 - 48), a2, &v21);
  v7 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x187,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    return v7;
  }
  if ( v21 )
  {
    if ( a3 == 1 )
    {
      HolographicPositioner::_HandleControlLostForView((HolographicPositioner *)(a1 - 160), a2);
    }
    else if ( a3 > 6 )
    {
      if ( a3 > 8 )
      {
        if ( a3 == 9 )
          HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 160), a2);
        return 0LL;
      }
      v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x190,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      HolographicPositioner::_RaiseViewFocusGained((HolographicPositioner *)(a1 - 160), a2);
    }
  }
  else if ( !a3 )
  {
    v17[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v17[0] = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))a2)(
           a2,
           &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
           v17) < 0 )
      goto LABEL_29;
    v21 = 6;
    v14 = 0;
    if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 376LL))(a2, &v21) < 0 || v21 != 1 )
      goto LABEL_29;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::GetCachedFeatureEnabledState();
    v18 = 0;
    LOBYTE(v19) = 3;
    v15 = 0;
    v16 = v19;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::GetFeaturePropertyCache'::`2'::data,
      0xA02EFBu,
      (const struct FEATURE_LOGGED_TRAITS *)&v15,
      1,
      3);
    if ( (int)IsDeveloperModeEnabled(&v14) < 0
      || !v14
      || (v11 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 56) + 24LL))(
                  *(_QWORD *)(a1 + 56),
                  a2,
                  4LL),
          v10 = v11,
          v11 >= 0) )
    {
LABEL_29:
      v13 = v17[0];
      if ( v17[0] )
      {
        v17[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v11);
    v12 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    return v10;
  }
  return 0LL;
}
