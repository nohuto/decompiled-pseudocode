/*
 * XREFs of ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x18001AD80
 * Callers:
 *     ?OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z @ 0x18001A300 (-OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180100280 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@IEAAX_K@Z @ 0x18019814C (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // r14
  _QWORD *Ptr; // rax
  __int64 v12; // rax
  const char *v13; // r9
  unsigned __int64 v15; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v15 = __PAIR64__(a3, a2);
    v9 = this + 20;
    AcquireSRWLockExclusive(this + 20);
    if ( this[15].Ptr <= (char *)this[17].Ptr + 1 )
      std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap(&this[13]);
    this[16].Ptr = (PVOID)((__int64)this[16].Ptr & ((__int64)this[15].Ptr - 1));
    v10 = ((__int64)this[17].Ptr + (unsigned __int64)this[16].Ptr) & ((__int64)this[15].Ptr - 1);
    Ptr = this[14].Ptr;
    if ( !Ptr[v10] )
    {
      *((_QWORD *)this[14].Ptr + v10) = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 12LL);
      Ptr = this[14].Ptr;
    }
    v12 = Ptr[v10];
    *(_QWORD *)v12 = v15;
    *(_DWORD *)(v12 + 8) = a8;
    ++this[17].Ptr;
    if ( !SetEvent(this[19].Ptr) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86F,
        (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
        v13);
      JUMPOUT(0x1800C000ALL);
    }
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA4,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      v13);
  }
  return 0LL;
}
