/*
 * XREFs of ?vGetInfo@RFONTOBJ@@QEAAXPEAU_FONTINFO@@@Z @ 0x1C0283D6C
 * Callers:
 *     FONTOBJ_vGetInfo @ 0x1C026FEB0 (FONTOBJ_vGetInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vGetInfo(RFONTOBJ *this, struct _FONTINFO *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  *(_QWORD *)&a2->cjThis = 0LL;
  *(_QWORD *)&a2->cGlyphsSupported = 0LL;
  *(_QWORD *)&a2->cjMaxGlyph4 = 0LL;
  a2->cjMaxGlyph32 = 0;
  v3 = *(_QWORD *)(v2 + 472);
  a2->cjThis = 28;
  a2->cGlyphsSupported = *(_DWORD *)(v3 + 8);
  switch ( *(_DWORD *)(v2 + 160) )
  {
    case 1:
      a2->cjMaxGlyph1 = *(_DWORD *)(v2 + 648);
      break;
    case 4:
      a2->cjMaxGlyph4 = *(_DWORD *)(v2 + 648);
      break;
    case 8:
      a2->cjMaxGlyph8 = *(_DWORD *)(v2 + 648);
      break;
    case 0x20:
      a2->cjMaxGlyph32 = *(_DWORD *)(v2 + 648);
      break;
  }
  if ( *(_DWORD *)(v2 + 88) )
    a2->flCaps |= 1u;
  if ( (*(_DWORD *)(v2 + 488) & 0x8000) != 0 )
    a2->flCaps |= 2u;
}
