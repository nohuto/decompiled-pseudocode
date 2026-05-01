/*
 * XREFs of ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x18014893C
 * Callers:
 *     ??0XamlExplorerHost@@QE$AAA@XZ @ 0x180147890 (--0XamlExplorerHost@@QE$AAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 XamlExplorerHost::s_LoadResources(void)
{
  HRESULT v0; // eax
  int ActivationFactory; // eax
  unsigned int LastError; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  const char *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR Dst[264]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v16[1] = -2LL;
  v13 = 0LL;
  string = 0LL;
  v0 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Resources.Core.ResourceManager",
         0x37u,
         &hstringHeader,
         &string);
  if ( v0 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v0);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_1cc0fdfc_69ee_4e43_9901_47f12687baf7, &v13);
  LastError = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v16[0] = 0LL;
    v3 = (**v13)(v13, &GUID_7d9da47a_8bc7_49d3_97aa_f7db06049172, v16);
    LastError = v3;
    if ( v3 >= 0 )
    {
      v15 = 0LL;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v16[0] + 56LL))(
             v16[0],
             &v15);
      LastError = v4;
      if ( v4 >= 0 )
      {
        v14 = 0LL;
        v5 = (**v15)(v15, &GUID_8c25e859_1042_4da0_9232_bf2aa8ff3726, &v14);
        LastError = v5;
        if ( v5 >= 0 )
        {
          if ( ExpandEnvironmentStringsW(
                 L"%SystemRoot%\\SystemResources\\ShellComponents\\ShellComponents.pri",
                 Dst,
                 0x104u) )
          {
            v7 = (*(__int64 (__fastcall **)(__int64, WCHAR *))(*(_QWORD *)v14 + 48LL))(v14, Dst);
            LastError = v7;
            if ( v7 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xE0,
                (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
                (const char *)(unsigned int)v7);
          }
          else
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0xDF,
                          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
                          v6);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xDC,
            (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
            (const char *)(unsigned int)v5);
        }
        v8 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xD9,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
          (const char *)(unsigned int)v4);
      }
      v9 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD7,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v3);
    }
    v10 = v16[0];
    if ( v16[0] )
    {
      v16[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD5,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
  return LastError;
}
