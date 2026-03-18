/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C0092BA0
 * Callers:
 *     GreGetRandomRgn @ 0x1C00808C0 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C00809E4 (GetDCOrgOnScreen.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     NtGdiGetRandomRgn @ 0x1C0092950 (NtGdiGetRandomRgn.c)
 *     DxgkEngBltViaGDI @ 0x1C0251B40 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 StyleWindow; // rax

  v4 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 32LL));
  v5 = LookupDC(a1, 1LL);
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v5 + 16)) )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_6;
    }
    StyleWindow = GetStyleWindow(v6, 2848);
    if ( StyleWindow )
    {
      *(_DWORD *)a2 = *(_DWORD *)(StyleWindow + 128);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(StyleWindow + 132);
LABEL_6:
      v4 = 1;
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  return v4;
}
