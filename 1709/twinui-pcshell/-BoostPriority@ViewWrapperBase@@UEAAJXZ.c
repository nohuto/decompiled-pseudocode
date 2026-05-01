/*
 * XREFs of ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180140CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x1801260F8 (-BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x180129E98 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x180144704 (--$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z.c)
 */

__int64 __fastcall ViewWrapperBase::BoostPriority(RTL_SRWLOCK **this)
{
  bool v2; // al
  int v3; // esi
  bool v4; // si
  RTL_SRWLOCK *v5; // rbx
  HANDLE CurrentProcess; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  bool v11; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(this[19], &SRWLock);
  v2 = ((_DWORD)this[10] & 0x40) != 0;
  ProcessInformation = 1;
  v11 = v2;
  ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>(
    (char *)this + 132,
    &v11,
    &ProcessInformation);
  v3 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 20) = v3 | 0xC0;
  v4 = (v3 & 0x40) == 0;
  if ( (*((_WORD *)this + 162) & 0xC0) != 0xC0 )
  {
    *((_WORD *)this + 162) |= 0xC0u;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(this - 3));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v5 = this[19];
  AcquireSRWLockExclusive(v5 + 37);
  if ( v4 )
    ++v5[72].Ptr;
  ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)&v5[72]);
  ProcessInformation = 1;
  CurrentProcess = GetCurrentProcess();
  v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEF4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
  ViewEventDispatcher::BoostUnboostSiHostProcess((ViewEventDispatcher *)v5, 1);
  if ( v5 != (RTL_SRWLOCK *)-296LL )
    ReleaseSRWLockExclusive(v5 + 37);
  return 0LL;
}
