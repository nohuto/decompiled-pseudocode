/*
 * XREFs of UserReleaseRedirectionBitmap @ 0x1C01C5370
 * Callers:
 *     <none>
 * Callees:
 *     DeleteOldRedirectionBitmap @ 0x1C008A5A0 (DeleteOldRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UnredirectDCEs @ 0x1C008FFB4 (UnredirectDCEs.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C0090EC4 (HintSpriteShape.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall UserReleaseRedirectionBitmap(__int64 a1)
{
  __int64 result; // rax
  struct tagWND *v2; // rbx
  __int64 v3; // rdi

  result = ValidateHwnd(a1);
  v2 = (struct tagWND *)result;
  if ( result && (*(_BYTE *)(result + 67) & 0x20) != 0 )
  {
    HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), (struct tagWND *)result, 0LL, 0);
    DeleteOldRedirectionBitmap((__int64)v2);
    result = GetRedirectionBitmap((__int64)v2);
    v3 = result;
    if ( result )
    {
      UnredirectDCEs(v2);
      SetRedirectionBitmap((void **)v2, 0LL, 0);
      return DeleteOrSetRedirectionBitmap((__int64)v2, v3, 0);
    }
  }
  return result;
}
