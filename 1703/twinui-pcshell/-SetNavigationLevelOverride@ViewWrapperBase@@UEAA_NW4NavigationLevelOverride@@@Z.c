/*
 * XREFs of ?SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1801146C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18011749C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ViewWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  int v4; // edi
  char v5; // bl
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 144), &SRWLock);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *(_DWORD *)(a1 + 72) |= 0x10u;
        *(_DWORD *)(a1 + 72) &= ~8u;
      }
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 72) & 0x18) != 0 )
      {
        v5 = 0;
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 72) |= 8u;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 72) &= 0xFFFFFFC7;
  }
  ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
  v5 = 1;
LABEL_10:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v5;
}
