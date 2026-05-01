/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$6 @ 0x18019F6A7
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002A54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_6(__int64 a1, __int64 a2)
{
  wchar_t *v3; // rbx
  __int64 v4; // rax

  v3 = *(wchar_t **)(a2 + 112);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 72) + 8LL))(*(_QWORD *)(a2 + 72));
    StringCchPrintfW(v3, *(_QWORD *)(a2 + 120), L"std::exception: %hs", v4);
  }
  return &loc_18011D5A8;
}
