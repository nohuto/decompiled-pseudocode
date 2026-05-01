/*
 * XREFs of _ViewManagerBridge::OnConnected_::_1_::catch$8 @ 0x1801DD8B9
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::OnConnected_::_1_::catch_8(wil *a1, __int64 a2)
{
  *(_DWORD *)(*(_QWORD *)(a2 + 80) + 140LL) = wil::ResultFromCaughtException(a1);
  return &loc_1801DD851;
}
