/*
 * XREFs of ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800988C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097450 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x1800990F8 (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB760 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CActionCenterExperienceManager::OnViewPropertiesChanging(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  float *v21; // r14
  int v22; // ebx
  HMONITOR v23; // r8
  HMONITOR v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  ExperienceManagerUtils **v31; // rsi
  int v32; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v33; // rdx
  __int64 v34; // rcx
  int v36[2]; // [rsp+28h] [rbp-89h] BYREF
  __int64 *v37; // [rsp+30h] [rbp-81h] BYREF
  __int64 v38; // [rsp+38h] [rbp-79h] BYREF
  __int64 v39; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-69h] BYREF
  __int64 v41; // [rsp+50h] [rbp-61h] BYREF
  int v42; // [rsp+58h] [rbp-59h]
  __int64 v43; // [rsp+60h] [rbp-51h] BYREF
  int v44; // [rsp+68h] [rbp-49h]
  __int64 v45; // [rsp+70h] [rbp-41h] BYREF
  int v46; // [rsp+78h] [rbp-39h]
  __int64 v47; // [rsp+80h] [rbp-31h] BYREF
  int v48; // [rsp+88h] [rbp-29h]
  __int64 v49; // [rsp+90h] [rbp-21h] BYREF
  int v50; // [rsp+98h] [rbp-19h]
  __int64 v51; // [rsp+A0h] [rbp-11h] BYREF
  int v52; // [rsp+A8h] [rbp-9h]
  __int64 v53; // [rsp+B0h] [rbp-1h]
  _BYTE v54[24]; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v55; // [rsp+D0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v53 = -2LL;
  v39 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v39);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5AA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_96;
  }
  v51 = 0LL;
  v52 = 0;
  v5 = v39;
  v37 = &v51;
  v38 = 0LL;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v54, (const WCHAR **)&off_1802146E0);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)(v6 + 24), &v38);
  v55 = 0LL;
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v37);
  if ( v4 >= 0 )
  {
    v40 = 0;
    if ( v52 != 7 )
    {
      v4 = -2147316576;
      if ( v52 < 0 )
        v4 = v52;
      goto LABEL_10;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v51 + 88LL))(v51, &v40);
    v8 = v40;
    if ( v4 < 0 )
    {
LABEL_10:
      v7 = 1456LL;
      goto LABEL_11;
    }
    v41 = 0LL;
    v42 = 0;
    v9 = v39;
    v37 = &v41;
    v38 = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v54, (const WCHAR **)&off_1802146D8);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, *(_QWORD *)(v10 + 24), &v38);
    v55 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v37);
    if ( v4 < 0 )
    {
      v11 = 1460LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_90:
      if ( v41 && ((v42 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v41 + 16LL))();
      goto LABEL_93;
    }
    if ( v41 )
    {
      WindowsDeleteString(*((HSTRING *)this + 51));
      *((_QWORD *)this + 51) = 0LL;
      if ( v42 != 7 )
      {
        v4 = -2147316576;
        if ( v42 < 0 )
          v4 = v42;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v41 + 152LL))(v41, (char *)this + 408);
      if ( v4 < 0 )
      {
LABEL_20:
        v11 = 1463LL;
        goto LABEL_21;
      }
    }
    v49 = 0LL;
    v50 = 0;
    v12 = v39;
    v37 = &v49;
    v38 = 0LL;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v54, (const WCHAR **)&off_1802146C8);
    LODWORD(v12) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL))(
                     v12,
                     *(_QWORD *)(v13 + 24),
                     &v38);
    v55 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v37);
    if ( (int)v12 >= 0 )
    {
      v14 = v49;
      if ( v49 )
      {
        if ( this == (CActionCenterExperienceManager *)-416LL )
        {
          v4 = -2147467261;
          goto LABEL_31;
        }
        *((_BYTE *)this + 416) = 0;
        if ( v50 != 7 )
        {
          v4 = -2147316576;
          if ( v50 < 0 )
            v4 = v50;
          goto LABEL_31;
        }
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 144LL))(v14);
        if ( v4 < 0 )
        {
LABEL_31:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x5BF,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
LABEL_87:
          if ( v49 && ((v50 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v49 + 16LL))();
          goto LABEL_90;
        }
      }
    }
    *((_BYTE *)this + 417) = 0;
    v47 = 0LL;
    v48 = 0;
    v15 = v39;
    v37 = &v47;
    v38 = 0LL;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v54, (const WCHAR **)&off_1802146B0);
    LODWORD(v15) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL))(
                     v15,
                     *(_QWORD *)(v16 + 24),
                     &v38);
    v55 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v37);
    if ( (int)v15 >= 0 )
    {
      v17 = v47;
      if ( v47 )
      {
        if ( this == (CActionCenterExperienceManager *)-417LL )
        {
          v4 = -2147467261;
          goto LABEL_41;
        }
        *((_BYTE *)this + 417) = 0;
        if ( v48 != 7 )
        {
          v4 = -2147316576;
          if ( v48 < 0 )
            v4 = v48;
          goto LABEL_41;
        }
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 144LL))(v17, (char *)this + 417);
        if ( v4 < 0 )
        {
LABEL_41:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x5C9,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
LABEL_84:
          if ( v47 && ((v48 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v47 + 16LL))();
          goto LABEL_87;
        }
      }
    }
    v45 = 0LL;
    v46 = 0;
    v18 = v39;
    v37 = &v45;
    v38 = 0LL;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v54, (const WCHAR **)&off_1802146B8);
    LODWORD(v18) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 48LL))(
                     v18,
                     *(_QWORD *)(v19 + 24),
                     &v38);
    v55 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v37);
    if ( (int)v18 >= 0 )
    {
      v20 = v45;
      if ( v45 )
      {
        v21 = (float *)((char *)this + 420);
        if ( this == (CActionCenterExperienceManager *)-420LL )
        {
          v4 = -2147467261;
          goto LABEL_51;
        }
        v37 = 0LL;
        *(_QWORD *)v21 = 0LL;
        if ( v46 != 7 )
        {
          v4 = -2147316576;
          if ( v46 < 0 )
            v4 = v46;
          goto LABEL_51;
        }
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 184LL))(v20, (char *)this + 420);
        if ( v4 < 0 )
        {
LABEL_51:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x5D2,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
LABEL_81:
          if ( v45 && ((v46 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v45 + 16LL))();
          goto LABEL_84;
        }
        v37 = 0LL;
        v22 = (unsigned int)MonitorFromPoint(0LL, 1u);
        *v21 = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                             (ExperienceManagerUtils *)(unsigned int)(int)*v21,
                             v22,
                             v23);
        *((float *)this + 106) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                               (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 106),
                                               v22,
                                               v24);
      }
    }
    v43 = 0LL;
    v44 = 0;
    LOBYTE(v36[0]) = 0;
    v25 = v39;
    v37 = &v43;
    v38 = 0LL;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v54, (const WCHAR **)&off_1802146C0);
    LODWORD(v25) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 48LL))(
                     v25,
                     *(_QWORD *)(v26 + 24),
                     &v38);
    v55 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v37);
    if ( (int)v25 >= 0 && v43 )
    {
      LOBYTE(v36[0]) = 0;
      if ( v44 != 7 )
      {
        v4 = -2147316576;
        if ( v44 < 0 )
          v4 = v44;
        goto LABEL_60;
      }
      v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 144LL))(v43, v36);
      if ( v4 < 0 )
      {
LABEL_60:
        v27 = (unsigned int)v4;
        v28 = 1505LL;
        goto LABEL_76;
      }
    }
    v29 = *((_DWORD *)this + 58);
    if ( v29 != v8 && (v29 & 0xFFFFFFFA) == 0 && v29 != 5 && (v8 & 0xFFFFFFFA) == 0 && v8 != 5 )
    {
      v30 = CActionCenterExperienceManager::TransitionToState((__int64)this - 104, 2);
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5E9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v30);
    }
    v31 = (ExperienceManagerUtils **)((char *)this - 104);
    v32 = CActionCenterExperienceManager::PositionView(v31, v8);
    v4 = v32;
    if ( v32 >= 0 )
    {
      v32 = CActionCenterExperienceManager::TransitionToState((__int64)v31, v8);
      v4 = v32;
      if ( v32 >= 0 )
      {
        if ( !LOBYTE(v36[0]) || (v32 = CActionCenterExperienceManager::ReturnFocus(v31, v33), v4 = v32, v32 >= 0) )
        {
          v4 = 0;
          goto LABEL_78;
        }
        v28 = 1522LL;
      }
      else
      {
        v28 = 1517LL;
      }
    }
    else
    {
      v28 = 1516LL;
    }
    v27 = (unsigned int)v32;
LABEL_76:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v27);
LABEL_78:
    if ( v43 && ((v44 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v43 + 16LL))();
    goto LABEL_81;
  }
  v7 = 1453LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_93:
  if ( v51 && ((v52 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v51 + 16LL))();
LABEL_96:
  v34 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return (unsigned int)v4;
}
