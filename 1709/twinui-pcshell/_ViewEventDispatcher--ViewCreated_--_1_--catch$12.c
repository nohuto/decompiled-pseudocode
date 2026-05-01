/*
 * XREFs of _ViewEventDispatcher::ViewCreated_::_1_::catch$12 @ 0x1801EE5B3
 * Callers:
 *     <none>
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133010 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::ViewCreated_::_1_::catch_12(__int64 a1, __int64 a2)
{
  ViewManagerBridge::NavigateView(*(_QWORD *)(*(_QWORD *)(a2 + 152) + 512LL), *(unsigned int *)(a2 + 64), 0LL);
  return &loc_18011E369;
}
