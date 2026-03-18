/*
 * XREFs of UserGetWindowRect @ 0x1C00E73CC
 * Callers:
 *     DxgkEngGetWindowRect @ 0x1C00E3B20 (DxgkEngGetWindowRect.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00E6FFC (GreUpdateSpriteClipRgn.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rbx
  __int64 result; // rax
  __int128 v6; // xmm0

  v4 = (_OWORD *)a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( result )
  {
    v6 = *(_OWORD *)(result + 128);
    result = 1LL;
    *v4 = v6;
  }
  return result;
}
