/*
 * XREFs of ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C012490C
 * Callers:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C007B9B0 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C007BDF0 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 */

void __fastcall DC::vGet_sizlWindow(DC *this, struct tagSIZE *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    v4 = *(_QWORD *)(v3 + 548);
  else
    v4 = *(_QWORD *)(v3 + 528);
  *v2 = v4;
}
