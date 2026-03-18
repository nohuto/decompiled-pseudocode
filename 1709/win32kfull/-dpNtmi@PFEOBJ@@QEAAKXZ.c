/*
 * XREFs of ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C003BC24
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00B3D88 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C003B870 (-IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z.c)
 */

__int64 __fastcall PFEOBJ::dpNtmi(PFEOBJ *this)
{
  unsigned int v1; // ebx
  struct _IFIMETRICS *v2; // rcx
  unsigned int cjIfiExtra; // edx

  v1 = 368;
  v2 = *(struct _IFIMETRICS **)(*(_QWORD *)this + 32LL);
  if ( (v2->flInfo & 0x4000) != 0 || IsTrueTypeVariation(v2) )
  {
    cjIfiExtra = v2->cjIfiExtra;
    if ( cjIfiExtra <= 0xC )
      DbgPrint("Test it %d %d \n", cjIfiExtra, 12);
    else
      return 4 * *(ULONG *)((char *)&v2->cjIfiExtra + v2[1].dpwszStyleName) + 368;
  }
  return v1;
}
