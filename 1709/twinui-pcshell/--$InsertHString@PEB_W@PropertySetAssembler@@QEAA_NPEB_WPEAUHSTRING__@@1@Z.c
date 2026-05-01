/*
 * XREFs of ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x1801BD3E0
 * Callers:
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x1801BD02C (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x1801BC3FC (-EnsurePropertySet@PropertySetAssembler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall PropertySetAssembler::InsertHString<wchar_t const *>(
        PropertySetAssembler *this,
        __int64 a2,
        HSTRING a3)
{
  HRESULT v5; // eax
  __int64 *v6; // rbx
  HRESULT v7; // eax
  HSTRING v8; // rdi
  __int64 v9; // rcx
  int ActivationFactory; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  HRESULT v15; // eax
  HSTRING v16; // rbx
  bool v17; // di
  int v18; // eax
  __int64 v19; // rcx
  _BYTE v21[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  INT32 result; // [rsp+40h] [rbp-40h] BYREF
  HSTRING v24[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v24[1] = (HSTRING)-2LL;
  v22 = 0LL;
  result = 0;
  v5 = WindowsCompareStringOrdinal(a3, 0LL, &result);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x5B,
      (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( result )
  {
    v6 = (__int64 *)((char *)this + 8);
    if ( !*((_QWORD *)this + 1) )
    {
      string = 0LL;
      v7 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
      if ( v7 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      v8 = string;
      v9 = *v6;
      if ( *v6 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ActivationFactory = RoGetActivationFactory(v8, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, (char *)this + 8);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xE7,
          (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
          (const char *)(unsigned int)ActivationFactory);
    }
    v11 = *v6;
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v11 + 144LL))(v11, a3, &v22);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
  }
  v14 = v22;
  v24[0] = 0LL;
  WindowsDeleteString(0LL);
  v24[0] = 0LL;
  v15 = WindowsCreateString(L"LogoPath", 8u, v24);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = v24[0];
  v17 = 0;
  if ( v14 )
  {
    PropertySetAssembler::EnsurePropertySet(this);
    v21[0] = 0;
    v18 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64, _BYTE *))(**(_QWORD **)this + 80LL))(
            *(_QWORD *)this,
            v16,
            v14,
            v21);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x41,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    v17 = v21[0] != 0;
    v16 = v24[0];
  }
  WindowsDeleteString(v16);
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v17;
}
