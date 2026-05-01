/*
 * XREFs of _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$25 @ 0x18019E11C
 * Callers:
 *     <none>
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180108770 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::ViewNavigationRequested_::_1_::catch_25(__int64 a1, __int64 a2)
{
  ViewManagerBridge::NavigateView(*(_QWORD *)(*(_QWORD *)(a2 + 232) + 440LL), *(unsigned int *)(a2 + 128), 0LL);
  return &loc_1800F271C;
}
