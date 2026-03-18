/*
 * XREFs of ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0134C50
 * Callers:
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C0134A40 (NtGdiHT_Get8BPPMaskPalette.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C0290CD0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C0292B90 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C0293260 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiHT_Get8BPPFormatPalette @ 0x1C02933C0 (NtGdiHT_Get8BPPFormatPalette.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C0293DA0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C0293F40 (NtGdiXLATEOBJ_cGetPalette.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall bSafeCopyBits(char *a1, void *a2, unsigned int a3)
{
  char *v3; // r10

  if ( a1 && a2 )
  {
    v3 = &a1[a3];
    if ( (unsigned __int64)v3 > W32UserProbeAddress || v3 <= a1 )
      *W32UserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}
