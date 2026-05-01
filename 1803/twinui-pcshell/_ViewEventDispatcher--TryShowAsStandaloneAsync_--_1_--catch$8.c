/*
 * XREFs of _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$8 @ 0x1800B2EA8
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch_8(wil *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax

  v2 = *(__int64 **)(a2 + 208);
  v3 = *v2;
  v4 = wil::ResultFromCaughtException(a1);
  (*(void (__fastcall **)(__int64 *, _QWORD))(v3 + 24))(v2, v4);
  return &loc_1800368AF;
}
