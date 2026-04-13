/*
 * XREFs of ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18008866C
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800880B0 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180034944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  _WORD *v6; // rax
  char v7; // r15
  __int64 v8; // r12
  const WCHAR *v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *StringRawBuffer; // rdx
  __int64 v14; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v17; // [rsp+28h] [rbp-48h] BYREF
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  _BYTE v21[24]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v20 = -2LL;
  v5 = 0LL;
  a3[2] = 0LL;
  if ( a3[3] < 8uLL )
    v6 = a3;
  else
    v6 = (_WORD *)*a3;
  *v6 = 0;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = 0;
  v17 = L"PackageFullName";
  v8 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, &v17) + 24);
  v9 = 0LL;
  v19 = 0LL;
  v16[0] = 0;
  if ( a1 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 64LL))(a1, v8, v16);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( v16[0] )
    {
      v17 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, const WCHAR **))(*(_QWORD *)a1 + 48LL))(a1, v8, &v17);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x23,
          (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      v9 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v17 + 8LL))(v17);
        v9 = v17;
      }
      v19 = v9;
      if ( v9 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  v22 = 0LL;
  if ( v16[0] )
  {
    v12 = (*(__int64 (__fastcall **)(const WCHAR *, HSTRING *))(*(_QWORD *)v9 + 152LL))(v9, &string);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v7 = 1;
  }
  if ( v9 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7 )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    if ( *(_WORD *)StringRawBuffer )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)&StringRawBuffer[2 * v14] );
      v5 = v14;
    }
    std::wstring::assign(a3, StringRawBuffer, v5);
    LOBYTE(v5) = 1;
  }
  WindowsDeleteString(string);
  return v5;
}
