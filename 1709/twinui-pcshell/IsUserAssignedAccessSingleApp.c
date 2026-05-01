/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x1801DEA74
 * Callers:
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1800D5AA0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18019A160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801DEC80 (_anonymous_namespace_--queryLockdownMode.c)
 * Callees:
 *     GetSidStringFromToken @ 0x1801DE800 (GetSidStringFromToken.c)
 *     GetAssignedAccessTypeForUser @ 0x1801DE920 (GetAssignedAccessTypeForUser.c)
 */

_BOOL8 __fastcall IsUserAssignedAccessSingleApp(void *a1)
{
  BOOL v1; // ebx
  HLOCAL hMem[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(hMem, 0, 24);
  v1 = (int)GetSidStringFromToken(a1, (LPWSTR *)hMem) >= 0
    && GetAssignedAccessTypeForUser((unsigned __int16 *)hMem[0]) == 1;
  if ( hMem[0] )
    LocalFree(hMem[0]);
  return v1;
}
