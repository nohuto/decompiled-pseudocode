/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0059DF0
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0042464 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( v3 )
  {
    if ( v3 != *(_QWORD *)(v1 + 72) )
      Win32FreePool(v3);
    *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  }
  v4 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v4 )
  {
    if ( v4 != *(_QWORD *)(*(_QWORD *)this + 72LL) )
      Win32FreePool(v4);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v5 = *(_QWORD *)(*(_QWORD *)this + 72LL);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
