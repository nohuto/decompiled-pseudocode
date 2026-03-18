/*
 * XREFs of _SelectPalette @ 0x1C00F8348
 * Callers:
 *     NtUserSelectPalette @ 0x1C00F82F0 (NtUserSelectPalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C013ECE8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F41C8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     _IsChild @ 0x1C011DA54 (_IsChild.c)
 *     WindowFromCacheDC @ 0x1C01C5AC8 (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C02043E4 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 NonChildAncestor; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx

  v5 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 9980LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = v7;
    if ( v7 )
    {
      NonChildAncestor = GetNonChildAncestor(v7);
      if ( (*(_BYTE *)(NonChildAncestor + 58) & 0x20) == 0 )
      {
        if ( NonChildAncestor != GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 16) + 464LL) |= 0x800u;
        SetOrClrWF(1, (_DWORD *)NonChildAncestor, 0x220u, 1);
      }
      if ( gpqForeground )
        v10 = *(_QWORD *)(gpqForeground + 120LL);
      else
        v10 = 0LL;
      v11 = *(_QWORD *)(*(_QWORD *)(NonChildAncestor + 24) + 8LL);
      if ( NonChildAncestor != *(_QWORD *)(v11 + 16)
        && NonChildAncestor != *(_QWORD *)(v11 + 160)
        && v10
        && (v10 == v8 || (unsigned int)IsChild(v10, v8) || (unsigned int)IsTopmostRealApp((struct tagWND *)v8))
        && *(char *)(v8 + 64) >= 0 )
      {
        v5 = 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
