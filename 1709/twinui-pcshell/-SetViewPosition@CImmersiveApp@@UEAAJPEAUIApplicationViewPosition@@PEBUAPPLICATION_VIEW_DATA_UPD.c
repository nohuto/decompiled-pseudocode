/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800564F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180025CF4 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800526FC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z @ 0x180058858 (-_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005962C (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180059A00 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180059AC8 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0001@@W4GHOST_STATUS@@@Z @ 0x18005AC44 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005AD2C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005ADE0 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B270 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005B94C (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18005DCE8 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005FCC0 (-StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@@Z @ 0x1800629EC (-PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
        int a10)
{
  char v13; // r15
  int v14; // eax
  int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // r12
  volatile signed __int32 *v18; // rcx
  struct IApplicationPresentationLayer *v19; // rdx
  LPCWSTR *v20; // rcx
  unsigned int v21; // r12d
  bool v22; // r12
  bool v23; // r15
  unsigned int v24; // ecx
  __int16 v25; // r14
  unsigned int v26; // esi
  bool v27; // al
  unsigned __int8 v28; // r12
  unsigned int v29; // r15d
  bool IsApplicationWindowGhost; // al
  __int64 v31; // rcx
  __int64 v32; // r15
  int v33; // eax
  int updated; // eax
  __int64 v35; // rcx
  bool v36; // dl
  char *Ptr; // rax
  __int64 v38; // rcx
  struct IImmersiveMonitor *v39; // rcx
  char v41; // [rsp+38h] [rbp-D0h]
  char v42; // [rsp+39h] [rbp-CFh]
  unsigned int v43; // [rsp+3Ch] [rbp-CCh]
  _OWORD *v44; // [rsp+40h] [rbp-C8h]
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  struct IImmersiveMonitor *v47; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v50; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v51; // [rsp+80h] [rbp-88h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  _OWORD v53[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-58h]
  _QWORD v55[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v56; // [rsp+D8h] [rbp-30h]
  int *v57; // [rsp+E0h] [rbp-28h]
  int *v58; // [rsp+E8h] [rbp-20h]
  int v59; // [rsp+F0h] [rbp-18h] BYREF
  char v60; // [rsp+F4h] [rbp-14h]
  int v61; // [rsp+118h] [rbp+10h] BYREF
  const char *v62; // [rsp+120h] [rbp+18h]
  __int64 v63; // [rsp+128h] [rbp+20h]
  char v64; // [rsp+130h] [rbp+28h]
  __int64 v65; // [rsp+138h] [rbp+30h]
  _BYTE v66[144]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  __int64 v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  __int64 v70; // [rsp+1E8h] [rbp+E0h]
  _BYTE v71[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v72; // [rsp+200h] [rbp+F8h]

  v52 = -2LL;
  v44 = (_OWORD *)a3;
  v51 = a8;
  v55[1] = 0LL;
  v55[2] = v55;
  v55[3] = 0LL;
  v56 = 0;
  v57 = &v61;
  v58 = &v59;
  v59 = 0;
  v60 = 0;
  v64 = 0;
  v61 = 0;
  v62 = "SetViewPosition";
  v63 = 0LL;
  v13 = 1;
  v65 = 1LL;
  v67 = 0LL;
  v68 = 0LL;
  memset(v66, 0, sizeof(v66));
  v69 = 0LL;
  v70 = 0LL;
  v55[0] = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  CImmersiveAppTelemetry::SetViewPosition::StartActivity(
    (CImmersiveAppTelemetry::SetViewPosition *)v55,
    *(const unsigned __int16 **)(a1 + 432));
  if ( a3 )
  {
    v50 = *(__m128i *)a3;
    v53[0] = v50;
    v53[1] = *(_OWORD *)(a3 + 16);
    v54 = *(_QWORD *)(a3 + 32);
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 344LL))(a1, v71);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v50, 8));
    if ( v14 >= 0 )
      v15 = v72;
    DWORD2(v53[0]) = v15;
    v44 = v53;
  }
  if ( (a5 & 0x600) == 1536
    || (a5 & 0x48) == 72
    || (a5 & 0xFFFFF000) != 0
    || (a5 & 0x180) == 384
    || a9 && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (~(a5 >> 1) & 1) != 0 )
  {
    v21 = -2147024809;
    goto LABEL_142;
  }
  if ( !*(_BYTE *)(a1 - 112 + 688) && ((*(_BYTE *)(a1 - 112 + 536) & 1) != 0 || (*(_DWORD *)(a1 - 112 + 536) & 8) != 0)
    || (a5 & 3) == 0 )
  {
    v13 = 0;
  }
  v48 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v16 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v50);
    v17 = *v16;
    *v16 = 0LL;
    a4 = v17;
    v48 = v17;
    v18 = (volatile signed __int32 *)v50.m128i_i64[0];
    if ( v50.m128i_i64[0] )
    {
      v50.m128i_i64[0] = 0LL;
      if ( _InterlockedExchangeAdd(v18 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 136LL))(v18, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      a4 = v48;
    }
    if ( v17 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  if ( a9 == 2 || !v13 )
  {
    if ( (a5 & 1) != 0 )
    {
      v19 = *(struct IApplicationPresentationLayer **)(a1 + 288);
      v20 = (LPCWSTR *)(a1 + 472);
      *(_DWORD *)(a1 + 472) &= ~a9;
    }
    else
    {
      if ( (a5 & 2) == 0 )
        goto LABEL_35;
      v19 = *(struct IApplicationPresentationLayer **)(a1 + 288);
      v20 = (LPCWSTR *)(a1 + 472);
      *(_DWORD *)(a1 + 472) |= a9;
    }
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v20, v19);
  }
LABEL_35:
  v21 = v13 != 0 ? 0x8007139F : 0;
  v43 = v21;
  if ( !v13 )
  {
    if ( !*(_BYTE *)(a1 + 336) || *(_BYTE *)(a1 + 337) )
    {
      v41 = 0;
      if ( (a5 & 2) != 0 )
      {
        v42 = 1;
        if ( a9 )
        {
LABEL_42:
          v22 = a6 == 1
             && !(unsigned int)SHIsSameObject(
                                 (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a1 & -(__int64)(a1 != 112)),
                                 (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[7].Ptr);
          v23 = *(_DWORD *)(a1 + 676) != *(_DWORD *)(a1 + 660)
             || *(_DWORD *)(a1 + 680) != *(_DWORD *)(a1 + 664)
             || *(_DWORD *)(a1 + 684) != *(_DWORD *)(a1 + 668)
             || *(_DWORD *)(a1 + 688) != *(_DWORD *)(a1 + 672)
             || *(_DWORD *)(a1 + 708) != *(_DWORD *)(a1 + 692)
             || *(_DWORD *)(a1 + 712) != *(_DWORD *)(a1 + 696)
             || *(_DWORD *)(a1 + 716) != *(_DWORD *)(a1 + 700)
             || *(_DWORD *)(a1 + 720) != *(_DWORD *)(a1 + 704);
          *(_QWORD *)(a1 + 676) = *(_QWORD *)(a1 + 660);
          *(_QWORD *)(a1 + 684) = *(_QWORD *)(a1 + 668);
          *(_QWORD *)(a1 + 708) = *(_QWORD *)(a1 + 692);
          *(_QWORD *)(a1 + 716) = *(_QWORD *)(a1 + 700);
          if ( v23 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 288) + 264LL))(
              *(_QWORD *)(a1 + 288),
              *(_QWORD *)(a1 + 660),
              *(_QWORD *)(a1 + 668));
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 288) + 272LL))(
              *(_QWORD *)(a1 + 288),
              *(_QWORD *)(a1 + 692),
              *(_QWORD *)(a1 + 700));
          }
          v24 = ((v41 != 0) - 3) & a5;
          if ( (v24 & 1) != 0 && *(_DWORD *)(a1 + 472) )
            v24 &= ~1u;
          if ( v41 )
          {
            if ( (~(v24 >> 1) & 1) == 0 )
              goto LABEL_66;
          }
          else if ( (v24 & 1) == 0 )
          {
LABEL_66:
            v25 = v24 & 0xFFFB;
            if ( !v22 )
              v25 = v24;
            v26 = 0;
            if ( (v25 & 0x40) != 0 )
            {
              v26 = 8;
            }
            else if ( v23 )
            {
              v26 = 17;
            }
            else if ( a2 || v44 )
            {
              if ( v22 )
              {
                v26 = 2;
              }
              else if ( (v25 & 1) != 0 )
              {
                v26 = 1;
              }
              else
              {
                v27 = v41 && (v25 & 2) != 0 && v44 && (*((_BYTE *)v44 + 36) & 2) != 0;
                if ( (v25 & 8) != 0 || v27 || (v26 = 1, !v41) )
                  v26 = 2;
              }
            }
            else if ( v22 )
            {
              v26 = 4;
            }
            v47 = 0LL;
            (*(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)a1 + 464LL))(a1, &v47);
            if ( (v26 & 1) == 0
              || CReportWindowVisibilityChange::IsReportingEnabled(
                   (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                   v47,
                   (struct IImmersiveApplicationInternal *)(a1 & -(__int64)(a1 != 112))) )
            {
              v28 = 0;
            }
            else
            {
              v28 = 1;
              CReportWindowVisibilityChange::PushForcedGlobalReportingState(
                &CApplicationManagerUtility::g_pIAMGlobals[1],
                1LL);
            }
            if ( *(_QWORD *)(a1 + 312) && (v25 & 1) != 0 )
            {
              v29 = 0;
              if ( a6 == 1
                && !(unsigned int)SHIsSameObject(
                                    (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a1 & -(__int64)(a1 != 112)),
                                    (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[7].Ptr) )
              {
                v29 = 2;
              }
              IsApplicationWindowGhost = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
              v31 = a1 + 152;
              if ( IsApplicationWindowGhost )
                CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v31, v29);
              else
                CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v31, 0LL, v29);
            }
            v32 = a1 - 112;
            if ( v51 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v32 + 400) + 136LL))(*(_QWORD *)(v32 + 400), *v51);
            if ( a4 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v32 + 400) + 144LL))(*(_QWORD *)(v32 + 400), a4);
            if ( (v25 & 3) != 0 )
            {
              if ( (v25 & 1) != 0 )
              {
                CImmersiveApp::_SetPos_ShowApplication(a1 - 112, a2, v44, v26, v28);
              }
              else
              {
                v33 = 0;
                if ( (v25 & 4) != 0 )
                  v33 = v28 + 1;
                CImmersiveApp::_SetPos_HideApplication(a1 - 112, a2, v44, v26, v33);
              }
              v26 = 0;
            }
            if ( v42 && *(_BYTE *)(a1 + 336) )
            {
              *(_BYTE *)(a1 + 336) = 0;
              CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152));
            }
            if ( (v25 & 0x800) != 0 )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 600LL))(a1, 0LL);
            if ( (v26 & 3) != 0 )
            {
              updated = CImmersiveApp::_UpdateApplication(a1 - 112, a2, v44, v26);
              if ( v28 )
              {
                if ( updated == 1 )
                {
                  v46 = 0LL;
                  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v46);
                  CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)(a1 - 112), 9LL);
                  CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)(a1 - 112), 10LL);
                  v35 = v46;
                  if ( v46 )
                  {
                    v46 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                  }
                }
              }
            }
            if ( (v26 & 8) != 0 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 288) + 104LL))(*(_QWORD *)(a1 + 288), a2);
            if ( a10 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 224LL))(*(_QWORD *)(a1 + 288));
            if ( (*(_BYTE *)(a1 + 424) & 1) != 0
              && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152))
              && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
            {
              CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
                (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152),
                v36);
            }
            if ( v28 )
            {
              v49 = 0LL;
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v49);
              Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
              if ( Ptr )
                CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = Ptr - 1;
              v38 = v49;
              if ( v49 )
              {
                v49 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
              }
            }
            v39 = v47;
            if ( v47 )
            {
              v47 = 0LL;
              (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v39 + 16LL))(v39);
            }
            v21 = v43;
            goto LABEL_139;
          }
          LOWORD(v24) = v24 & 0xFFF3;
          goto LABEL_66;
        }
      }
    }
    else
    {
      v41 = 1;
    }
    v42 = 0;
    goto LABEL_42;
  }
LABEL_139:
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_142:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v55, v21);
  v55[0] = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v55);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v55);
  return v21;
}
