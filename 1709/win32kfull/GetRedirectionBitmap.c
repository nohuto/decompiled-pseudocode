/*
 * XREFs of GetRedirectionBitmap @ 0x1C00902B0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0090160 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _SetLayeredWindowAttributes @ 0x1C0090BA8 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     UpdateRedirectedDCE @ 0x1C00FAEE0 (UpdateRedirectedDCE.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01C5130 (ChangeRedirectionBitmapOwner.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C5370 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1)
{
  __int64 v1; // r8
  int v2; // r9d
  __int64 *v3; // rax
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 184);
  if ( !v1 )
    return 0LL;
  if ( !atomLayer )
    return 0LL;
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (__int64 *)(v1 + 8);
  if ( !v2 )
    return 0LL;
  while ( *((_WORD *)v3 + 4) != atomLayer || (*((_BYTE *)v3 + 10) & 1) == 0 )
  {
    v3 += 2;
    if ( !--v2 )
      return 0LL;
  }
  v5 = *v3;
  if ( v5 )
    return *(_QWORD *)v5;
  else
    return 0LL;
}
