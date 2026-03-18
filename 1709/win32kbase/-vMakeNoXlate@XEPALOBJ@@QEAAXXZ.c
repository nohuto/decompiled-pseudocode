/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00415E0
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C006EDB4 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( v5 )
  {
    if ( v5 != *(_QWORD *)(v3 + 72) )
      Win32FreePool(v5, a2, a3);
    *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v6 )
  {
    if ( v6 != *(_QWORD *)(*(_QWORD *)this + 72LL) )
      Win32FreePool(v6, a2, a3);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)this + 72LL);
  if ( v7 )
  {
    Win32FreePool(v7, a2, a3);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
