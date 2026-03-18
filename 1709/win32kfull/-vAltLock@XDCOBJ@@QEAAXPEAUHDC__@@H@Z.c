/*
 * XREFs of ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C0144678
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C0029120 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C002A080 (GreHintDCWnd.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltLock(XDCOBJ *this, HDC a2)
{
  HDC v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
}
