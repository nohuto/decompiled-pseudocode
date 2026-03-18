/*
 * XREFs of ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00FDC20
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 */

void __fastcall XDCOBJ::vFixPublicDCWithPrivateReferences(DC **this, unsigned int a2)
{
  DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, *this, a2, 0LL, 0LL, 0LL, 0);
  XDCOBJ::bCleanDC(this);
}
