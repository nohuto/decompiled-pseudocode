/*
 * XREFs of ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1800C49A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800032F0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C12A4 (-StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C13D0 (-ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManage.c)
 *     ?ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C1450 (-ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemet.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1800C44F8 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1800C8168 (--$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickCon.c)
 *     ??$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@4@AEAW4ContactCardTabKind@674@AEAI@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAX$$QEA_NAEAM111AEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@5@AEAW4ContactCardTabKind@785@AEAI@Z @ 0x1800C821C (--$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@.c)
 *     ??$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x1800C8380 (--$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@Q.c)
 *     ??$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x1800C8464 (--$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCa.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  float *v16; // r15
  _QWORD *v17; // r14
  CQuickConnectExperienceManager *v18; // rcx
  int v19; // eax
  unsigned int LastErrorFailHr; // ebx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  float *v26; // rbx
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
  _QWORD v40[4]; // [rsp+98h] [rbp-70h] BYREF
  int v41; // [rsp+B8h] [rbp-50h]
  int *v42; // [rsp+C0h] [rbp-48h]
  int *v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+D0h] [rbp-38h] BYREF
  char v45; // [rsp+D4h] [rbp-34h]
  int v46; // [rsp+F8h] [rbp-10h] BYREF
  const char *v47; // [rsp+100h] [rbp-8h]
  __int64 v48; // [rsp+108h] [rbp+0h]
  char v49; // [rsp+110h] [rbp+8h]
  __int64 v50; // [rsp+118h] [rbp+10h]
  _BYTE v51[144]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v52; // [rsp+1B0h] [rbp+A8h]
  __int64 v53; // [rsp+1B8h] [rbp+B0h]
  __int64 v54; // [rsp+1C0h] [rbp+B8h]
  __int64 v55; // [rsp+1C8h] [rbp+C0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  *(_QWORD *)&v39[4] = -2LL;
  v40[1] = 0LL;
  v40[2] = v40;
  v40[3] = 0LL;
  v41 = 0;
  v42 = &v46;
  v43 = &v44;
  v44 = 0;
  v45 = 0;
  v49 = 0;
  v46 = 0;
  v47 = "ExperienceManager_ShowContactCard";
  v48 = 0LL;
  v13 = 1;
  v50 = 1LL;
  v52 = 0LL;
  v53 = 0LL;
  memset(v51, 0, sizeof(v51));
  v54 = 0LL;
  v55 = 0LL;
  v40[0] = &QuickConnectTelemetry::ExperienceManager_ShowContactCard::`vftable';
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::StartActivity((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v40);
  if ( *a2 == *(_QWORD *)&GUID_NULL.Data1 && a2[1] == *(_QWORD *)GUID_NULL.Data4 )
  {
    v14 = 399LL;
LABEL_10:
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80070057LL);
LABEL_44:
    LastErrorFailHr = v13;
    goto LABEL_45;
  }
  if ( !a3 )
  {
    v14 = 400LL;
    goto LABEL_10;
  }
  if ( !a4 )
  {
    v14 = 401LL;
    goto LABEL_10;
  }
  if ( !a7 )
  {
    v14 = 402LL;
    goto LABEL_10;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Guid<_GUID &>(v40, a2);
  if ( *(_QWORD *)(a1 + 272) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(a1 + 280) != *(_QWORD *)GUID_NULL.Data4 )
  {
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v40);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
    goto LABEL_44;
  }
  *(_OWORD *)(a1 + 272) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 264) = a3;
  if ( *(_QWORD *)(a1 + 296) != a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v15 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 296) = a4;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *(_BYTE *)(a1 + 332) = a9;
  v16 = (float *)(a1 + 312);
  *(_OWORD *)(a1 + 312) = *a5;
  *(_DWORD *)(a1 + 328) = a6;
  v17 = (_QWORD *)(a1 + 304);
  v18 = *(CQuickConnectExperienceManager **)(a1 + 304);
  if ( v18 )
  {
    *v17 = 0LL;
    (*(void (__fastcall **)(CQuickConnectExperienceManager *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = CQuickConnectExperienceManager::CopyContactCardOptions(
          v18,
          a7,
          (struct Windows::ApplicationModel::Contacts::IContactCardOptions **)(a1 + 304));
  LastErrorFailHr = v19;
  if ( v19 < 0 )
  {
    v21 = 427LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_45;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v17 + 48LL))(*v17, v39);
  LastErrorFailHr = v19;
  if ( v19 < 0 )
  {
    v21 = 430LL;
    goto LABEL_24;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v17 + 64LL))(*v17, v38);
  LastErrorFailHr = v19;
  if ( v19 < 0 )
  {
    v21 = 433LL;
    goto LABEL_24;
  }
  v35 = 0;
  v37 = 0LL;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v17)(*v17, &GUID_8f271ba0_d74b_4cc6_9f53_1b0eb5d1273c, &v37) >= 0 )
  {
    v34 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, &v34);
    LastErrorFailHr = v22;
    if ( v22 < 0 )
    {
      v23 = 443LL;
      goto LABEL_30;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v35);
    LastErrorFailHr = v22;
    if ( v22 < 0 )
    {
      v23 = 444LL;
LABEL_30:
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
      goto LABEL_41;
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
  Point.x = (int)*v16;
  Point.y = (int)*v26;
  if ( ClientToScreen(*(HWND *)(a1 + 264), &Point) )
  {
    *v16 = (float)Point.x;
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
LABEL_41:
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
