/*
 * XREFs of ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1801F3B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F2D1C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerI.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall WindowWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // eax
  char v6; // bl
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 296) + 152LL))(*(_QWORD *)(a1 + 296), &SRWLock);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *(_DWORD *)(a1 + 216) |= 0x10u;
        *(_DWORD *)(a1 + 216) &= ~8u;
      }
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 216);
      if ( (v5 & 0x18) != 0 )
      {
        v6 = 0;
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 216) = v5 | 8;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 216) &= 0xFFFFFFC7;
  }
  WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16), *(_DWORD *)(a1 + 452));
  v6 = 1;
LABEL_10:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v6;
}
