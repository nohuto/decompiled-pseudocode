/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x18030AE84
 * Callers:
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1801864F0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186948 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802281D0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180240230 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802437D8 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802440D0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     GetAssignedAccessTypeForUser @ 0x18030AC44 (GetAssignedAccessTypeForUser.c)
 *     GetSidStringFromToken @ 0x18030AD3C (GetSidStringFromToken.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18030AE58 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall IsUserAssignedAccessSingleApp(void *a1)
{
  unsigned int v1; // ebx
  LPWSTR v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  memset(v3, 0, 24);
  if ( (int)GetSidStringFromToken(a1, v3) >= 0 )
    LOBYTE(v1) = (unsigned int)GetAssignedAccessTypeForUser(v3[0]) == 1;
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)v3);
  return v1;
}
