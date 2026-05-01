/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E91F8
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800E8A08 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18007B35C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800E958C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  unsigned int JsonDataFromDisk; // r14d
  WCHAR *FileW; // rax
  WCHAR *v4; // rbx
  DWORD FileSize; // eax
  __int64 v6; // rsi
  __int64 v7; // r15
  IMalloc *v8; // rcx
  int v9; // eax
  CHAR *v10; // rdi
  const char *v11; // r9
  WCHAR *v12; // rsi
  HRESULT v13; // eax
  int ActivationFactory; // eax
  __int64 v15; // r15
  int v16; // eax
  struct Windows::Data::Json::IJsonObject *v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID lpBuffer; // [rsp+60h] [rbp-A8h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR *v25[3]; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-80h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  v25[1] = (const WCHAR *)-2LL;
  if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    FileW = (WCHAR *)CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
    v4 = FileW;
    v25[2] = FileW;
    if ( FileW == (WCHAR *)-1LL )
    {
      JsonDataFromDisk = -2147023728;
    }
    else
    {
      FileSize = GetFileSize(FileW, 0LL);
      v6 = FileSize;
      v7 = FileSize + 1;
      lpBuffer = 0LL;
      v9 = CTCoAllocPolicy::Alloc(v8, 1, (unsigned int)v7, &lpBuffer);
      JsonDataFromDisk = v9;
      v10 = (CHAR *)lpBuffer;
      if ( v9 >= 0 )
      {
        if ( ReadFile(v4, lpBuffer, v6, NumberOfBytesRead, 0LL) )
        {
          v10[v6] = 0;
          v12 = (WCHAR *)CoTaskMemAlloc(2 * v7);
          v25[0] = v12;
          if ( MultiByteToWideChar(0xFDE9u, 0, v10, -1, v12, v7) )
          {
            v22 = 0LL;
            string = 0LL;
            v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
            if ( v13 < 0 )
            {
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
              __debugbreak();
            }
            ActivationFactory = RoGetActivationFactory(string, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v22);
            JsonDataFromDisk = ActivationFactory;
            if ( ActivationFactory >= 0 )
            {
              v21 = 0LL;
              v15 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                  (__int64)&hstringHeader,
                                  v25)
                              + 24);
              string = 0LL;
              v16 = (*(__int64 (__fastcall **)(__int64, __int64, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v22 + 56LL))(
                      v22,
                      v15,
                      &v21,
                      &v20);
              JsonDataFromDisk = v16;
              if ( v16 >= 0 )
              {
                if ( (_BYTE)v20 )
                {
                  JsonDataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v21);
                }
                else
                {
                  JsonDataFromDisk = -2147467259;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x201,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                    (const char *)0x80004005LL);
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x200,
                  (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  (const char *)(unsigned int)v16);
              }
              v17 = v21;
              if ( v21 )
              {
                v21 = 0LL;
                (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v17 + 16LL))(v17);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x1FB,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                (const char *)(unsigned int)ActivationFactory);
            }
            v18 = v22;
            if ( v22 )
            {
              v22 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
          else
          {
            JsonDataFromDisk = -2147467259;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F8,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)0x80004005LL);
          }
          CoTaskMemFree(v12);
        }
        else
        {
          JsonDataFromDisk = wil::details::in1diag3::Return_GetLastError(
                               retaddr,
                               (void *)0x1F3,
                               (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                               v11);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1F0,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v9);
      }
      CoTaskMemFree(v10);
    }
    if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v4);
  }
  else
  {
    JsonDataFromDisk = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E6,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
  }
  return JsonDataFromDisk;
}
