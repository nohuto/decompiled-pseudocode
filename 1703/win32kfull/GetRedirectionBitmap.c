/*
 * XREFs of GetRedirectionBitmap @ 0x1C0025F80
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0022C08 (_SetLayeredWindowAttributes.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0025E60 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     UpdateRedirectedDCE @ 0x1C00E3320 (UpdateRedirectedDCE.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01C1A40 (ChangeRedirectionBitmapOwner.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C2300 (UserReleaseRedirectionBitmap.c)
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
