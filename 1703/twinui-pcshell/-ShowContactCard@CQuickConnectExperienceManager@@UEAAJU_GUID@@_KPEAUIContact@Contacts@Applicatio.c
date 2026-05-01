/*
 * XREFs of ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1800ABE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A8784 (-ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManage.c)
 *     ?ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A8804 (-ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemet.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB6EC (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1800AB9A0 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AEE48 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$Start@$$V@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@SA?AV01@XZ @ 0x1800AF1FC (--$Start@$$V@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@SA-AV01@XZ.c)
 *     ??$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1800AF2A8 (--$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickCon.c)
 *     ??$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@4@AEAW4ContactCardTabKind@674@AEAI@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAX$$QEA_NAEAM111AEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@5@AEAW4ContactCardTabKind@785@AEAI@Z @ 0x1800AF35C (--$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@.c)
 *     ??$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x1800AF4C0 (--$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@Q.c)
 *     ??$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x1800AF5A4 (--$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCa.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B0F78 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQuickConnectExperienceManager::ShowContactCard(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a7,
        float a8,
        char a9)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int LastErrorFailHr; // ebx
  __int64 v16; // rcx
  float *v17; // r14
  _QWORD *v18; // rsi
  CQuickConnectExperienceManager *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  float *v26; // rsi
  float *v27; // rax
  __int64 v28; // rcx
  wil::details *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  int v35; // [rsp+68h] [rbp-A0h] BYREF
  struct tagPOINT Point; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v38[4]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v39[20]; // [rsp+84h] [rbp-84h] BYREF
  _QWORD v40[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  *(_QWORD *)&v39[4] = -2LL;
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::Start<>((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v40);
  v13 = *a2 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *a2 == *(_QWORD *)&GUID_NULL.Data1 )
    v13 = a2[1] - *(_QWORD *)GUID_NULL.Data4;
  if ( !v13 )
  {
    v14 = 399LL;
LABEL_11:
    LastErrorFailHr = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_45;
  }
  if ( !a3 )
  {
    v14 = 400LL;
    goto LABEL_11;
  }
  if ( !a4 )
  {
    v14 = 401LL;
    goto LABEL_11;
  }
  if ( !a7 )
  {
    v14 = 402LL;
    goto LABEL_11;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Guid<_GUID &>(v40, a2);
  if ( *(_QWORD *)(a1 + 272) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(a1 + 280) != *(_QWORD *)GUID_NULL.Data4 )
  {
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v40);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
    LastErrorFailHr = 1;
    goto LABEL_45;
  }
  *(_OWORD *)(a1 + 272) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 264) = a3;
  if ( *(_QWORD *)(a1 + 296) != a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v16 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 296) = a4;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  *(_BYTE *)(a1 + 332) = a9;
  v17 = (float *)(a1 + 312);
  *(_OWORD *)(a1 + 312) = *a5;
  *(_DWORD *)(a1 + 328) = a6;
  v18 = (_QWORD *)(a1 + 304);
  v19 = *(CQuickConnectExperienceManager **)(a1 + 304);
  if ( v19 )
  {
    *v18 = 0LL;
    (*(void (__fastcall **)(CQuickConnectExperienceManager *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = CQuickConnectExperienceManager::CopyContactCardOptions(
          v19,
          a7,
          (struct Windows::ApplicationModel::Contacts::IContactCardOptions **)(a1 + 304));
  LastErrorFailHr = v20;
  if ( v20 < 0 )
  {
    v21 = 427LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_45;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v18 + 48LL))(*v18, v39);
  LastErrorFailHr = v20;
  if ( v20 < 0 )
  {
    v21 = 430LL;
    goto LABEL_25;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v18 + 64LL))(*v18, v38);
  LastErrorFailHr = v20;
  if ( v20 < 0 )
  {
    v21 = 433LL;
    goto LABEL_25;
  }
  v35 = 0;
  v37 = 0LL;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v18)(*v18, &GUID_8f271ba0_d74b_4cc6_9f53_1b0eb5d1273c, &v37) >= 0 )
  {
    v34 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, &v34);
    LastErrorFailHr = v22;
    if ( v22 < 0 )
    {
      v23 = 443LL;
      goto LABEL_31;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v35);
    LastErrorFailHr = v22;
    if ( v22 < 0 )
    {
      v23 = 444LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v23,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
      v24 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      goto LABEL_42;
    }
    v25 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  LOBYTE(v33) = *(_BYTE *)(a1 + 332) != 0;
  v26 = (float *)(a1 + 316);
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Params<bool,float &,float &,float &,float &,enum Windows::UI::Popups::Placement &,enum Windows::ApplicationModel::Contacts::ContactCardHeaderKind &,enum Windows::ApplicationModel::Contacts::ContactCardTabKind &,unsigned int &>(
    (unsigned int)v40,
    (unsigned int)&v33,
    a1 + 312,
    a1 + 316,
    a1 + 320,
    a1 + 324,
    a1 + 328,
    (__int64)v39,
    (__int64)v38,
    (__int64)&v35);
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
    (unsigned int)v40,
    a1 + 312,
    a1 + 316,
    a1 + 320,
    a1 + 324);
  Point.x = (int)*v17;
  Point.y = (int)*v26;
  if ( ClientToScreen(*(HWND *)(a1 + 264), &Point) )
  {
    *v17 = (float)Point.x;
    *v26 = (float)Point.y;
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Normalized<float &,float &,float &,float &>(
      (unsigned int)v40,
      a1 + 312,
      a1 + 316,
      a1 + 320,
      a1 + 324);
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Showing((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v40);
    v30 = CSingleViewShellExperience::Show(a1 + 48, 4LL);
    LastErrorFailHr = v30;
    if ( v30 >= 0 )
    {
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
      LastErrorFailHr = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
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
LABEL_42:
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
LABEL_45:
  v40[0] = &QuickConnectTelemetry::ExperienceManager_ShowContactCard::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v40);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v40);
  return LastErrorFailHr;
}
