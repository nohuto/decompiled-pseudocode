/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800178B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180025544 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180050450 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z @ 0x180056268 (-_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180057020 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180057394 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18005745C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@W4GHOST_STATUS@@@Z @ 0x180058584 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180058678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058724 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058B34 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800590F4 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$Start@AEAPEAG@SetViewPosition@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x18005B608 (--$Start@AEAPEAG@SetViewPosition@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18005B6C4 (--$Make@VApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicatio.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewTitlebarConfiguration@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EAB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewTitlebarConfiguration@@U-_ea_18005EAB0.c)
 *     ?PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@@Z @ 0x180060CFC (-PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::SetViewPosition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 v12; // rdx
  PVOID Ptr; // r8
  char v14; // r15
  __int64 *v15; // rax
  struct IApplicationPresentationLayer *v16; // rdx
  LPCWSTR *v17; // rcx
  unsigned int v18; // r12d
  char v19; // r15
  char v20; // r12
  unsigned int v21; // esi
  __int16 v22; // r14
  unsigned int v23; // esi
  char v24; // al
  char v25; // r12
  unsigned int v26; // r15d
  bool IsApplicationWindowGhost; // al
  __int64 v28; // rcx
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // r14
  int updated; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  struct IImmersiveMonitor *v35; // rcx
  int v37; // [rsp+28h] [rbp-E0h]
  char v38; // [rsp+38h] [rbp-D0h]
  char v39; // [rsp+39h] [rbp-CFh]
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  struct IImmersiveMonitor *v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h]
  __int64 v43; // [rsp+58h] [rbp-B0h]
  int v44; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v45; // [rsp+64h] [rbp-A4h]
  int v46; // [rsp+68h] [rbp-A0h]
  __int16 v47; // [rsp+6Ch] [rbp-9Ch]
  __int64 v48; // [rsp+78h] [rbp-90h]
  _QWORD *v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  int v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  int v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h]
  _QWORD v55[40]; // [rsp+B8h] [rbp-50h] BYREF

  v50 = -2LL;
  v43 = a3;
  v40 = a2;
  v49 = a8;
  CImmersiveAppTelemetry::SetViewPosition::Start<unsigned short * &>((CImmersiveAppTelemetry::SetViewPosition *)v55);
  v12 = 1536LL;
  if ( (a5 & 0x600) == 1536
    || (a5 & 0x48) == 72
    || (a5 & 0xFFFFF000) != 0
    || (a5 & 0x180) == 384
    || (Ptr = 0LL, a9) && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (~(a5 >> 1) & 1) != 0 )
  {
    v18 = -2147024809;
    goto LABEL_137;
  }
  if ( !*(_BYTE *)(a1 + 560) && ((*(_BYTE *)(a1 + 408) & 1) != 0 || (*(_DWORD *)(a1 + 408) & 8) != 0)
    || (v14 = 1, (a5 & 3) == 0) )
  {
    v14 = 0;
  }
  v48 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 8LL))(a4, 1536LL, 0LL);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v15 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration>(&v41, 1536LL, 0LL);
    a4 = *v15;
    Ptr = 0LL;
    *v15 = 0LL;
    v48 = a4;
    if ( v41 )
    {
      v41 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewTitlebarConfiguration,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    }
    if ( a4 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  if ( a9 == 2 || !v14 )
  {
    if ( (a5 & 1) != 0 )
    {
      v16 = *(struct IApplicationPresentationLayer **)(a1 + 272);
      v17 = (LPCWSTR *)(a1 + 456);
      *(_DWORD *)(a1 + 456) &= ~a9;
    }
    else
    {
      if ( (a5 & 2) == 0 )
        goto LABEL_28;
      v16 = *(struct IApplicationPresentationLayer **)(a1 + 272);
      v17 = (LPCWSTR *)(a1 + 456);
      *(_DWORD *)(a1 + 456) |= a9;
    }
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v17, v16);
  }
LABEL_28:
  v18 = v14 != 0 ? 0x8007139F : 0;
  LODWORD(v42) = v18;
  if ( !v14 )
  {
    v19 = 0;
    v51 = 0;
    v52 = 0LL;
    v53 = 0;
    v54 = 0LL;
    if ( !*(_BYTE *)(a1 + 320) || *(_BYTE *)(a1 + 321) )
    {
      v38 = 0;
      if ( (a5 & 2) != 0 )
      {
        v39 = 1;
        if ( a9 )
        {
LABEL_35:
          if ( a6 != 1
            || (v20 = 1,
                (unsigned int)SHIsSameObject(
                                (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a1 & -(__int64)(a1 != 88)),
                                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[7].Ptr)) )
          {
            v20 = 0;
          }
          if ( (`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
            wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetCachedFeatureEnabledState();
          v46 = 0;
          LOBYTE(v47) = 3;
          v44 = 0;
          v45 = v47;
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data,
            0x50A13Fu,
            (const struct FEATURE_LOGGED_TRAITS *)&v44,
            1,
            3);
          if ( *(_DWORD *)(a1 + 660) != *(_DWORD *)(a1 + 644)
            || *(_DWORD *)(a1 + 664) != *(_DWORD *)(a1 + 648)
            || *(_DWORD *)(a1 + 668) != *(_DWORD *)(a1 + 652)
            || *(_DWORD *)(a1 + 672) != *(_DWORD *)(a1 + 656)
            || *(_DWORD *)(a1 + 692) != *(_DWORD *)(a1 + 676)
            || *(_DWORD *)(a1 + 696) != *(_DWORD *)(a1 + 680)
            || *(_DWORD *)(a1 + 700) != *(_DWORD *)(a1 + 684)
            || *(_DWORD *)(a1 + 704) != *(_DWORD *)(a1 + 688) )
          {
            v19 = 1;
          }
          *(_QWORD *)(a1 + 660) = *(_QWORD *)(a1 + 644);
          *(_QWORD *)(a1 + 668) = *(_QWORD *)(a1 + 652);
          *(_QWORD *)(a1 + 692) = *(_QWORD *)(a1 + 676);
          *(_QWORD *)(a1 + 700) = *(_QWORD *)(a1 + 684);
          if ( v19 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 272) + 264LL))(
              *(_QWORD *)(a1 + 272),
              *(_QWORD *)(a1 + 644),
              *(_QWORD *)(a1 + 652));
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 272) + 272LL))(
              *(_QWORD *)(a1 + 272),
              *(_QWORD *)(a1 + 676),
              *(_QWORD *)(a1 + 684));
          }
          if ( v38 )
            v21 = a5 & 0xFFFFFFFE;
          else
            v21 = a5 & 0xFFFFFFFD;
          if ( (v21 & 1) != 0 && *(_DWORD *)(a1 + 456) )
            v21 &= ~1u;
          if ( v38 )
          {
            if ( (~(v21 >> 1) & 1) == 0 )
              goto LABEL_62;
          }
          else if ( (v21 & 1) == 0 )
          {
LABEL_62:
            v22 = v21 & 0xFFFB;
            if ( !v20 )
              v22 = v21;
            v23 = 0;
            if ( (v22 & 0x40) != 0 )
            {
              v23 = 8;
            }
            else if ( v19 )
            {
              v23 = 17;
            }
            else if ( v40 || v43 )
            {
              if ( v20 )
              {
                v23 = 2;
              }
              else if ( (v22 & 1) != 0 )
              {
                v23 = 1;
              }
              else
              {
                if ( !v38 || (v22 & 2) == 0 || !v43 || (v24 = 1, (*(_BYTE *)(v43 + 36) & 2) == 0) )
                  v24 = 0;
                if ( (v22 & 8) != 0 || v24 || (v23 = 1, !v38) )
                  v23 = 2;
              }
            }
            else if ( v20 )
            {
              v23 = v43 + 4;
            }
            v41 = 0LL;
            (*(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)a1 + 464LL))(a1, &v41);
            if ( (v23 & 1) == 0
              || CReportWindowVisibilityChange::IsReportingEnabled(
                   (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                   v41,
                   (struct IImmersiveApplicationInternal *)(a1 & -(__int64)(a1 != 88))) )
            {
              v25 = 0;
            }
            else
            {
              v25 = 1;
              CReportWindowVisibilityChange::PushForcedGlobalReportingState(
                &CApplicationManagerUtility::g_pIAMGlobals[1],
                1LL);
            }
            if ( *(_QWORD *)(a1 + 296) && (v22 & 1) != 0 )
            {
              v26 = 0;
              if ( a6 == 1
                && !(unsigned int)SHIsSameObject(
                                    (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a1 & -(__int64)(a1 != 88)),
                                    (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[7].Ptr) )
              {
                v26 = 2;
              }
              IsApplicationWindowGhost = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136));
              v28 = a1 + 136;
              if ( IsApplicationWindowGhost )
                CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v28, v26);
              else
                CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v28, 0LL, v26);
            }
            v29 = a1 - 88;
            if ( v49 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 360) + 136LL))(*(_QWORD *)(v29 + 360), *v49);
            if ( a4 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v29 + 360) + 144LL))(*(_QWORD *)(v29 + 360), a4);
            if ( (v22 & 3) != 0 )
            {
              if ( (v22 & 1) != 0 )
              {
                LOBYTE(v37) = v25;
                CImmersiveApp::_SetPos_ShowApplication(a1 - 88, v40, v43, v23, v37);
              }
              else
              {
                v30 = 0;
                if ( (v22 & 4) != 0 )
                  v30 = (v25 != 0) + 1;
                CImmersiveApp::_SetPos_HideApplication(a1 - 88, v40, v43, v23, v30);
              }
              v23 = 0;
            }
            if ( v39 && *(_BYTE *)(a1 + 320) )
            {
              *(_BYTE *)(a1 + 320) = 0;
              CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136));
            }
            if ( (v22 & 0x800) != 0 )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 600LL))(a1, 0LL);
            v31 = v40;
            if ( (v23 & 3) != 0 )
            {
              updated = CImmersiveApp::_UpdateApplication(a1 - 88, v40, v43, v23);
              if ( v25 )
              {
                if ( updated == 1 )
                {
                  v40 = 0LL;
                  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v40);
                  CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)(a1 - 88), 9LL);
                  CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)(a1 - 88), 10LL);
                  v33 = v40;
                  if ( v40 )
                  {
                    v40 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                  }
                }
              }
            }
            if ( (v23 & 8) != 0 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 272) + 104LL))(*(_QWORD *)(a1 + 272), v31);
            v12 = a10;
            if ( a10 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 224LL))(*(_QWORD *)(a1 + 272));
            if ( (*(_BYTE *)(a1 + 408) & 1) != 0
              && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136))
              && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136)) )
            {
              CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
                (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136),
                v12);
            }
            if ( v25 )
            {
              v40 = 0LL;
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v40);
              Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
              v12 = (__int64)Ptr - 1;
              if ( Ptr )
                --CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
              v34 = v40;
              if ( v40 )
              {
                v40 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
              }
            }
            v35 = v41;
            if ( v41 )
            {
              v41 = 0LL;
              (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v35 + 16LL))(v35);
            }
            v18 = v42;
            goto LABEL_134;
          }
          LOWORD(v21) = v21 & 0xFFF3;
          goto LABEL_62;
        }
      }
    }
    else
    {
      v38 = 1;
    }
    v39 = 0;
    goto LABEL_35;
  }
LABEL_134:
  if ( a4 )
    (*(void (__fastcall **)(__int64, __int64, PVOID))(*(_QWORD *)a4 + 16LL))(a4, v12, Ptr);
LABEL_137:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v55, v18);
  v55[0] = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v55);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v55);
  return v18;
}
