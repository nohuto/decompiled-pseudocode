/*
 * XREFs of ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00B8F70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0131CB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0131F00 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0132370 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C028D620 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngGradientFill @ 0x1C028DF30 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C028E6C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C028F060 (NtGdiEngTransparentBlt.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C0290690 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C0290790 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C0290800 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 216) )
    v3 = *(_QWORD *)(a1 + 208);
  else
    v3 = 0LL;
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          765);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        770);
    return 0LL;
  }
  return v3;
}
