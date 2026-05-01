/*
 * XREFs of ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800EA390
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800E8A08 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800EA6D0 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  int v1; // eax
  unsigned int LastError; // esi
  int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  const char *v7; // r9
  HANDLE FileW; // rbx
  __int64 v9; // rsi
  PCWSTR StringRawBuffer; // rax
  void *v11; // rdi
  const WCHAR *v12; // rax
  const char *v13; // r9
  __int64 v14; // rcx
  struct Windows::Data::Json::IJsonObject *v15; // rcx
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  struct Windows::Data::Json::IJsonObject *v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Dst[264]; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR FileName[264]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B0h] [rbp+3A8h]

  v19[1] = (struct Windows::Data::Json::IJsonObject *)-2LL;
  v19[0] = 0LL;
  v1 = PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(this, v19);
  LastError = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2A5,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_29;
  }
  v18 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct Windows::Data::Json::IJsonObject *, GUID *, __int64 *))v19[0])(
         v19[0],
         &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e,
         &v18);
  LastError = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2A8,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_27;
  }
  v4 = v18;
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 56LL))(v4, &string);
  LastError = v5;
  if ( v5 >= 0 )
  {
    if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace", Dst, 0x104u) )
    {
      if ( ExpandEnvironmentStringsW(
             L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat",
             FileName,
             0x104u) )
      {
        if ( GetFileAttributesW(Dst) == -1 && !CreateDirectoryW(Dst, 0LL) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x2B7,
                        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                        v7);
          goto LABEL_26;
        }
        FileW = CreateFileW(FileName, 0x40000000u, 2u, 0LL, 2u, 0x8000080u, 0LL);
        v9 = -1LL;
        if ( FileW != (HANDLE)-1LL )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          do
            ++v9;
          while ( StringRawBuffer[v9] );
          v11 = CoTaskMemAlloc((unsigned int)v9);
          v12 = WindowsGetStringRawBuffer(string, 0LL);
          if ( WideCharToMultiByte(0xFDE9u, 0, v12, v9, (LPSTR)v11, v9, 0LL, 0LL) )
          {
            if ( WriteFile(FileW, v11, v9, 0LL, 0LL) )
              LastError = 0;
            else
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x2C1,
                            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                            v13);
          }
          else
          {
            LastError = -2147467259;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2BF,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)0x80004005LL);
          }
          CoTaskMemFree(v11);
          if ( FileW )
            CloseHandle(FileW);
          goto LABEL_26;
        }
        LastError = -2147023728;
        v6 = 699LL;
      }
      else
      {
        LastError = -2147467259;
        v6 = 689LL;
      }
    }
    else
    {
      LastError = -2147467259;
      v6 = 686LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)LastError);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2AB,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v5);
LABEL_26:
  WindowsDeleteString(string);
  string = 0LL;
LABEL_27:
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_29:
  v15 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return LastError;
}
