/*
 * XREFs of _lambda_09af48e3e39cecd76313a5728b88f4f6_::operator() @ 0x180028E08
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_09af48e3e39cecd76313a5728b88f4f6____Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x18002FAC0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_09af48e3e39cecd.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002E60 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000D93C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014858 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002A990 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180037FD0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     memset @ 0x18004207E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_09af48e3e39cecd76313a5728b88f4f6_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  unsigned int LastError; // ebx
  HSTRING v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  HSTRING v13; // rbx
  int v14; // eax
  int v15; // eax
  HSTRING v16; // rbx
  const char *v17; // r9
  HSTRING v18; // rcx
  HSTRING v20; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm6
  int StringPropertyFromGameConfigStore; // eax
  int LaunchParameters; // eax
  HSTRING v27; // rcx
  const char *v28; // r9
  __int128 v29; // [rsp+28h] [rbp-69h] BYREF
  __int64 v30; // [rsp+38h] [rbp-59h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+48h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  HSTRING string; // [rsp+F8h] [rbp+67h] BYREF
  HSTRING v34; // [rsp+108h] [rbp+77h] BYREF
  HSTRING v35; // [rsp+110h] [rbp+7Fh] BYREF

  v30 = -2LL;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 264);
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
      wil::details::in1diag3::Return_Hr_NoOriginate(
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
  if ( !*(_QWORD *)(v4 + 312) )
  {
    v21 = (struct _RTL_CRITICAL_SECTION *)(v4 + 176);
    EnterCriticalSection(v21);
    v35 = (HSTRING)v21;
    v23 = *a1;
    if ( !*(_QWORD *)(*a1 + 288) || !*(_QWORD *)(v23 + 296) )
    {
      LastError = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x80070005LL);
LABEL_47:
      if ( v21 )
        LeaveCriticalSection(v21);
      return LastError;
    }
    LOBYTE(v22) = 1;
    v24 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       *(_QWORD *)(v23 + 288),
                       v22);
    v34 = 0LL;
    v29 = v24;
    WindowsDeleteString(0LL);
    v34 = 0LL;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(*(_QWORD *)(*a1 + 296), &v29, 23LL, &v34);
    LastError = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_42:
      WindowsDeleteString(v34);
      v34 = 0LL;
      goto LABEL_47;
    }
    if ( !v34 )
    {
      LastError = -2147024894;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x80070002LL);
      goto LABEL_42;
    }
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(*a1 + 16),
                         &string);
    LastError = LaunchParameters;
    if ( LaunchParameters < 0 )
      goto LABEL_35;
    v27 = string;
    if ( string )
    {
      if ( !WindowsIsStringEmpty(string) )
        goto LABEL_36;
      v27 = string;
    }
    v29 = v24;
    WindowsDeleteString(v27);
    string = 0LL;
    LaunchParameters = GetStringPropertyFromGameConfigStore(*(_QWORD *)(*a1 + 296), &v29, 4LL, &string);
    LastError = LaunchParameters;
    if ( LaunchParameters < 0 )
    {
LABEL_35:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)LaunchParameters);
LABEL_41:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_42;
    }
LABEL_36:
    pExecInfo.cbSize = 112;
    memset(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(v34, 0LL);
    if ( string && !WindowsIsStringEmpty(string) )
      pExecInfo.lpParameters = WindowsGetStringRawBuffer(string, 0LL);
    if ( ShellExecuteExW(&pExecInfo) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v34);
      v34 = 0LL;
      if ( v21 )
        LeaveCriticalSection(v21);
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x41B,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                  v28);
    goto LABEL_41;
  }
  v34 = 0LL;
  v11 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, HSTRING *))(v4 + 312))(
          *(_QWORD *)(v4 + 312),
          &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
          &v34);
  v12 = v11;
  if ( v11 >= 0 )
  {
    string = 0LL;
    v13 = v34;
    WindowsDeleteString(0LL);
    string = 0LL;
    v14 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v13 + 96LL))(v13, &string);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v14);
LABEL_18:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_19;
    }
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v15 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(*a1 + 16),
            &v35);
    v12 = v15;
    v16 = v35;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x41B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v15);
LABEL_17:
      WindowsDeleteString(v16);
      goto LABEL_18;
    }
    pExecInfo.cbSize = 112;
    memset(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(string, 0LL);
    pExecInfo.lpParameters = WindowsGetStringRawBuffer(v16, 0LL);
    if ( !ShellExecuteExW(&pExecInfo) )
    {
      v12 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x41B,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v17);
      goto LABEL_17;
    }
    WindowsDeleteString(v16);
    WindowsDeleteString(string);
    string = 0LL;
    v20 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x41B,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v11);
LABEL_19:
  v18 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v12;
}
