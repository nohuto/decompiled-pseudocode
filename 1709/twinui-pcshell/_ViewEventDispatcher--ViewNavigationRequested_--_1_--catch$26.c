/*
 * XREFs of _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$26 @ 0x1801EE32F
 * Callers:
 *     <none>
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133010 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::ViewNavigationRequested_::_1_::catch_26(__int64 a1, __int64 a2)
{
  ViewManagerBridge::NavigateView(*(_QWORD *)(*(_QWORD *)(a2 + 232) + 512LL), *(unsigned int *)(a2 + 144), 0LL);
  return &loc_18011D309;
}
