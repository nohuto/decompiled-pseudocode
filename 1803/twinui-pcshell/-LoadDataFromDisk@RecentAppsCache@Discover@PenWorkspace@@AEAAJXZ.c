/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180196410
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800EF740 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18000C550 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800F5EF4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18019684C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  unsigned int LastError; // r14d
  WCHAR *FileW; // rax
  WCHAR *v4; // rbx
  DWORD FileSize; // eax
  __int64 v6; // rsi
  __int64 v7; // r15
  void *v8; // rcx
  int v9; // eax
  CHAR *v10; // rdi
  const char *v11; // r9
  WCHAR *v12; // rsi
  __int64 v13; // r14
  int ActivationFactory; // eax
  PVOID Reserved1; // r15
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID lpBuffer; // [rsp+60h] [rbp-A8h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR *v26[3]; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h]
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  v26[1] = (const WCHAR *)-2LL;
  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
    return LastError;
  }
  FileW = (WCHAR *)CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
  v4 = FileW;
  v26[2] = FileW;
  if ( FileW == (WCHAR *)-1LL )
  {
    LastError = -2147023728;
    goto LABEL_23;
  }
  FileSize = GetFileSize(FileW, 0LL);
  v6 = FileSize;
  v7 = FileSize + 1;
  lpBuffer = 0LL;
  v9 = CTCoAllocPolicy::Alloc(v8, 1, (unsigned int)v7, &lpBuffer);
  LastError = v9;
  v10 = (CHAR *)lpBuffer;
  if ( v9 >= 0 )
  {
    if ( !ReadFile(v4, lpBuffer, v6, NumberOfBytesRead, 0LL) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x21A,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                    v11);
      goto LABEL_22;
    }
    v10[v6] = 0;
    v12 = (WCHAR *)CoTaskMemAlloc(2 * v7);
    v26[0] = v12;
    if ( !MultiByteToWideChar(0xFDE9u, 0, v10, -1, v12, v7) )
    {
      LastError = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21F,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)0x80004005LL);
LABEL_21:
      CoTaskMemFree(v12);
      goto LABEL_22;
    }
    v23 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    ActivationFactory = RoGetActivationFactory(v13, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v23);
    LastError = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x222,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_21;
    }
    v22 = 0LL;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v26)[1].Reserved.Reserved1;
    v28 = 0LL;
    v16 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v17 = (*(__int64 (__fastcall **)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v16 + 56LL))(
            v16,
            Reserved1,
            &v22,
            &v21);
    LastError = v17;
    if ( v17 >= 0 )
    {
      if ( (_BYTE)v21 )
      {
        LastError = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v22);
        goto LABEL_19;
      }
      LastError = -2147467259;
      v18 = 2147500037LL;
      v19 = 552LL;
    }
    else
    {
      v18 = (unsigned int)v17;
      v19 = 551LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)v18);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x217,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  CoTaskMemFree(v10);
LABEL_23:
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  return LastError;
}
