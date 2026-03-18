/*
 * XREFs of UserGetWindowRect @ 0x1C009D970
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C009D248 (GreUpdateSpriteClipRgn.c)
 *     DxgkEngGetWindowRect @ 0x1C011CD00 (DxgkEngGetWindowRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(unsigned __int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm0

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v4 = *(_OWORD *)(result + 128);
    result = 1LL;
    *a2 = v4;
  }
  return result;
}
