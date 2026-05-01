/*
 * XREFs of _lambda_53b45f8c27a1c8e4a22a66c2d530677f_::operator() @ 0x180029C70
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_53b45f8c27a1c8e4a22a66c2d530677f____Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x180030AF0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_53b45f8c27a1c8e.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FBC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000DB00 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014F90 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002B720 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180038E10 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     memset_0 @ 0x180042FEC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_53b45f8c27a1c8e4a22a66c2d530677f_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  unsigned int LastError; // ebx
  HSTRING v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, HSTRING *); // rcx
  int v12; // eax
  unsigned int v13; // edi
  HSTRING v14; // rbx
  int v15; // eax
  int v16; // eax
  HSTRING v17; // rbx
  const char *v18; // r9
  HSTRING v19; // rcx
  HSTRING v21; // rcx
  struct _RTL_CRITICAL_SECTION *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int128 v25; // xmm6
  int StringPropertyFromGameConfigStore; // eax
  __int64 v27; // r9
  int LaunchParameters; // eax
  HSTRING v29; // rcx
  const char *v30; // r9
  __int128 v31; // [rsp+28h] [rbp-69h] BYREF
  __int64 v32; // [rsp+38h] [rbp-59h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+48h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  HSTRING string; // [rsp+F8h] [rbp+67h] BYREF
  HSTRING v36; // [rsp+108h] [rbp+77h] BYREF
  HSTRING v37; // [rsp+110h] [rbp+7Fh] BYREF

  v32 = -2LL;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 256);
  if ( v5 )
  {
    string = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 120LL))(v5, &string);
    LastError = v6;
    if ( v6 >= 0
      && (v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(
                 (void (__fastcall ***)(__int64, GUID *, __int64))string,
                 v7,
                 v8),
          LastError = v6,
          v6 >= 0) )
    {
      *(_BYTE *)(a2 + 16) = 1;
      LastError = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v6);
    }
    v10 = string;
    if ( string )
    {
      string = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return LastError;
  }
  v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, HSTRING *))(v4 + 304);
  if ( !v11 )
  {
    v22 = (struct _RTL_CRITICAL_SECTION *)(v4 + 168);
    EnterCriticalSection(v22);
    v37 = (HSTRING)v22;
    v24 = *a1;
    if ( !*(_QWORD *)(*a1 + 280) || !*(_QWORD *)(v24 + 288) )
    {
      LastError = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x80070005LL);
LABEL_48:
      if ( v22 )
        LeaveCriticalSection(v22);
      return LastError;
    }
    LOBYTE(v23) = 1;
    v25 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       *(_QWORD *)(v24 + 280),
                       v23);
    v36 = 0LL;
    v31 = v25;
    WindowsDeleteString(0LL);
    v36 = 0LL;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(*(_QWORD *)(*a1 + 288), &v31, 23LL, &v36);
    LastError = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      v27 = (unsigned int)StringPropertyFromGameConfigStore;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v27);
LABEL_43:
      WindowsDeleteString(v36);
      v36 = 0LL;
      goto LABEL_48;
    }
    if ( !v36 )
    {
      LastError = -2147024894;
      v27 = 2147942402LL;
      goto LABEL_30;
    }
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(*a1 + 16),
                         &string);
    LastError = LaunchParameters;
    if ( LaunchParameters < 0 )
      goto LABEL_36;
    v29 = string;
    if ( string )
    {
      if ( !WindowsIsStringEmpty(string) )
        goto LABEL_37;
      v29 = string;
    }
    v31 = v25;
    WindowsDeleteString(v29);
    string = 0LL;
    LaunchParameters = GetStringPropertyFromGameConfigStore(*(_QWORD *)(*a1 + 288), &v31, 4LL, &string);
    LastError = LaunchParameters;
    if ( LaunchParameters < 0 )
    {
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)LaunchParameters);
LABEL_42:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_43;
    }
LABEL_37:
    pExecInfo.cbSize = 112;
    memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(v36, 0LL);
    if ( string && !WindowsIsStringEmpty(string) )
      pExecInfo.lpParameters = WindowsGetStringRawBuffer(string, 0LL);
    if ( ShellExecuteExW(&pExecInfo) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v36);
      v36 = 0LL;
      if ( v22 )
        LeaveCriticalSection(v22);
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x41B,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                  v30);
    goto LABEL_42;
  }
  v36 = 0LL;
  v12 = (**v11)(v11, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v36);
  v13 = v12;
  if ( v12 >= 0 )
  {
    string = 0LL;
    v14 = v36;
    WindowsDeleteString(0LL);
    string = 0LL;
    v15 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v14 + 96LL))(v14, &string);
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v15);
LABEL_18:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_19;
    }
    WindowsDeleteString(0LL);
    v37 = 0LL;
    v16 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(*a1 + 16),
            &v37);
    v13 = v16;
    v17 = v37;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v16);
LABEL_17:
      WindowsDeleteString(v17);
      goto LABEL_18;
    }
    pExecInfo.cbSize = 112;
    memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(string, 0LL);
    pExecInfo.lpParameters = WindowsGetStringRawBuffer(v17, 0LL);
    if ( !ShellExecuteExW(&pExecInfo) )
    {
      v13 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x41B,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v18);
      goto LABEL_17;
    }
    WindowsDeleteString(v17);
    WindowsDeleteString(string);
    string = 0LL;
    v21 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41B,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v12);
LABEL_19:
  v19 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v13;
}
