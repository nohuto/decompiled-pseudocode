/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C001D698
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C2300 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C001D6EC (GetOldRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C0112BF8 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  HSURF OldRedirectionBitmap; // rdi
  unsigned int v3; // r11d

  OldRedirectionBitmap = (HSURF)GetOldRedirectionBitmap();
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1);
    return 1;
  }
  return v3;
}
