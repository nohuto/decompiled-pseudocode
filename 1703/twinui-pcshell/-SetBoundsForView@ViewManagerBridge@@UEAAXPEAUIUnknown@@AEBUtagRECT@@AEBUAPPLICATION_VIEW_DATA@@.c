/*
 * XREFs of ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180108920
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005AF04 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetBoundsForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct tagRECT *a3,
        const struct APPLICATION_VIEW_DATA *a4)
{
  int v7; // edi
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-39h] BYREF
  int v13; // [rsp+40h] [rbp-31h]
  __int16 v14; // [rsp+44h] [rbp-2Dh]
  _OWORD v15[3]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh]
  _OWORD v17[2]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+37h]
  int v19; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v21; // [rsp+D8h] [rbp+67h] BYREF
  __int16 v22; // [rsp+DCh] [rbp+6Bh]

  v16 = -2LL;
  if ( !*((_BYTE *)this + 137) )
  {
    memset(v15, 0, 0x2CuLL);
    LODWORD(v15[0]) = a3->right - a3->left;
    DWORD1(v15[0]) = a3->bottom - a3->top;
    DWORD2(v15[0]) = *((_DWORD *)a4 + 2);
    HIDWORD(v15[0]) = *(_DWORD *)a4;
    v7 = *((_DWORD *)a4 + 8);
    DWORD1(v15[2]) = *((_DWORD *)a4 + 7);
    BYTE12(v15[1]) = *((_DWORD *)a4 + 4) != 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
    v13 = 0;
    LOBYTE(v14) = 3;
    v21 = 0;
    v22 = v14;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
      0x8DFABCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v21,
      1,
      3);
    LODWORD(v15[2]) = *((_DWORD *)a4 + 6);
    v12 = 0LL;
    lpVtbl = a2->lpVtbl;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      v9);
    v17[0] = v15[0];
    v17[1] = v15[1];
    v18 = *(_QWORD *)&v15[2];
    v19 = v7;
    v10 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v12 + 192LL))(v12, v17);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x100,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
}
