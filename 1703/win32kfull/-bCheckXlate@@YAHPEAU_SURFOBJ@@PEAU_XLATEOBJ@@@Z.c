/*
 * XREFs of ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C009A7B4
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C0096EB0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C012EC40 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F4E0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0290F40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngPlgBlt @ 0x1C0291FC0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0292950 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckXlate(struct _SURFOBJ *a1, struct _XLATEOBJ *a2)
{
  unsigned int v2; // r8d
  ULONG v3; // ecx
  ULONG v4; // ecx
  bool v6; // zf

  v2 = 1;
  if ( !a1 || !a2 || (a2->flXlate & 1) != 0 )
    return v2;
  v3 = a1->iBitmapFormat - 1;
  if ( !v3 )
  {
    v2 = 0;
    v6 = a2->cEntries == 2;
LABEL_10:
    LOBYTE(v2) = v6;
    return v2;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v2 = 0;
    v6 = ((a2->cEntries - 8) & 0xFFFFFFF7) == 0;
    goto LABEL_10;
  }
  if ( v4 == 1 )
    return a2->cEntries <= 0x100;
  return v2;
}
