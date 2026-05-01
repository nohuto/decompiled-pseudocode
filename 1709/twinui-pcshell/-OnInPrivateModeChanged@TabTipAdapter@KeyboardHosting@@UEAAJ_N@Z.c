/*
 * XREFs of ?OnInPrivateModeChanged@TabTipAdapter@KeyboardHosting@@UEAAJ_N@Z @ 0x1801A4F80
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1801A2DC4 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInPrivateModeChanged(
        KeyboardHosting::TabTipAdapter *this,
        char a2)
{
  HRESULT v3; // eax
  HSTRING v4; // rax
  char v5; // dl
  HSTRING v6; // rcx
  HSTRING v7; // rbx
  HRESULT v8; // eax
  HRESULT v9; // eax
  int v10; // eax
  HSTRING_HEADER v12; // [rsp+30h] [rbp-11h] BYREF
  HSTRING v13; // [rsp+48h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+68h] [rbp+27h] BYREF
  HSTRING_HEADER v16; // [rsp+70h] [rbp+2Fh] BYREF
  HSTRING v17; // [rsp+88h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( a2 )
  {
    string = 0LL;
    v3 = WindowsCreateStringReference(L"true", 4u, &hstringHeader, &string);
    if ( v3 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
      __debugbreak();
    }
    v4 = string;
    v5 = 1;
    v6 = v13;
    v7 = string;
  }
  else
  {
    v13 = 0LL;
    v8 = WindowsCreateStringReference(L"false", 5u, &v12, &v13);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      __debugbreak();
    }
    v6 = v13;
    v5 = 2;
    v4 = string;
    v7 = v13;
  }
  v17 = 0LL;
  if ( (v5 & 2) != 0 )
    v6 = 0LL;
  v13 = v6;
  if ( (v5 & 1) != 0 )
    v4 = 0LL;
  string = v4;
  v9 = WindowsCreateStringReference(L"IsInPrivateMode", 0xFu, &v16, &v17);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    JUMPOUT(0x1801A50C1LL);
  }
  v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(
          (KeyboardHosting::TabTipAdapter *)((char *)this - 8),
          v17,
          v7);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
