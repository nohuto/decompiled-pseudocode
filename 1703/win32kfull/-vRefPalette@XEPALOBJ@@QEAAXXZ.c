/*
 * XREFs of ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C01958A0
 * Callers:
 *     DxEngSelectPaletteToSurface @ 0x1C009F7CC (DxEngSelectPaletteToSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vRefPalette(XEPALOBJ *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    INC_SHARE_REF_CNT(v2, a2);
}
