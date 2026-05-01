/*
 * XREFs of ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B4AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1800B4194 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800B4D54 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  HRESULT v6; // eax
  int v7; // ebx
  char v8; // dl
  __int64 v9; // rbx
  HRESULT v10; // eax
  int v11; // ebx
  __int64 v12; // rbx
  HRESULT v13; // eax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  int v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24 = -2LL;
  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v19 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v19);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v22 = 0LL;
    v23 = 0;
    v5 = v19;
    v20 = &v22;
    v21 = 0LL;
    string = 0LL;
    v6 = WindowsCreateStringReference(L"FirstLoadComplete", 0x11u, &hstringHeader, &string);
    if ( v6 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, string, &v21);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v20);
    if ( v7 >= 0 )
    {
      v8 = 0;
LABEL_13:
      v4 = CShoulderTapExperienceManager::Reactivate((CShoulderTapExperienceManager *)((char *)this - 32), v8);
LABEL_19:
      if ( v22 && ((v23 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v22 + 16LL))();
      goto LABEL_22;
    }
    v9 = v19;
    v20 = &v22;
    v21 = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"PositionShoulderTap", 0x13u, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, string, &v21);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v20);
    if ( v11 < 0 )
    {
      v12 = v19;
      v20 = &v22;
      v21 = 0LL;
      string = 0LL;
      v13 = WindowsCreateStringReference(L"AnimationComplete", 0x11u, &hstringHeader, &string);
      if ( v13 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
      v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, string, &v21);
      string = 0LL;
      RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v20);
      if ( v14 >= 0 )
      {
        v15 = CSingleViewShellExperience::Hide((char *)this + 8, 0LL);
        v4 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x104,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_19;
        }
      }
    }
    else if ( (int)CShoulderTapExperienceManager::PositionShoulderTap((CShoulderTapExperienceManager *)((char *)this - 32)) < 0 )
    {
      v8 = 1;
      goto LABEL_13;
    }
    if ( v22 && ((v23 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v22 + 16LL))();
    v18 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xED,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_22:
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v4;
}
