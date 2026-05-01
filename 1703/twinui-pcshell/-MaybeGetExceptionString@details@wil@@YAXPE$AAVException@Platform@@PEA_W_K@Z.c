/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18011D3C8
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x18019F65E (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$5.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$9 @ 0x18019F770 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$9.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002A54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x18011D37C (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     WindowsGetStringRawBuffer_0 @ 0x180194F96 (WindowsGetStringRawBuffer_0.c)
 *     WindowsDeleteString_0 @ 0x1801952DE (WindowsDeleteString_0.c)
 *     WindowsDuplicateString_0 @ 0x180195382 (WindowsDuplicateString_0.c)
 */

// Hidden C++ exception states: #wind=6
HRESULT __fastcall wil::details::MaybeGetExceptionString(__int64 a1, wchar_t *a2, __int64 a3)
{
  __int64 v5; // rsi
  HSTRING v6; // rax
  HSTRING v7; // rbx
  HRESULT v8; // eax
  HSTRING v9; // rdi
  const wchar_t *v10; // rbx
  const wchar_t *StringRawBuffer_0; // rax
  HSTRING v12; // rcx
  HSTRING v13; // rax
  HSTRING v14; // rsi
  HRESULT v15; // eax
  HSTRING v16; // rbx
  HRESULT v17; // eax
  HRESULT v18; // eax
  HSTRING v19; // rdi
  PCWSTR v20; // rax
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  HSTRING v23[3]; // [rsp+28h] [rbp-18h] BYREF
  HSTRING newString; // [rsp+70h] [rbp+30h] BYREF
  HSTRING v25; // [rsp+88h] [rbp+48h] BYREF

  v23[1] = (HSTRING)-2LL;
  v5 = *(_QWORD *)(a1 - 8);
  v6 = (HSTRING)Platform::Exception::Message::get();
  v7 = v6;
  v25 = v6;
  if ( v6 )
  {
    v8 = WindowsDuplicateString_0(v6, &newString);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = newString;
    v25 = newString;
  }
  else
  {
    v9 = 0LL;
    v25 = 0LL;
  }
  WindowsDeleteString_0(v7);
  v10 = *(const wchar_t **)(v5 + 8);
  if ( v9 )
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v9, 0LL);
  else
    StringRawBuffer_0 = 0LL;
  if ( v10 && *v10 && StringRawBuffer_0 && !wcsstr(StringRawBuffer_0, v10) )
  {
    v13 = Platform::String::String(v12, v10);
    v14 = v13;
    v23[0] = v13;
    if ( v13 )
    {
      v15 = WindowsDuplicateString_0(v13, &string);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      v16 = string;
    }
    else
    {
      v16 = 0LL;
    }
    WindowsDeleteString_0(v14);
  }
  else if ( v9 )
  {
    v17 = WindowsDuplicateString_0(v9, v23);
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    v16 = v23[0];
  }
  else
  {
    v16 = 0LL;
  }
  WindowsDeleteString_0(v9);
  newString = v16;
  if ( v16 )
  {
    v18 = WindowsDuplicateString_0(v16, &v25);
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    v19 = v25;
    newString = v25;
  }
  else
  {
    v19 = 0LL;
    newString = 0LL;
  }
  WindowsDeleteString_0(v16);
  if ( v19 )
    v20 = WindowsGetStringRawBuffer_0(v19, 0LL);
  else
    v20 = L"(null Message)";
  StringCchPrintfW(a2, a3, L"Platform::Exception^: %ws", v20);
  return WindowsDeleteString_0(v19);
}
