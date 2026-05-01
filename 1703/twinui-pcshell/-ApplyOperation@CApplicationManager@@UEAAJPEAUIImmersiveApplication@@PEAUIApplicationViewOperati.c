/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180009630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000E428 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800178B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018100 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     wil::ScopeExit__lambda_57cab02eed10313f9b501e3d0d1da854___ @ 0x180018184 (wil--ScopeExit__lambda_57cab02eed10313f9b501e3d0d1da854___.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  int v6; // ecx
  unsigned int First; // ebx
  int v8; // r14d
  bool v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  bool v16; // cf
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  struct IImmersiveApplication *v25; // [rsp+80h] [rbp-88h] BYREF
  int v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v34[2]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v35[40]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v34[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 128LL))(a3, &v24) < 0 )
  {
    LODWORD(v24) = 0;
  }
  else if ( (unsigned int)v24 > 0x11 || (v6 = 131346, !_bittest(&v6, v24)) )
  {
    First = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71E,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x80070057LL);
    return First;
  }
  v8 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 80LL))(a3, &v30) >= 0 )
    v8 = 2 - (v30 != 0);
  v9 = (*(int (__fastcall **)(struct IApplicationViewOperation *, _BYTE *))(*(_QWORD *)a3 + 112LL))(a3, v35) >= 0;
  v29 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 64LL))(a3, &v29);
  v28 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 144LL))(a3, &v28);
  v31 = 0LL;
  v26 = (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 96LL))(
          a3,
          &v31,
          (char *)&v31 + 4) >= 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::ScopeExit__lambda_57cab02eed10313f9b501e3d0d1da854___(&v22);
  v10 = 0LL;
  v23 = 0LL;
  v25 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = v23;
  }
  if ( v10 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (char *)this - 176,
            &v25,
            &v23,
            0LL);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( (First & 0x80000000) != 0 )
  {
    v11 = First;
    v12 = 1873LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v11);
    goto LABEL_34;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetCachedFeatureEnabledState();
  LODWORD(v27) = 0;
  BYTE4(v27) = 3;
  LODWORD(v25) = 0;
  WORD2(v25) = WORD2(v27);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data,
    5284159LL,
    &v25,
    1LL,
    3);
  v13 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, struct IImmersiveApplication **))(*(_QWORD *)a3 + 176LL))(
          a3,
          &v32,
          &v25);
  First = v13;
  if ( v13 < 0 )
  {
    v12 = 1880LL;
LABEL_26:
    v11 = (unsigned int)v13;
    goto LABEL_27;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveApplication *))(*(_QWORD *)v23 + 560LL))(
          v23,
          v32,
          v25);
  First = v13;
  if ( v13 < 0 )
  {
    v12 = 1881LL;
    goto LABEL_26;
  }
  v13 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, _QWORD *, __int64 *))(*(_QWORD *)a3 + 192LL))(
          a3,
          v34,
          &v33);
  First = v13;
  if ( v13 < 0 )
  {
    v12 = 1885LL;
    goto LABEL_26;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 568LL))(v23, v34[0], v33);
  First = v13;
  if ( v13 < 0 )
  {
    v12 = 1886LL;
    goto LABEL_26;
  }
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 208LL))(a3, &v27) < 0
    || (v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 592LL))(v23, v27), First = v14, v14 >= 0) )
  {
    v16 = (_BYTE)v26 != 0;
    LOBYTE(v26) = -(char)v26;
    v14 = CApplicationManager::_SetViewPositionHelper(
            (char *)this - 176,
            v29,
            (unsigned __int64)v35 & -(__int64)v9,
            v28,
            v8,
            *((_DWORD *)this + 146),
            0LL,
            (unsigned __int64)&v31 & -(__int64)v16,
            1,
            v24,
            a2,
            v23,
            v22);
    First = v14;
    if ( v14 >= 0 )
    {
      v18 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( BYTE1(v22) )
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      First = 0;
      goto LABEL_43;
    }
    v15 = 1907LL;
  }
  else
  {
    v15 = 1892LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_34:
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( BYTE1(v22) )
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
LABEL_43:
  v19 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return First;
}
