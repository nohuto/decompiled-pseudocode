/*
 * XREFs of ?get_AppUserModelId@Win32BackedViewHostItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800E27E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall Win32BackedViewHostItem::get_AppUserModelId(Win32BackedViewHostItem *this, HSTRING *a2)
{
  HSTRING v2; // rcx
  HRESULT v4; // ebx
  __int64 v5; // rdx
  HRESULT v7; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (HSTRING)*((_QWORD *)this + 12);
  if ( v2 )
  {
    v4 = WindowsDuplicateString(v2, a2);
    if ( v4 < 0 )
    {
      v5 = 51LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  else
  {
    string = 0LL;
    v7 = WindowsCreateStringReference(L"Win32BackedItem!App", 0x13u, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      JUMPOUT(0x1800E2887LL);
    }
    v4 = WindowsDuplicateString(string, a2);
    if ( v4 < 0 )
    {
      v5 = 56LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
