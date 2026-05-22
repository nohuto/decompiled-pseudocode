/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x1800CC4D4
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180001EB8 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wil *v5; // rcx
  __int64 v6; // rbx

  **(_BYTE **)(a2 + 112) = 1;
  v5 = *(wil **)(a2 + 96);
  v6 = *(_QWORD *)(a2 + 40);
  if ( v5 )
    wil::GetFailureLogString(v5, *(unsigned __int16 **)(a2 + 104), v6 + 24, a4);
  *(_DWORD *)(a2 + 96) = *(_DWORD *)(v6 + 28);
  return &loc_180002C68;
}
