/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800EF740
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x180198400 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801002A0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180149804 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x180195AF4 (_anonymous_namespace_--GetCurTime.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180196410 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180196778 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180197468 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801976B4 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessQueueThreadProc(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  HRESULT Instance; // eax
  int DataFromDisk; // eax
  int Defaults; // eax
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  DWORD v8; // eax
  const char *v9; // r9
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // xmm0_8
  int v14; // ebp
  bool v15; // zf
  int v16; // eax
  RTL_SRWLOCK *v17; // rdi
  volatile signed __int32 *v18; // rdi
  unsigned int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  struct _FILETIME FileTime; // [rsp+30h] [rbp-68h] BYREF
  RTL_SRWLOCK *v26; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v27[4]; // [rsp+40h] [rbp-58h]
  _SYSTEMTIME SystemTime; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  CoInitializeEx(0LL, 2u);
  if ( *((_QWORD *)this + 23)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23),
        Instance = CoCreateInstance(
                     &CLSID_StartMenuCacheAndAppResolver,
                     0LL,
                     3u,
                     &GUID_de25675a_72de_44b4_9373_05170450c140,
                     (LPVOID *)this + 23),
        Instance >= 0) )
  {
    DataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(this);
    if ( DataFromDisk < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        328LL,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)DataFromDisk);
      Defaults = PenWorkspace::Discover::RecentAppsCache::LoadDefaults(this);
      if ( Defaults < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          330LL,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)Defaults);
    }
    anonymous_namespace_::GetCurTime((LPFILETIME)this + 22);
    FileTime = (struct _FILETIME)(*((_QWORD *)this + 22) + 72000000000LL);
    v6 = HIDWORD(*(unsigned __int64 *)&FileTime);
    *((_DWORD *)this + 44) = FileTime.dwLowDateTime;
    v7 = 0LL;
LABEL_8:
    *((_DWORD *)this + 45) = v6;
    while ( 1 )
    {
      if ( !v7 )
      {
        v8 = WaitForSingleObjectEx(*((HANDLE *)this + 19), 0xFFFFFFFF, 0);
        if ( v8 == 258 )
          break;
        if ( v8 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x967,
            (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
            v9);
          __debugbreak();
        }
      }
      if ( *((_BYTE *)this + 200) )
        break;
      AcquireSRWLockExclusive((PSRWLOCK)this + 20);
      v26 = (RTL_SRWLOCK *)((char *)this + 160);
      if ( *((_QWORD *)this + 17) )
      {
        v10 = (__int64 *)*((_QWORD *)this + 13);
        if ( v10 )
          v11 = *v10;
        else
          v11 = 0LL;
        v12 = *(__int64 **)(*(_QWORD *)(v11 + 8) + 8 * (*((_QWORD *)this + 16) & (*(_QWORD *)(v11 + 16) - 1LL)));
        v13 = *v12;
        v14 = *((_DWORD *)v12 + 2);
        v15 = (*((_QWORD *)this + 17))-- == 1LL;
        *(_QWORD *)v27 = v13;
        if ( v15 )
          *((_QWORD *)this + 16) = 0LL;
        else
          ++*((_QWORD *)this + 16);
        v7 = *((_QWORD *)this + 17);
        if ( this != (PenWorkspace::Discover::RecentAppsCache *)-160LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
        GetSystemTime(&SystemTime);
        SystemTimeToFileTime(&SystemTime, &FileTime);
        v16 = *((_DWORD *)this + 20);
        if ( v16 )
        {
          if ( v16 == v27[0] )
          {
            v17 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
            AcquireSRWLockExclusive(v17);
            *(_DWORD *)(*((_QWORD *)this + 11) + 32LL) += v14;
            *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = FileTime;
            if ( v17 )
              ReleaseSRWLockExclusive(v17);
          }
        }
        *((_DWORD *)this + 20) = 0;
        *((_QWORD *)this + 11) = 0LL;
        v18 = (volatile signed __int32 *)*((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = 0LL;
        if ( v18 && _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v18);
        }
        if ( v27[1] )
        {
          v19 = PenWorkspace::Discover::RecentAppsCache::TrackProcess(this, v27[1], &FileTime);
          if ( ((v19 + 0x80000000) & 0x80000000) == 0 && v19 != -2147024891 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              377LL,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)v19);
        }
        if ( CompareFileTime(&FileTime, (const FILETIME *)this + 22) > 0 )
        {
          v20 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              385LL,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v20);
          v21 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              387LL,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v21);
          v22 = *(_QWORD *)&FileTime + 72000000000LL;
          *((_DWORD *)this + 44) = FileTime.dwLowDateTime - 1014444032;
          v6 = HIDWORD(v22);
          goto LABEL_8;
        }
      }
      else
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v26);
      }
    }
    v23 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        393LL,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v23);
    v24 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        396LL,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v24);
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 1LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)Instance);
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
}
