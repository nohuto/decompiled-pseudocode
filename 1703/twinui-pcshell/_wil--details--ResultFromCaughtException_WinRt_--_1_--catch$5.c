/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x18019F65E
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18011D3C8 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 */

void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_5(__int64 a1, __int64 a2)
{
  wchar_t *v3; // rdx
  __int64 v4; // rbx

  **(_BYTE **)(a2 + 128) = 1;
  v3 = *(wchar_t **)(a2 + 112);
  v4 = *(_QWORD *)(a2 + 40);
  if ( v3 )
    wil::details::MaybeGetExceptionString(*(_QWORD *)(a2 + 40), v3, *(_QWORD *)(a2 + 120));
  *(_DWORD *)(a2 + 136) = *(_DWORD *)(v4 + 64);
  return &loc_18011D59F;
}
