/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18008883C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65a140ede4573307db560e294d6cd58c___::Run @ 0x1800887F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65a140ede4573307db560e294d6cd58c___--Run.c)
 * Callees:
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18001A210 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1800889FC (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18009C794 (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LoadDataFromStateRepository(PCWSTR sourceString, HSTRING *string)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  unsigned int v8; // eax
  DWORD v9; // ecx
  UINT32 v10; // edx
  HRESULT v11; // eax
  int v12; // eax
  int LocalizedDisplayNameForApp; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-78h]
  _BYTE v21[8]; // [rsp+30h] [rbp-68h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  const WCHAR *v24[2]; // [rsp+48h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-40h] BYREF
  HSTRING stringa; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v24[1] = (const WCHAR *)-2LL;
  v24[0] = sourceString;
  try
  {
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(&v23);
    v22 = 0LL;
    v4 = v23;
    stringa = 0LL;
    v5 = -1LL;
    do
      ++v5;
    while ( sourceString[v5] );
    v6 = -1;
    if ( v5 > 0xFFFFFFFF )
    {
      RaiseException(v5 > 0xFFFFFFFF ? 0x80070216 : 0, 1u, 0, 0LL);
    }
    else
    {
      v7 = v5;
      v8 = v5 + 1;
      if ( v7 + 1 >= v7 )
        v6 = v7 + 1;
      v9 = v8 < v7 ? 0x80070216 : 0;
      if ( v8 >= v7 )
      {
        v10 = v6 - 1;
        if ( v7 < v6 )
          v10 = v7;
        v11 = WindowsCreateStringReference(sourceString, v10, &hstringHeader, &stringa);
        if ( v11 >= 0 )
        {
          v22 = 0LL;
          goto LABEL_11;
        }
LABEL_22:
        RaiseException(v11, 1u, 0, 0LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_11:
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v4 + 240LL))(
                v4,
                0LL,
                stringa,
                &v22);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x64,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v12,
            v20);
        }
        else
        {
          WindowsDeleteString(*string);
          *string = 0LL;
          LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v22, string);
          v14 = retaddr;
          if ( LocalizedDisplayNameForApp >= 0 )
          {
LABEL_13:
            v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v22 + 1112LL))(
                    v22,
                    v21);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x6D,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v15,
                v20);
            else
              *((_BYTE *)string + 26) = v21[0] != 0;
            if ( v22 )
              (*(void (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *))(*(_QWORD *)v22 + 16LL))(v22);
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            return 0LL;
          }
        }
        wil::details::in1diag3::_Log_Hr(
          v14,
          (void *)0x66,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)LocalizedDisplayNameForApp,
          v20);
        v19 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(string, v24);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x69,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v19,
            v20);
        goto LABEL_13;
      }
    }
    RaiseException(v9, 1u, 0, 0LL);
    goto LABEL_22;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x74,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v16);
  }
  return result;
}
