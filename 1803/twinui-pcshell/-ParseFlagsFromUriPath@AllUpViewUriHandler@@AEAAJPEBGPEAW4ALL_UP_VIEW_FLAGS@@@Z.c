/*
 * XREFs of ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x18026A1A0
 * Callers:
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x18026A010 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AllUpViewUriHandler::ParseFlagsFromUriPath(
        AllUpViewUriHandler *this,
        const unsigned __int16 *a2,
        enum ALL_UP_VIEW_FLAGS *a3)
{
  __int64 v4; // rbx
  int ActivationFactory; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  const WCHAR *v18; // rax
  HSTRING v20; // [rsp+30h] [rbp-19h] BYREF
  HSTRING string; // [rsp+38h] [rbp-11h] BYREF
  __int64 v22; // [rsp+40h] [rbp-9h] BYREF
  __int64 v23; // [rsp+48h] [rbp-1h] BYREF
  __int64 v24; // [rsp+50h] [rbp+7h] BYREF
  const WCHAR *v25; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+17h] BYREF
  __int64 v27; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v25 = a2;
  *(_DWORD *)a3 = 0;
  v24 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = v27;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  ActivationFactory = RoGetActivationFactory(v4, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v24);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v7 = v24;
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v25);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, *(_QWORD *)(v8 + 24), &v22);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v9);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_19;
    }
    v10 = v22;
    WindowsDeleteString(0LL);
    string = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 136LL))(v10, &string);
    v6 = v11;
    if ( v11 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ms-taskswitcher", -1, 1) == 2 )
      {
        v15 = v22;
        v23 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 120LL))(v15, &v23);
        v6 = v16;
        if ( v16 >= 0 )
        {
          v17 = v23;
          WindowsDeleteString(0LL);
          v20 = 0LL;
          v27 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"invoketo", 9u, 8u);
          if ( (*(int (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v17 + 48LL))(v17, v27, &v20) >= 0 )
          {
            v18 = WindowsGetStringRawBuffer(v20, 0LL);
            if ( CompareStringOrdinal(v18, -1, L"timeline", -1, 1) == 2 )
              *(_DWORD *)a3 |= 2u;
          }
          v6 = 0;
          WindowsDeleteString(v20);
          v20 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
            (const char *)(unsigned int)v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        goto LABEL_17;
      }
      v6 = -2147418113;
      v13 = 85LL;
      v12 = 2147549183LL;
    }
    else
    {
      v12 = (unsigned int)v11;
      v13 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)v12);
LABEL_17:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  return v6;
}
