/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C
 * Callers:
 *     GreEnumFonts @ 0x1C002C080 (GreEnumFonts.c)
 *     cjCopyFontDataW @ 0x1C002EE8C (cjCopyFontDataW.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C0030910 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C0030C34 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C007EA00 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C007EF14 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     GreGetAspectRatioFilter @ 0x1C026B740 (GreGetAspectRatioFilter.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  int v2; // ebx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 result; // rax

  LOBYTE(v2) = 18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v6 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v6 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v6 + 340) )
      {
        LOBYTE(v2) = *(_DWORD *)(v6 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
        if ( CurrentProcessWin32Process )
          v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2192LL);
  result = 96LL;
  if ( (v2 & 0xFu) - 1 <= 1 )
    return *(unsigned int *)(*(_QWORD *)this + 2192LL);
  return result;
}
