/*
 * XREFs of ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00205D0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall W32PIDLOCK::vCleanUp(REGION **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  REGION *v4; // rcx

  REGION::vDeleteREGION(this[4]);
  v4 = this[5];
  if ( v4 )
    Win32FreePool(v4, v2, v3);
}
