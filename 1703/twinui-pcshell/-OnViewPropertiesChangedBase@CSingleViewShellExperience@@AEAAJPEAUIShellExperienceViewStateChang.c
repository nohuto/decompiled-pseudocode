/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801818D0
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180180F38 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180181FD4 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  HRESULT v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  __int64 v15; // rbx
  _QWORD *v16; // r15
  HRESULT v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // r10d
  int v21; // r9d
  unsigned int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  int v29; // [rsp+40h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v30 = -2LL;
  v26[0] = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, _QWORD *))(*(_QWORD *)a2 + 72LL))(
         a2,
         v26);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x225,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_5;
  }
  if ( !v26[0] )
  {
    v4 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x227,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80004005LL);
LABEL_5:
    v5 = v26[0];
    if ( v26[0] )
    {
      v26[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v6 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v26[0];
  if ( v6 )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v27 = 0LL;
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
         *((_QWORD *)this + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v27);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v28 = 0LL;
    v29 = 0;
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 12) = 0;
    v8 = v27;
    v9 = RoVariant::operator&((__int64)&v28, v26);
    string = 0LL;
    v10 = WindowsCreateStringReference(L"desiredSize", 0xBu, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, string, v9 + 1);
    v12 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x233,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v11);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v26);
    v13 = -2147467261;
    if ( v12 >= 0 )
    {
      if ( this == (CSingleViewShellExperience *)-44LL )
      {
        v14 = -2147467261;
      }
      else
      {
        v26[0] = 0LL;
        *(_QWORD *)((char *)this + 44) = 0LL;
        if ( v29 == 7 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 192LL))(v28, (char *)this + 44);
        }
        else
        {
          v14 = -2147316576;
          if ( v29 < 0 )
            v14 = v29;
        }
      }
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x235,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v14);
    }
    *((_BYTE *)this + 52) = 0;
    v15 = v27;
    v16 = RoVariant::operator&((__int64)&v28, v26);
    string = 0LL;
    v17 = WindowsCreateStringReference(L"fullScreen", 0xAu, &hstringHeader, &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    v18 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v15 + 48LL))(v15, string, v16 + 1);
    v19 = v18;
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x239,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v18);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v26);
    if ( v19 >= 0 )
    {
      if ( this != (CSingleViewShellExperience *)-52LL )
      {
        *((_BYTE *)this + 52) = 0;
        if ( v29 == 7 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 144LL))(v28, (char *)this + 52);
        }
        else
        {
          v13 = -2147316576;
          if ( v29 < 0 )
            v13 = v29;
        }
      }
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x23B,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v13);
    }
    (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
      *((_QWORD *)this + 11),
      this);
    if ( !*((_DWORD *)this + 10) && *((_QWORD *)this + 3) )
    {
      *((_DWORD *)this + 10) = 1;
      v20 = *((_DWORD *)this + 16);
      v21 = *((_DWORD *)this + 17);
      v22 = v21 & 1 | 2;
      if ( (v21 & 2) == 0 )
        v22 = *((_DWORD *)this + 17) & 1;
      v23 = v22 | 4;
      if ( (v21 & 4) == 0 )
        v23 = v22;
      *((_QWORD *)this + 8) = 0LL;
      if ( v20 == 1 )
        CSingleViewShellExperience::ShowViewAsync(this, v23);
    }
    v4 = 0;
    if ( v28 && ((v29 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v28 + 16LL))();
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x22C,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v4;
}
