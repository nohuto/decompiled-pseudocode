/*
 * XREFs of ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801400B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180141F1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::Navigate(__int64 a1, int a2)
{
  int v4; // esi
  int v5; // ebx
  HWND v6; // rbp
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  v5 = 4;
  if ( a2 == 5 )
    v4 = 4;
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 168), &SRWLock);
  v6 = *(HWND *)(a1 + 256);
  v7 = *(_DWORD *)(a1 + 272);
  if ( v4 != v7 )
  {
    if ( !v7 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x599,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)0x8007139FLL);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      return 2147947423LL;
    }
    *(_DWORD *)(a1 + 272) = v4;
    if ( (~(*(_DWORD *)(a1 + 448) >> 2) & 1) != 0 )
    {
      if ( (unsigned int)(v4 - 4) > 1 )
        v5 = 2;
      if ( v5 != ((*(unsigned __int16 *)(a1 + 340) >> 1) & 7) )
      {
        *(_WORD *)(a1 + 340) ^= ((unsigned __int8)*(_WORD *)(a1 + 340) ^ (unsigned __int8)(2 * v5)) & 0xE;
        ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
      }
    }
    ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( a2 == 5 && v6 )
    SetForegroundWindow(v6);
  return 0LL;
}
