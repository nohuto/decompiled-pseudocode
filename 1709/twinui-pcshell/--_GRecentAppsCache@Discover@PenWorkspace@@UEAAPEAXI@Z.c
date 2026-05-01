/*
 * XREFs of ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1800E56E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA@XZ @ 0x1800E5BCC (--1-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchData@Disco.c)
 *     ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800E5CE4 (--1-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_pt.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

PenWorkspace::Discover::RecentAppsCache *__fastcall PenWorkspace::Discover::RecentAppsCache::`scalar deleting destructor'(
        PenWorkspace::Discover::RecentAppsCache *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  const char *v8; // r9
  char *v9; // rcx
  volatile signed __int32 *v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 26);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 26) = 0LL;
  }
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (void *)*((_QWORD *)this + 19);
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v8);
    JUMPOUT(0x1800E5890LL);
  }
  v9 = (char *)*((_QWORD *)this + 18);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>((char *)this + 104);
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    v12 = (__int64)(*((_QWORD *)this + 7) - v11) >> 3;
    if ( v12 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v12 < 0x1000 )
      {
LABEL_22:
        operator delete((void *)v11);
        *((_QWORD *)this + 5) = 0LL;
        *((_QWORD *)this + 6) = 0LL;
        *((_QWORD *)this + 7) = 0LL;
        goto LABEL_23;
      }
      if ( (v11 & 0x1F) == 0 )
      {
        v13 = *(_QWORD *)(v11 - 8);
        if ( v13 < v11 )
        {
          v11 = v11 - v13 - 8;
          if ( v11 <= 0x1F )
          {
            v11 = v13;
            goto LABEL_22;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v11);
    __debugbreak();
  }
LABEL_23:
  std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::~list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>((char *)this + 24);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
