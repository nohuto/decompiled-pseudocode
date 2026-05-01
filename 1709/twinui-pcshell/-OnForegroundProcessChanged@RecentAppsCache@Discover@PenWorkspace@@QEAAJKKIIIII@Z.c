/*
 * XREFs of ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x1800E7D1C
 * Callers:
 *     ?OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z @ 0x1800E4A50 (-OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@IEAAX_K@Z @ 0x1800EC1CC (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
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
  __int64 v10; // rsi
  __int64 v11; // rcx
  const char *v12; // r9
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v14 = __PAIR64__(a3, a2);
    v9 = this + 20;
    AcquireSRWLockExclusive(this + 20);
    if ( this[15].Ptr <= (char *)this[17].Ptr + 1 )
      std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap(&this[13]);
    this[16].Ptr = (PVOID)((__int64)this[16].Ptr & ((__int64)this[15].Ptr - 1));
    v10 = ((__int64)this[17].Ptr + (unsigned __int64)this[16].Ptr) & ((__int64)this[15].Ptr - 1);
    if ( !*((_QWORD *)this[14].Ptr + v10) )
      *((_QWORD *)this[14].Ptr + v10) = operator new(0xCuLL);
    v11 = *((_QWORD *)this[14].Ptr + v10);
    if ( v11 )
    {
      *(_QWORD *)v11 = v14;
      *(_DWORD *)(v11 + 8) = a8;
    }
    ++this[17].Ptr;
    if ( !SetEvent(this[19].Ptr) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v12);
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA4,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      v12);
  }
  return 0LL;
}
