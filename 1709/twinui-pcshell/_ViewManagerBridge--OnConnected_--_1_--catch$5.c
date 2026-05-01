/*
 * XREFs of _ViewManagerBridge::OnConnected_::_1_::catch$5 @ 0x1801EEF66
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18008CE68 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::OnConnected_::_1_::catch_5(wil *a1, _QWORD *a2, unsigned int a3)
{
  *(_DWORD *)(a2[10] + 148LL) = wil::ResultFromCaughtException(a1, a2, a3);
  return &loc_180135827;
}
