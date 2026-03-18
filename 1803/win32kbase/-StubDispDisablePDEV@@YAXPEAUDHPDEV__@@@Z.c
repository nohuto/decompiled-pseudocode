/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00DB8A0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C005AD60 (EngFreeMem.c)
 *     EngDeletePalette @ 0x1C00C3550 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
