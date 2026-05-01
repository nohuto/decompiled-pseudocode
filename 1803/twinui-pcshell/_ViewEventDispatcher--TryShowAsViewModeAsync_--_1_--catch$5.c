/*
 * XREFs of _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x1801CF557
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch_5(wil *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax

  v2 = *(__int64 **)(a2 + 192);
  v3 = *v2;
  v4 = wil::ResultFromCaughtException(a1);
  (*(void (__fastcall **)(__int64 *, _QWORD))(v3 + 24))(v2, v4);
  return &loc_1801CF506;
}
