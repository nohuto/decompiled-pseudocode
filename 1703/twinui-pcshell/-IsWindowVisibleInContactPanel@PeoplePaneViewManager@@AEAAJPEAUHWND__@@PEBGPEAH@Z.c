/*
 * XREFs of ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1800EA854
 * Callers:
 *     ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1800EABC0 (-IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel(
        PeoplePaneViewManager *this,
        HWND a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v6; // ebx
  HRESULT v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  HRESULT v14; // eax
  HSTRING v15; // rcx
  const WCHAR *StringRawBuffer; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v23; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-41h] BYREF
  __int64 v25; // [rsp+48h] [rbp-39h] BYREF
  __int64 v26; // [rsp+50h] [rbp-31h] BYREF
  __int64 v27; // [rsp+58h] [rbp-29h] BYREF
  __int64 v28; // [rsp+60h] [rbp-21h] BYREF
  int v29; // [rsp+68h] [rbp-19h]
  HSTRING v30[3]; // [rsp+70h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v30[2] = (HSTRING)-2LL;
  *a4 = 0;
  v27 = 0LL;
  v6 = CoreQueryWindowService(
         a2,
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v27);
  if ( v6 < 0 )
    goto LABEL_47;
  v24 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v24);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v26 = 0LL;
    v9 = RoCreatePropertySetSerializer(&v26);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 848LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_43:
      v19 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_45;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v26 + 56LL))(v26, v24, v27);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 849LL;
      goto LABEL_10;
    }
    v25 = 0LL;
    v11 = (**v24)(v24, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v25);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x354,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_41:
      v18 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_43;
    }
    v28 = 0LL;
    v29 = 0;
    v12 = v25;
    v13 = RoVariant::operator&((__int64)&v28, v30);
    string = 0LL;
    v14 = WindowsCreateStringReference(L"currentAppId", 0xCu, &hstringHeader, &string);
    if ( v14 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v12 + 48LL))(v12, string, v13 + 1);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v30);
    if ( v6 < 0 )
      goto LABEL_38;
    v6 = v29;
    if ( v29 < 0 )
      goto LABEL_38;
    if ( v29 )
    {
      if ( v29 == 1 || v29 == 3 )
      {
        v23 = 13;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 48LL))(v28, &v23);
        if ( v6 < 0 )
          goto LABEL_25;
      }
    }
    else
    {
      v23 = 0;
    }
    v6 = 0;
LABEL_25:
    if ( v6 >= 0 )
    {
      if ( v23 == 12 )
      {
        v30[0] = 0LL;
        WindowsDeleteString(0LL);
        v15 = 0LL;
        v30[0] = 0LL;
        if ( v29 != 7 )
        {
          v6 = -2147316576;
          if ( v29 < 0 )
            v6 = v29;
          goto LABEL_32;
        }
        v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 152LL))(v28, v30);
        v15 = v30[0];
        if ( v6 < 0 )
        {
LABEL_32:
          WindowsDeleteString(v15);
          goto LABEL_38;
        }
        if ( v30[0] )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(v30[0], 0LL);
          v17 = CompareStringOrdinal(StringRawBuffer, -1, a3, -1, 1);
          v15 = v30[0];
          if ( v17 == 2 )
            *a4 = 1;
        }
        WindowsDeleteString(v15);
      }
      v6 = 0;
    }
LABEL_38:
    if ( v28 && ((v29 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v28 + 16LL))();
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x34C,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_45:
  v20 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_47:
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)v6;
}
