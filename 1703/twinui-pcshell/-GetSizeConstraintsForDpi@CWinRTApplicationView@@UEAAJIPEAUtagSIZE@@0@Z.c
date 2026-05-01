/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x1800806B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800178B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?GetIam@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@XZ @ 0x18007A7E4 (-GetIam@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveApplicationPresentation@@@W.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x18007A878 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18007FBE8 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        PSRWLOCK *a4)
{
  __int64 v8; // rbx
  int v9; // edi
  PSRWLOCK v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PSRWLOCK v14; // rcx
  __int64 v15; // rcx
  PSRWLOCK v16; // rcx
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  LONG v25; // eax
  LONG v26; // eax
  LONG cx; // eax
  LONG cy; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  __int64 v37; // rcx
  __int64 v38; // [rsp+40h] [rbp-40h] BYREF
  __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  __int64 v40; // [rsp+58h] [rbp-28h] BYREF
  RTL_SRWLOCK *v41; // [rsp+60h] [rbp-20h] BYREF
  int v42[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v43[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  PSRWLOCK SRWLock; // [rsp+B0h] [rbp+30h] BYREF

  v43[1] = -2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 4, &SRWLock);
  v8 = *(_QWORD *)((char *)this + 172);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v41 = 0LL;
  v39 = 0LL;
  *(_QWORD *)v42 = 0LL;
  v40 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetCachedFeatureEnabledState();
  LODWORD(v38) = 0;
  BYTE4(v38) = 3;
  LODWORD(SRWLock) = 0;
  WORD2(SRWLock) = WORD2(v38);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data,
    0x50A13Fu,
    (const struct FEATURE_LOGGED_TRAITS *)&SRWLock,
    1,
    3);
  v41 = 0LL;
  v39 = 0LL;
  *(_QWORD *)v42 = 0LL;
  v40 = 0LL;
  ApplicationViewManagement::CGlobals::GetIam((__int64 *)&SRWLock);
  if ( !SRWLock )
  {
    v9 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
    v10 = SRWLock;
    if ( SRWLock )
    {
      SRWLock = 0LL;
      (*((void (__fastcall **)(PSRWLOCK))v10->Ptr + 2))(v10);
    }
    goto LABEL_22;
  }
  v38 = 0LL;
  v11 = (*(__int64 (__fastcall **)(PSRWLOCK, GUID *, __int64 *))SRWLock->Ptr)(
          SRWLock,
          &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
          &v38);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 195LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v11);
    v13 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = SRWLock;
    if ( SRWLock )
    {
      SRWLock = 0LL;
      (*((void (__fastcall **)(PSRWLOCK))v14->Ptr + 2))(v14);
    }
    goto LABEL_21;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, RTL_SRWLOCK **, __int64 *, int *, __int64 *))(*(_QWORD *)v38 + 40LL))(
          v38,
          *((_QWORD *)this + 20),
          &v41,
          &v39,
          v42,
          &v40);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 196LL;
    goto LABEL_10;
  }
  v15 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = SRWLock;
  if ( SRWLock )
  {
    SRWLock = 0LL;
    (*((void (__fastcall **)(PSRWLOCK))v16->Ptr + 2))(v16);
  }
  v9 = 0;
LABEL_21:
  if ( v9 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x19A,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  ApplicationViewManagement::CGlobals::GetWindowSizeConverter(v43);
  if ( !a3 )
    goto LABEL_48;
  v18 = HIDWORD(v39);
  v19 = v39;
  v20 = HIDWORD(v41);
  v21 = (int)v41;
  if ( ((int)v41 <= 0 || SHIDWORD(v41) <= 0) && ((int)v39 <= 0 || SHIDWORD(v39) <= 0) )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v43[0] + 40LL))(
            v43[0],
            v8,
            a2,
            this,
            a3);
    v23 = v22;
    if ( v22 < 0 )
    {
      v24 = 439LL;
      goto LABEL_66;
    }
    goto LABEL_48;
  }
  *a3 = 0LL;
  if ( v21 <= 0 || v20 <= 0 )
  {
LABEL_37:
    if ( v19 > 0 && v18 > 0 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, PSRWLOCK *))(*(_QWORD *)v43[0] + 40LL))(
              v43[0],
              v39,
              a2,
              this,
              &SRWLock);
      v23 = v22;
      if ( v22 < 0 )
      {
        v24 = 432LL;
        goto LABEL_66;
      }
      cx = (int)SRWLock;
      if ( a3->cx > (int)SRWLock )
        cx = a3->cx;
      a3->cx = cx;
      cy = HIDWORD(SRWLock);
      if ( a3->cy > SHIDWORD(SRWLock) )
        cy = a3->cy;
      a3->cy = cy;
    }
LABEL_48:
    if ( a4 )
    {
      v29 = HIDWORD(v40);
      v30 = v40;
      v31 = v42[1];
      v32 = v42[0];
      if ( (v42[0] <= 0 || v42[1] <= 0) && ((int)v40 <= 0 || SHIDWORD(v40) <= 0) )
      {
        LODWORD(SRWLock) = GetSystemMetrics(59);
        HIDWORD(SRWLock) = GetSystemMetrics(60);
        *a4 = SRWLock;
      }
      else
      {
        SRWLock = (PSRWLOCK)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (PSRWLOCK)0x7FFFFFFF7FFFFFFFLL;
        if ( v32 > 0 && v31 > 0 )
        {
          SRWLock = *(PSRWLOCK *)v42;
          v22 = CWinRTApplicationView::AdjustSizeForChrome(this, (struct tagSIZE *)&SRWLock, a2);
          v23 = v22;
          if ( v22 < 0 )
          {
            v24 = 452LL;
            goto LABEL_66;
          }
          v33 = (int)SRWLock;
          if ( *(_DWORD *)a4 < (int)SRWLock )
            v33 = *(_DWORD *)a4;
          *(_DWORD *)a4 = v33;
          v34 = HIDWORD(SRWLock);
          if ( *((_DWORD *)a4 + 1) < SHIDWORD(SRWLock) )
            v34 = *((_DWORD *)a4 + 1);
          *((_DWORD *)a4 + 1) = v34;
          v29 = HIDWORD(v40);
          v30 = v40;
        }
        if ( v30 > 0 && v29 > 0 )
        {
          v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, PSRWLOCK *))(*(_QWORD *)v43[0] + 40LL))(
                  v43[0],
                  v40,
                  a2,
                  this,
                  &SRWLock);
          v23 = v22;
          if ( v22 < 0 )
          {
            v24 = 460LL;
            goto LABEL_66;
          }
          v35 = (int)SRWLock;
          if ( *(_DWORD *)a4 < (int)SRWLock )
            v35 = *(_DWORD *)a4;
          *(_DWORD *)a4 = v35;
          v36 = HIDWORD(SRWLock);
          if ( *((_DWORD *)a4 + 1) < SHIDWORD(SRWLock) )
            v36 = *((_DWORD *)a4 + 1);
          *((_DWORD *)a4 + 1) = v36;
        }
      }
    }
    v23 = 0;
    goto LABEL_74;
  }
  SRWLock = v41;
  v22 = CWinRTApplicationView::AdjustSizeForChrome(this, (struct tagSIZE *)&SRWLock, a2);
  v23 = v22;
  if ( v22 >= 0 )
  {
    v25 = (int)SRWLock;
    if ( a3->cx > (int)SRWLock )
      v25 = a3->cx;
    a3->cx = v25;
    v26 = HIDWORD(SRWLock);
    if ( a3->cy > SHIDWORD(SRWLock) )
      v26 = a3->cy;
    a3->cy = v26;
    v18 = HIDWORD(v39);
    v19 = v39;
    goto LABEL_37;
  }
  v24 = 424LL;
LABEL_66:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v24,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v22);
LABEL_74:
  v37 = v43[0];
  if ( v43[0] )
  {
    v43[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return v23;
}
