/*
 * XREFs of ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180115B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18011749C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::Navigate(__int64 a1, int a2)
{
  int v4; // esi
  HWND v5; // rdi
  int v6; // eax
  int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( a2 == 5 )
    v4 = 4;
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 144), &SRWLock);
  v5 = *(HWND *)(a1 + 232);
  v6 = *(_DWORD *)(a1 + 248);
  if ( v4 != v6 )
  {
    if ( !v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x598,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)0x8007139FLL);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      return 2147947423LL;
    }
    *(_DWORD *)(a1 + 248) = v4;
    if ( (~(*(_DWORD *)(a1 + 424) >> 2) & 1) != 0 )
    {
      v8 = 2;
      if ( (unsigned int)(v4 - 4) <= 1 )
        v8 = 4;
      if ( v8 != ((*(unsigned __int16 *)(a1 + 316) >> 1) & 7) )
      {
        *(_WORD *)(a1 + 316) ^= ((unsigned __int8)*(_WORD *)(a1 + 316) ^ (unsigned __int8)(2 * v8)) & 0xE;
        ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
      }
    }
    ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( a2 == 5 && v5 )
    SetForegroundWindow(v5);
  return 0LL;
}
