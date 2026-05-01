/*
 * XREFs of ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A75D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z @ 0x1800A7118 (-Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800A7970 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18018300C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  char v3; // di
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // r14
  HRESULT v8; // eax
  bool v9; // bl
  __int64 v10; // rbx
  _QWORD *v11; // r14
  HRESULT v12; // eax
  bool v13; // bl
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // r14
  HRESULT v19; // eax
  int v20; // eax
  char v21; // bl
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  __int64 v25; // [rsp+60h] [rbp-21h] BYREF
  int v26; // [rsp+68h] [rbp-19h]
  int v27; // [rsp+70h] [rbp-11h]
  _QWORD v28[3]; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v28[2] = -2LL;
  v3 = 0;
  v27 = 0;
  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v24 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v25 = 0LL;
    v26 = 0;
    v6 = v24;
    v7 = RoVariant::operator&((__int64)&v25, v28);
    string = 0LL;
    v8 = WindowsCreateStringReference(L"DesiredSize", 0xBu, &hstringHeader, &string);
    if ( v8 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    v9 = (*(int (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v6 + 48LL))(v6, string, v7 + 1) >= 0;
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v28);
    if ( v9
      && (int)CShoulderTapExperienceManager::PositionShoulderTap((CShoulderTapExperienceManager *)((char *)this - 32)) < 0 )
    {
      v5 = CShoulderTapExperienceManager::Reactivate(
             (CShoulderTapExperienceManager *)((char *)this - 32),
             *((HSTRING *)this + 29),
             *((HSTRING *)this + 30),
             *((HSTRING *)this + 31),
             *((_DWORD *)this + 64),
             *((_DWORD *)this + 65),
             *((HSTRING *)this + 33),
             *((HSTRING *)this + 34),
             1);
LABEL_14:
      if ( v25 && ((v26 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
      goto LABEL_17;
    }
    v10 = v24;
    v11 = RoVariant::operator&((__int64)&v25, v28);
    string = 0LL;
    v12 = WindowsCreateStringReference(L"AnimationComplete", 0x11u, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = (*(int (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, string, v11 + 1) >= 0;
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v28);
    if ( v13 )
    {
      v14 = CSingleViewShellExperience::Hide((char *)this + 8, 0LL);
      v5 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xD7,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_14;
      }
    }
    if ( *((_BYTE *)this + 224) )
      goto LABEL_24;
    v17 = v24;
    v18 = RoVariant::operator&((__int64)&v25, v28);
    string = 0LL;
    v19 = WindowsCreateStringReference(L"FirstLoadComplete", 0x11u, &hstringHeader, &string);
    if ( v19 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
    v3 = 3;
    v27 = 3;
    v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v17 + 48LL))(v17, string, v18 + 1);
    v21 = 1;
    if ( v20 < 0 )
LABEL_24:
      v21 = 0;
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      string = 0LL;
    }
    if ( (v3 & 1) != 0 )
      RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v28);
    if ( v21 )
    {
      *((_BYTE *)this + 224) = 1;
      v22 = CShoulderTapExperienceManager::Reactivate(
              (CShoulderTapExperienceManager *)((char *)this - 32),
              *((HSTRING *)this + 29),
              *((HSTRING *)this + 30),
              *((HSTRING *)this + 31),
              *((_DWORD *)this + 64),
              *((_DWORD *)this + 65),
              *((HSTRING *)this + 33),
              *((HSTRING *)this + 34),
              0);
      if ( v22 < 0 )
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
    }
    if ( v25 && ((v26 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
    v23 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xB2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_17:
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v5;
}
