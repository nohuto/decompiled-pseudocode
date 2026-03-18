/*
 * XREFs of ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C0039218
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
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
