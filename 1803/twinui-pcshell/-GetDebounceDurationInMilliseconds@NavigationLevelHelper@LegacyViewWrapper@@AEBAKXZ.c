/*
 * XREFs of ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyViewWrapper@@AEBAKXZ @ 0x1801E33FC
 * Callers:
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1801E34F0 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E3620 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyViewWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(
        LegacyViewWrapper::NavigationLevelHelper *this)
{
  if ( *((_DWORD *)this + 1) == 1 )
    return *((_BYTE *)this + 20) != 0 ? 10000 : 2000;
  if ( *((_DWORD *)this + 1) == 2 )
    return 300LL;
  return 0LL;
}
