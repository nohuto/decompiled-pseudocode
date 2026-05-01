/*
 * XREFs of ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180116770
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x1800FAD48 (-BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x1800FF530 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x180119C8C (--$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z.c)
 */

__int64 __fastcall ViewWrapperBase::BoostPriority(RTL_SRWLOCK **this)
{
  bool v2; // al
  int v3; // edi
  bool v4; // di
  RTL_SRWLOCK *v5; // rbx
  HANDLE CurrentProcess; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v11; // [rsp+38h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(this[16], &SRWLock);
  v2 = ((_DWORD)this[7] & 0x40) != 0;
  ProcessInformation = 1;
  LOBYTE(v11) = v2;
  ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>(
    (char *)this + 108,
    &v11,
    &ProcessInformation);
  v3 = *((_DWORD *)this + 14);
  *((_DWORD *)this + 14) = v3 | 0xC0;
  v4 = (v3 & 0x40) == 0;
  if ( (*((_WORD *)this + 150) & 0xC0) != 0xC0 )
  {
    *((_WORD *)this + 150) |= 0xC0u;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(this - 3));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v5 = this[16];
  wil::srwlock::lock_exclusive(v5 + 28, &v11);
  if ( v4 )
    ++v5[63].Ptr;
  ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)&v5[63]);
  ProcessInformation = 1;
  CurrentProcess = GetCurrentProcess();
  v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE72,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
  ViewEventDispatcher::BoostUnboostSiHostProcess((ViewEventDispatcher *)v5, 1);
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  return 0LL;
}
