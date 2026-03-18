/*
 * XREFs of UserReleaseRedirectionBitmap @ 0x1C01C2300
 * Callers:
 *     <none>
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C001D698 (DeleteOldRedirectionBitmap.c)
 *     UnredirectDCEs @ 0x1C0022A58 (UnredirectDCEs.c)
 *     HintSpriteShape @ 0x1C0022E0C (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0026020 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall UserReleaseRedirectionBitmap(__int64 a1)
{
  __int64 result; // rax
  struct tagWND *v2; // rbx
  HSURF v3; // rdi

  result = ValidateHwnd(a1);
  v2 = (struct tagWND *)result;
  if ( result && (*(_BYTE *)(result + 67) & 0x20) != 0 )
  {
    HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), (struct tagWND *)result, 0LL, 0);
    DeleteOldRedirectionBitmap((__int64)v2);
    result = GetRedirectionBitmap((__int64)v2);
    v3 = (HSURF)result;
    if ( result )
    {
      UnredirectDCEs(v2);
      SetRedirectionBitmap(v2, 0LL, 0);
      return DeleteOrSetRedirectionBitmap((__int64)v2, v3, 0);
    }
  }
  return result;
}
