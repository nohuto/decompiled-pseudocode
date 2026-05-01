/*
 * XREFs of ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180140DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x18012616C (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x180144704 (--$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z.c)
 */

__int64 __fastcall ViewWrapperBase::UnboostPriority(RTL_SRWLOCK **this)
{
  bool v2; // al
  int v3; // edi
  bool v4; // di
  char v6; // [rsp+30h] [rbp+8h] BYREF
  bool v7; // [rsp+38h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(this[19], &SRWLock);
  v2 = ((_DWORD)this[10] & 0x40) != 0;
  v6 = 0;
  v7 = v2;
  ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>((char *)this + 132, &v7, &v6);
  v3 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 20) = v3 & 0xFFFFFFBF;
  v4 = (v3 & 0x40) != 0;
  if ( (*((_WORD *)this + 162) & 0xC0) == 0xC0 && (~(*((_DWORD *)this + 20) >> 8) & 1) != 0 )
  {
    *((_WORD *)this + 162) &= ~0x40u;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(this - 3));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
    ViewEventDispatcher::UnboostShellPriority(this[19]);
  return 0LL;
}
