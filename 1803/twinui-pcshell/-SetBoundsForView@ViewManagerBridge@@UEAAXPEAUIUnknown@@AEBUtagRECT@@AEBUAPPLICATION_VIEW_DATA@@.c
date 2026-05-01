/*
 * XREFs of ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180054D40
 * Callers:
 *     ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004EF0C (-PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004F360 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 * Callees:
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18005FD80 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18012DF04 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetBoundsForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct tagRECT *a3,
        const struct APPLICATION_VIEW_DATA *a4)
{
  signed __int32 v7; // edi
  struct wil_details_RecordUsageResult *v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-E0h]
  signed __int32 v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+70h] [rbp-90h] BYREF
  __int16 v17; // [rsp+74h] [rbp-8Ch]
  __int128 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+88h] [rbp-78h]
  __int128 v20; // [rsp+90h] [rbp-70h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  _QWORD v24[4]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v25[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+108h] [rbp+8h]
  _QWORD v28[2]; // [rsp+110h] [rbp+10h] BYREF
  int v29; // [rsp+120h] [rbp+20h]
  int v30; // [rsp+124h] [rbp+24h]
  __int128 v31; // [rsp+128h] [rbp+28h] BYREF
  __int64 v32; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v24[2] = -2LL;
  if ( !*((_BYTE *)this + 145) )
  {
    memset_0(&v20, 0, 0x2CuLL);
    LODWORD(v20) = a3->right - a3->left;
    DWORD1(v20) = a3->bottom - a3->top;
    DWORD2(v20) = *((_DWORD *)a4 + 2);
    HIDWORD(v20) = *(_DWORD *)a4;
    v23 = *((_DWORD *)a4 + 8);
    HIDWORD(v22) = *((_DWORD *)a4 + 7);
    BYTE12(v21) = *((_DWORD *)a4 + 4) != 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
    v12[1] = 0;
    LOBYTE(v13) = 3;
    v16 = 0;
    v17 = v13;
    v15 = 3;
    v18 = 0uLL;
    v19 = 0LL;
    v12[0] = 0x10000;
    v24[0] = &v18;
    v24[1] = 0x10000LL;
    do
    {
      v12[0] = `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data;
      v7 = `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data;
      if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)v12, v24) )
      {
        LODWORD(v19) = 1;
        goto LABEL_7;
      }
    }
    while ( v7 != _InterlockedCompareExchange(
                    (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
                    v12[0],
                    v7) );
    LODWORD(v19) = 0;
LABEL_7:
    v31 = v18;
    v32 = v19;
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
        wil::details::RecordFeatureUsageCallback(
          (wil::details *)0x8DFABC,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
          (union wil_details_FeaturePropertyCache *)&v31,
          v8);
      else
        g_wil_details_recordFeatureUsage(
          0x8DFABCu,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
          (struct wil_details_RecordUsageResult *)&v31);
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v28[0] = 0LL;
        v29 = 0;
        v28[1] = 2LL;
        v30 = (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(9304764LL, 0LL, v28);
      }
    }
    if ( !(_DWORD)v32 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x8DFABCu,
        (const struct FEATURE_LOGGED_TRAITS *)&v16,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v15,
        0LL,
        0,
        1uLL);
    LODWORD(v22) = *((_DWORD *)a4 + 6);
    v14 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v14);
    v25[0] = v20;
    v25[1] = v21;
    v26 = v22;
    v27 = v23;
    v9 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v14 + 192LL))(v14, v25);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF5,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9,
        v11);
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
}
