/*
 * XREFs of ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x18017D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180093D10 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180178EA0 (--$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@-$ComPtr@UIContactCardOptions@Co.c)
 *     ??$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1801796B0 (--$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickCon.c)
 *     ??$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x180179764 (--$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCa.c)
 *     ??$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@4@AEAW4ContactCardTabKind@674@AEAI@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAX$$QEA_NAEAM111AEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@5@AEAW4ContactCardTabKind@785@AEAI@Z @ 0x180179840 (--$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@.c)
 *     ??$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x1801799A0 (--$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@Q.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017A154 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18017A154.c)
 *     ??1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A624 (--1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x18017AF74 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x18017B890 (-ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemet.c)
 *     ?ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x18017B90C (-ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManage.c)
 *     ?StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x18017DE64 (-StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017DFFC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQuickConnectExperienceManager::ShowContactCard(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a7,
        float a8,
        char a9)
{
  __int64 v13; // rax
  unsigned int LastErrorFailHr; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  float *v18; // r14
  _QWORD *v19; // rsi
  CQuickConnectExperienceManager *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  float *v26; // rsi
  float *v27; // rax
  __int64 v28; // rcx
  wil::details *v29; // rcx
  int v30; // eax
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  int v34; // [rsp+68h] [rbp-A0h] BYREF
  struct tagPOINT Point; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v38[3]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v39[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v38[1] = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v39,
    (__int64)"ExperienceManager_ShowContactCard");
  v39[0] = &QuickConnectTelemetry::ExperienceManager_ShowContactCard::`vftable';
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::StartActivity((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v39);
  v13 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NULL.Data1 )
    v13 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v13 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 399LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)v15);
    goto LABEL_40;
  }
  if ( !a3 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 400LL;
    goto LABEL_22;
  }
  if ( !a4 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 401LL;
    goto LABEL_22;
  }
  if ( !a7 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 402LL;
    goto LABEL_22;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Guid<_GUID &>(
    (__int64)v39,
    (__int128 *)a2);
  v17 = *(_QWORD *)(a1 + 272) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v17 )
    v17 = *(_QWORD *)(a1 + 280) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v17 )
  {
    *(_OWORD *)(a1 + 272) = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 264) = a3;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 296), a4);
    *(_BYTE *)(a1 + 332) = a9;
    v18 = (float *)(a1 + 312);
    *(_OWORD *)(a1 + 312) = *a5;
    *(_DWORD *)(a1 + 328) = a6;
    v19 = (_QWORD *)(a1 + 304);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 304));
    v21 = CQuickConnectExperienceManager::CopyContactCardOptions(
            v20,
            a7,
            (struct Windows::ApplicationModel::Contacts::IContactCardOptions **)(a1 + 304));
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 427LL;
LABEL_21:
      v15 = (unsigned int)v21;
      goto LABEL_22;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v19 + 48LL))(*v19, &v37);
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 430LL;
      goto LABEL_21;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v19 + 64LL))(*v19, &v36);
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 433LL;
      goto LABEL_21;
    }
    v34 = 0;
    v38[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
                (_QWORD *)(a1 + 304),
                v38) >= 0 )
    {
      v33 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38[0] + 48LL))(v38[0], &v33);
      LastErrorFailHr = v22;
      if ( v22 < 0 )
      {
        v23 = 443LL;
        goto LABEL_28;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 56LL))(v33, &v34);
      LastErrorFailHr = v22;
      if ( v22 < 0 )
      {
        v23 = 444LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
        v24 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        goto LABEL_39;
      }
      v25 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    LOBYTE(v32) = *(_BYTE *)(a1 + 332) != 0;
    v26 = (float *)(a1 + 316);
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Params<bool,float &,float &,float &,float &,enum Windows::UI::Popups::Placement &,enum Windows::ApplicationModel::Contacts::ContactCardHeaderKind &,enum Windows::ApplicationModel::Contacts::ContactCardTabKind &,unsigned int &>(
      (__int64)v39,
      (__int64)&v32,
      a1 + 312,
      a1 + 316,
      a1 + 320,
      a1 + 324,
      (int *)(a1 + 328),
      &v37,
      &v36,
      (__int64)&v34);
    v27 = (float *)(a1 + 312);
    v28 = 4LL;
    do
    {
      *v27 = (float)(a8 / 96.0) * *v27;
      ++v27;
      --v28;
    }
    while ( v28 );
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Scaled<float &,float &,float &,float &>(
      (__int64)v39,
      a1 + 312,
      a1 + 316,
      a1 + 320,
      a1 + 324);
    Point.x = (int)*v18;
    Point.y = (int)*v26;
    if ( ClientToScreen(*(HWND *)(a1 + 264), &Point) )
    {
      *v18 = (float)Point.x;
      *v26 = (float)Point.y;
      QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Normalized<float &,float &,float &,float &>(
        (__int64)v39,
        a1 + 312,
        a1 + 316,
        a1 + 320,
        a1 + 324);
      QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Showing((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v39);
      v30 = CSingleViewShellExperience::Show(
              a1 + 48,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
      LastErrorFailHr = v30;
      if ( v30 >= 0 )
      {
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v39);
        LastErrorFailHr = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v30);
      }
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v29);
    }
LABEL_39:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v38);
    goto LABEL_40;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v39);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v39);
  LastErrorFailHr = 1;
LABEL_40:
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::~ExperienceManager_ShowContactCard((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v39);
  return LastErrorFailHr;
}
