/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$4 @ 0x18019F61E
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x18011CFFC (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wil *v5; // rcx
  __int64 v6; // rbx

  v5 = *(wil **)(a2 + 112);
  v6 = *(_QWORD *)(a2 + 32);
  if ( v5 )
    wil::GetFailureLogString(v5, *(wchar_t **)(a2 + 120), v6 + 24, a4);
  *(_DWORD *)(a2 + 136) = *(_DWORD *)(v6 + 28);
  return &loc_18011D59F;
}
