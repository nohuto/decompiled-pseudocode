/*
 * XREFs of ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x1801FBD5C
 * Callers:
 *     ??0XamlExplorerHost@@QE$AAA@XZ @ 0x1801FA370 (--0XamlExplorerHost@@QE$AAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1801FA958 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 XamlExplorerHost::s_LoadResources(void)
{
  __int64 v0; // rbx
  int ActivationFactory; // eax
  unsigned int LastError; // ebx
  int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  WCHAR Dst[264]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v13[1] = -2LL;
  v13[0] = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Resources.Core.ResourceManager",
    0x38u,
    0x37u);
  v0 = v15;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  ActivationFactory = RoGetActivationFactory(v0, &GUID_1cc0fdfc_69ee_4e43_9901_47f12687baf7, v13);
  LastError = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13[0])(
           v13[0],
           &GUID_7d9da47a_8bc7_49d3_97aa_f7db06049172,
           &v12);
    LastError = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v3);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      goto LABEL_17;
    }
    v11 = 0LL;
    v4 = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v4 + 56LL))(
           v4,
           &v11);
    LastError = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v5);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      goto LABEL_16;
    }
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = (**v11)(v11, &GUID_8c25e859_1042_4da0_9232_bf2aa8ff3726, &v10);
    LastError = v6;
    if ( v6 < 0 )
    {
      v7 = 212LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_14;
    }
    if ( ExpandEnvironmentStringsW(L"%SystemRoot%\\SystemResources\\ShellComponents\\ShellComponents.pri", Dst, 0x104u) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, WCHAR *))(*(_QWORD *)v10 + 48LL))(v10, Dst);
      LastError = v6;
      if ( v6 < 0 )
      {
        v7 = 216LL;
        goto LABEL_13;
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xD7,
                    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
                    v8);
    }
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCD,
    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return LastError;
}
