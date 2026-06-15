/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x18005E6CB
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x18005E0C8 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_3(__int64 a1, __int64 a2)
{
  wil::details *v3; // rbx

  **(_BYTE **)(a2 + 112) = 1;
  v3 = *(wil::details **)(a2 + 56);
  wil::details::MaybeGetExceptionString(
    v3,
    *(const struct wil::ResultException **)(a2 + 96),
    *(unsigned __int16 **)(a2 + 104));
  *(_DWORD *)(a2 + 96) = *((_DWORD *)v3 + 7);
  return &loc_18005E608;
}
