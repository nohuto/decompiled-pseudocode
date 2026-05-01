/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$11 @ 0x1801EF90A
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002BAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_11(__int64 a1, __int64 a2)
{
  wchar_t *v3; // rbx
  __int64 v4; // rax

  v3 = *(wchar_t **)(a2 + 112);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 88) + 8LL))(*(_QWORD *)(a2 + 88));
    StringCchPrintfW(v3, *(_QWORD *)(a2 + 120), L"std::exception: %hs", v4);
  }
  return &loc_18014770B;
}
