/*
 * XREFs of ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD48
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall W32PIDLOCK::vCleanUp(REGION **this)
{
  REGION *v2; // rcx

  REGION::vDeleteREGION(this[4]);
  v2 = this[5];
  if ( v2 )
    Win32FreePool(v2);
}
