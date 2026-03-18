/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C008A5A0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C5370 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x1C008A5F8 (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C011C068 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 OldRedirectionBitmap; // rsi
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = 0;
  OldRedirectionBitmap = GetOldRedirectionBitmap(a1);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL, v4, v5);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1LL);
  }
  return v2;
}
