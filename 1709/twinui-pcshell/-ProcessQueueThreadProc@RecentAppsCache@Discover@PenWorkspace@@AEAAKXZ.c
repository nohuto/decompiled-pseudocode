/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800E8A08
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x1800E8A00 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004278 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800CE20C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x1800E7CD8 (_anonymous_namespace_--GetCurTime.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z @ 0x1800E8E48 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E91F8 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E9C98 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800EA390 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800EAFE4 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EB4B0 (--4-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessQueueThreadProc(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  HRESULT Instance; // eax
  int v3; // ebx
  int DataFromDisk; // eax
  int Defaults; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  DWORD v9; // eax
  const char *v10; // r9
  _QWORD *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // xmm0_8
  int v14; // r14d
  int v16; // eax
  int v17; // ebx
  RTL_SRWLOCK *v18; // rbx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  const char *v26; // [rsp+28h] [rbp-28h]
  __int128 v27; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  FILETIME FileTime1; // [rsp+80h] [rbp+30h] BYREF

  CoInitializeEx(0LL, 2u);
  if ( *((_QWORD *)this + 23)
    || (Instance = CoCreateInstance(
                     &CLSID_StartMenuCacheAndAppResolver,
                     0LL,
                     3u,
                     &GUID_de25675a_72de_44b4_9373_05170450c140,
                     (LPVOID *)this + 23),
        v3 = Instance,
        Instance >= 0) )
  {
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)Instance);
  }
  if ( v3 < 0 )
  {
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
  DataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(this);
  if ( DataFromDisk < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)DataFromDisk);
    Defaults = PenWorkspace::Discover::RecentAppsCache::LoadDefaults(this);
    if ( Defaults < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14A,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)Defaults);
  }
  anonymous_namespace_::GetCurTime((LPFILETIME)this + 22);
  FileTime1 = (FILETIME)(*((_QWORD *)this + 22) + 72000000000LL);
  v7 = HIDWORD(*(unsigned __int64 *)&FileTime1);
  v8 = 0LL;
  *((_DWORD *)this + 44) = FileTime1.dwLowDateTime;
LABEL_11:
  *((_DWORD *)this + 45) = v7;
  while ( 1 )
  {
    if ( !v8 )
    {
      v9 = WaitForSingleObjectEx(*((HANDLE *)this + 19), 0xFFFFFFFF, 0);
      if ( v9 != 258 && v9 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93C,
          (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
          v10);
        __debugbreak();
      }
      if ( v9 )
        break;
    }
    if ( *((_BYTE *)this + 200) )
      break;
    AcquireSRWLockExclusive((PSRWLOCK)this + 20);
    if ( *((_QWORD *)this + 17) )
    {
      v11 = (_QWORD *)*((_QWORD *)this + 13);
      if ( v11 )
        v11 = (_QWORD *)*v11;
      v12 = *(__int64 **)(v11[1] + 8 * (*((_QWORD *)this + 16) & (v11[2] - 1LL)));
      v13 = *v12;
      v14 = *((_DWORD *)v12 + 2);
      if ( (*((_QWORD *)this + 17))-- == 1LL )
        *((_QWORD *)this + 16) = 0LL;
      else
        ++*((_QWORD *)this + 16);
      v8 = *((_QWORD *)this + 17);
      if ( this != (PenWorkspace::Discover::RecentAppsCache *)-160LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
      anonymous_namespace_::GetCurTime(&FileTime1);
      v16 = *((_DWORD *)this + 20);
      if ( !v16 )
        goto LABEL_30;
      if ( v16 == (_DWORD)v13 )
      {
        v18 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
        AcquireSRWLockExclusive(v18);
        *(_DWORD *)(*((_QWORD *)this + 11) + 32LL) += v14;
        *(FILETIME *)(*((_QWORD *)this + 11) + 36LL) = FileTime1;
        if ( v18 )
          ReleaseSRWLockExclusive(v18);
LABEL_30:
        *((_DWORD *)this + 20) = 0;
        v27 = 0LL;
        std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=((char *)this + 88, &v27);
        if ( *((_QWORD *)&v27 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v19 = *((_QWORD *)&v27 + 1);
            (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
          }
        }
        v20 = PenWorkspace::Discover::RecentAppsCache::TrackProcess(this, HIDWORD(v13), &FileTime1);
        v17 = v20;
        if ( v20 >= 0 )
          v17 = 0;
        else
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x198,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            (const char *)(unsigned int)v20);
        if ( v17 >= 0 )
          goto LABEL_39;
        goto LABEL_38;
      }
      v17 = -2147418113;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1CB,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)0x8000FFFFLL);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x193,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)0x8000FFFFLL);
LABEL_38:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v17);
LABEL_39:
      if ( CompareFileTime(&FileTime1, (const FILETIME *)this + 22) > 0 )
      {
        v21 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x173,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            (const char *)(unsigned int)v21);
        v22 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x175,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            (const char *)(unsigned int)v22);
        v23 = *(_QWORD *)&FileTime1 + 72000000000LL;
        *((_DWORD *)this + 44) = FileTime1.dwLowDateTime - 1014444032;
        v7 = HIDWORD(v23);
        goto LABEL_11;
      }
    }
    else
    {
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x164,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)0x8000FFFFLL,
        (__int64)"Work queue woken up with no data",
        v26);
      if ( this != (PenWorkspace::Discover::RecentAppsCache *)-160LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
    }
  }
  v24 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x17B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v24);
  v25 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v25);
  CoUninitialize();
  (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
  return 1LL;
}
