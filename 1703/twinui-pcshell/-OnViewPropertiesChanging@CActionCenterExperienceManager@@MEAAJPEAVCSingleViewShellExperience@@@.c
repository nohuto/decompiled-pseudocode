/*
 * XREFs of ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092D5C (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092D94 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009335C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009461C (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CActionCenterExperienceManager::OnViewPropertiesChanging(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  HSTRING_HEADER *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  HSTRING_HEADER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  _QWORD *v15; // rbx
  HSTRING_HEADER *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  HSTRING_HEADER *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  HSTRING_HEADER *v24; // rax
  __int64 v25; // rcx
  float *v26; // rdi
  int v27; // ebx
  HMONITOR v28; // r8
  HMONITOR v29; // r8
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  HSTRING_HEADER *v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // eax
  ExperienceManagerUtils **v37; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v38; // rdx
  __int64 v39; // rcx
  int v41[2]; // [rsp+28h] [rbp-89h] BYREF
  __int64 v42; // [rsp+30h] [rbp-81h] BYREF
  _QWORD v43[2]; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-69h] BYREF
  __int64 v45; // [rsp+50h] [rbp-61h] BYREF
  int v46; // [rsp+58h] [rbp-59h]
  __int64 v47; // [rsp+60h] [rbp-51h] BYREF
  int v48; // [rsp+68h] [rbp-49h]
  __int64 v49; // [rsp+70h] [rbp-41h] BYREF
  int v50; // [rsp+78h] [rbp-39h]
  __int64 v51; // [rsp+80h] [rbp-31h] BYREF
  int v52; // [rsp+88h] [rbp-29h]
  __int64 v53; // [rsp+90h] [rbp-21h] BYREF
  int v54; // [rsp+98h] [rbp-19h]
  __int64 v55; // [rsp+A0h] [rbp-11h] BYREF
  int v56; // [rsp+A8h] [rbp-9h]
  __int64 v57; // [rsp+B0h] [rbp-1h]
  HSTRING_HEADER v58; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v59; // [rsp+D0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v57 = -2LL;
  v42 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v42);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x505,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_94;
  }
  v55 = 0LL;
  v56 = 0;
  v5 = v42;
  v6 = RoVariant::operator&((__int64)&v55, v43);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)&off_1801BD018);
  v4 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v5 + 48LL))(
         v5,
         v7[1].Reserved.Reserved1,
         v6 + 1);
  v59 = 0LL;
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v43);
  if ( v4 >= 0 )
  {
    v44 = 0;
    if ( v56 != 7 )
    {
      v4 = -2147316576;
      if ( v56 < 0 )
        v4 = v56;
      goto LABEL_10;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v55 + 88LL))(v55, &v44);
    v9 = v44;
    if ( v4 < 0 )
    {
LABEL_10:
      v8 = 1291LL;
      goto LABEL_11;
    }
    v45 = 0LL;
    v46 = 0;
    v10 = v42;
    v11 = RoVariant::operator&((__int64)&v45, v43);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)&off_1801BD008);
    v4 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v10 + 48LL))(
           v10,
           v12[1].Reserved.Reserved1,
           v11 + 1);
    v59 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v43);
    if ( v4 < 0 )
    {
      v13 = 1295LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_88:
      if ( v45 && ((v46 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v45 + 16LL))();
      goto LABEL_91;
    }
    if ( v45 )
    {
      WindowsDeleteString(*((HSTRING *)this + 41));
      *((_QWORD *)this + 41) = 0LL;
      if ( v46 != 7 )
      {
        v4 = -2147316576;
        if ( v46 < 0 )
          v4 = v46;
        goto LABEL_20;
      }
      v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 152LL))(v45, (char *)this + 328);
      if ( v4 < 0 )
      {
LABEL_20:
        v13 = 1298LL;
        goto LABEL_21;
      }
    }
    v53 = 0LL;
    v54 = 0;
    v14 = v42;
    v15 = RoVariant::operator&((__int64)&v53, v43);
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)&off_1801BCFF8);
    LOBYTE(v15) = (*(int (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v14 + 48LL))(
                    v14,
                    v16[1].Reserved.Reserved1,
                    v15 + 1) >= 0;
    v59 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v43);
    if ( (_BYTE)v15 )
    {
      v17 = v53;
      if ( v53 )
      {
        if ( this == (CActionCenterExperienceManager *)-336LL )
        {
          v4 = -2147467261;
          goto LABEL_31;
        }
        *((_BYTE *)this + 336) = 0;
        if ( v54 != 7 )
        {
          v4 = -2147316576;
          if ( v54 < 0 )
            v4 = v54;
          goto LABEL_31;
        }
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 144LL))(v17);
        if ( v4 < 0 )
        {
LABEL_31:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x51A,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
LABEL_85:
          if ( v53 && ((v54 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v53 + 16LL))();
          goto LABEL_88;
        }
      }
    }
    v51 = 0LL;
    v52 = 0;
    v18 = v42;
    v19 = RoVariant::operator&((__int64)&v51, v43);
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)&off_1801BD000);
    LOBYTE(v19) = (*(int (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    v20[1].Reserved.Reserved1,
                    v19 + 1) >= 0;
    v59 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v43);
    if ( (_BYTE)v19 )
    {
      v21 = v51;
      if ( v51 )
      {
        if ( this == (CActionCenterExperienceManager *)-337LL )
        {
          v4 = -2147467261;
          goto LABEL_41;
        }
        *((_BYTE *)this + 337) = 0;
        if ( v52 != 7 )
        {
          v4 = -2147316576;
          if ( v52 < 0 )
            v4 = v52;
          goto LABEL_41;
        }
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 144LL))(v21);
        if ( v4 < 0 )
        {
LABEL_41:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x523,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
LABEL_82:
          if ( v51 && ((v52 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v51 + 16LL))();
          goto LABEL_85;
        }
      }
    }
    v49 = 0LL;
    v50 = 0;
    v22 = v42;
    v23 = RoVariant::operator&((__int64)&v49, v43);
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)&off_1801BCFF0);
    LOBYTE(v23) = (*(int (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v22 + 48LL))(
                    v22,
                    v24[1].Reserved.Reserved1,
                    v23 + 1) >= 0;
    v59 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v43);
    if ( (_BYTE)v23 )
    {
      v25 = v49;
      if ( v49 )
      {
        v26 = (float *)((char *)this + 340);
        if ( this == (CActionCenterExperienceManager *)-340LL )
        {
          v4 = -2147467261;
          goto LABEL_51;
        }
        v43[0] = 0LL;
        *(_QWORD *)v26 = 0LL;
        if ( v50 != 7 )
        {
          v4 = -2147316576;
          if ( v50 < 0 )
            v4 = v50;
          goto LABEL_51;
        }
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 184LL))(v25, (char *)this + 340);
        if ( v4 < 0 )
        {
LABEL_51:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x52C,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
LABEL_79:
          if ( v49 && ((v50 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v49 + 16LL))();
          goto LABEL_82;
        }
        v43[0] = 0LL;
        v27 = (unsigned int)MonitorFromPoint(0LL, 1u);
        *v26 = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                             (ExperienceManagerUtils *)(unsigned int)(int)*v26,
                             v27,
                             v28);
        *((float *)this + 86) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                              (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 86),
                                              v27,
                                              v29);
      }
    }
    v47 = 0LL;
    v48 = 0;
    LOBYTE(v41[0]) = 0;
    v30 = v42;
    v31 = RoVariant::operator&((__int64)&v47, v43);
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)&off_1801BD010);
    LOBYTE(v31) = (*(int (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v30 + 48LL))(
                    v30,
                    v32[1].Reserved.Reserved1,
                    v31 + 1) >= 0;
    v59 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v43);
    if ( (_BYTE)v31 && v47 )
    {
      LOBYTE(v41[0]) = 0;
      if ( v48 != 7 )
      {
        v4 = -2147316576;
        if ( v48 < 0 )
          v4 = v48;
        goto LABEL_60;
      }
      v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v47 + 144LL))(v47, v41);
      if ( v4 < 0 )
      {
LABEL_60:
        v33 = (unsigned int)v4;
        v34 = 1339LL;
        goto LABEL_74;
      }
    }
    v35 = *((_DWORD *)this + 58);
    if ( v35 == v9
      || v35 > 1
      || v9 > 1
      || (v36 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)((char *)this - 96)),
          v4 = v36,
          v36 >= 0) )
    {
      v37 = (ExperienceManagerUtils **)((char *)this - 96);
      v36 = CActionCenterExperienceManager::PositionView(v37, v9);
      v4 = v36;
      if ( v36 >= 0 )
      {
        v36 = CActionCenterExperienceManager::TransitionToState((__int64)v37, v9);
        v4 = v36;
        if ( v36 >= 0 )
        {
          if ( !LOBYTE(v41[0]) || (v36 = CActionCenterExperienceManager::ReturnFocus(v37, v38), v4 = v36, v36 >= 0) )
          {
            v4 = 0;
            goto LABEL_76;
          }
          v34 = 1356LL;
        }
        else
        {
          v34 = 1351LL;
        }
      }
      else
      {
        v34 = 1350LL;
      }
    }
    else
    {
      v34 = 1347LL;
    }
    v33 = (unsigned int)v36;
LABEL_74:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v34,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v33);
LABEL_76:
    if ( v47 && ((v48 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v47 + 16LL))();
    goto LABEL_79;
  }
  v8 = 1288LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_91:
  if ( v55 && ((v56 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v55 + 16LL))();
LABEL_94:
  v39 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  return (unsigned int)v4;
}
