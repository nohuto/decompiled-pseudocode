/*
 * XREFs of _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$7 @ 0x1801EE3AF
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18008CE68 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch_7(wil *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax

  v3 = (__int64 *)a2[26];
  v4 = *v3;
  v5 = wil::ResultFromCaughtException(a1, a2, a3);
  (*(void (__fastcall **)(__int64 *, _QWORD))(v4 + 24))(v3, v5);
  return &loc_18011D6A9;
}
