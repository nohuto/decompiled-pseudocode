/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801D0F8C
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801D0594 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D177C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 *v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  HRESULT v9; // eax
  int v10; // eax
  int v11; // r14d
  int v12; // edi
  int v13; // eax
  __int64 v14; // r14
  HRESULT v15; // eax
  int v16; // eax
  int v17; // r14d
  __int64 v18; // rdx
  int v19; // r10d
  int v20; // r9d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 *v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  int v28; // [rsp+40h] [rbp-40h]
  __int64 v29; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v29 = -2LL;
  v24 = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 **))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v24);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x226,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_5;
  }
  if ( !v24 )
  {
    v4 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x228,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80004005LL);
LABEL_5:
    v5 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
    }
    return v4;
  }
  v6 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v24;
  if ( v6 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v26 = 0LL;
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
         *((_QWORD *)this + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v26);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v27 = 0LL;
    v28 = 0;
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 12) = 0;
    v8 = v26;
    v24 = &v27;
    v25 = 0LL;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"desiredSize", 0xBu, &hstringHeader, &string);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, string, &v25);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x234,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v24);
    v12 = -2147467261;
    if ( v11 >= 0 )
    {
      if ( this == (CSingleViewShellExperience *)-44LL )
      {
        v13 = -2147467261;
      }
      else
      {
        v24 = 0LL;
        *(_QWORD *)((char *)this + 44) = 0LL;
        if ( v28 == 7 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 192LL))(v27, (char *)this + 44);
        }
        else
        {
          v13 = -2147316576;
          if ( v28 < 0 )
            v13 = v28;
        }
      }
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x236,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v13);
    }
    *((_BYTE *)this + 52) = 0;
    v14 = v26;
    v24 = &v27;
    v25 = 0LL;
    string = 0LL;
    v15 = WindowsCreateStringReference(L"fullScreen", 0xAu, &hstringHeader, &string);
    if ( v15 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, string, &v25);
    v17 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v16);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v24);
    if ( v17 >= 0 )
    {
      if ( this != (CSingleViewShellExperience *)-52LL )
      {
        *((_BYTE *)this + 52) = 0;
        if ( v28 == 7 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 144LL))(v27, (char *)this + 52);
        }
        else
        {
          v12 = -2147316576;
          if ( v28 < 0 )
            v12 = v28;
        }
      }
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x23C,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v12);
    }
    (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
      *((_QWORD *)this + 11),
      this);
    if ( !*((_DWORD *)this + 10) && *((_QWORD *)this + 3) )
    {
      *((_DWORD *)this + 10) = 1;
      v19 = *((_DWORD *)this + 16);
      v20 = *((_DWORD *)this + 17);
      v21 = v20 & 1 | 2;
      if ( (v20 & 2) == 0 )
        v21 = *((_DWORD *)this + 17) & 1;
      v18 = v21 | 4;
      if ( (v20 & 4) == 0 )
        v18 = v21;
      *((_QWORD *)this + 8) = 0LL;
      if ( v19 == 1 )
        CSingleViewShellExperience::ShowViewAsync(this, v18);
    }
    v4 = 0;
    if ( v27 && ((v28 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 16LL))(v27, v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x22D,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  v22 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v4;
}
