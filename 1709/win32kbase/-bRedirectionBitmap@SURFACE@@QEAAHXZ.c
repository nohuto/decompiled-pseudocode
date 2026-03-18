/*
 * XREFs of ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001FE08
 * Callers:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C001F590 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C001FF4C (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     ?vSetRendering@DC@@QEAAXXZ @ 0x1C0051FA0 (-vSetRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bRedirectionBitmap(SURFACE *this)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *((_QWORD *)this + 32) || (*((_DWORD *)this + 29) & 1) != 0 )
    return 1;
  return v1;
}
