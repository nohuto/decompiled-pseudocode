/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     cjCopyFontDataW @ 0x1C003AEDC (cjCopyFontDataW.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C003C7C4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C003CAD4 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00AE5DC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00B0340 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     GreEnumFonts @ 0x1C00B17BC (GreEnumFonts.c)
 *     GreGetAspectRatioFilter @ 0x1C026A4C0 (GreGetAspectRatioFilter.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this, __int64 a2)
{
  char CurrentThreadDpiAwarenessContext; // al
  bool v4; // cc
  __int64 result; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(this, a2);
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2192LL);
  v4 = (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1;
  result = 96LL;
  if ( v4 )
    return *(unsigned int *)(*(_QWORD *)this + 2192LL);
  return result;
}
