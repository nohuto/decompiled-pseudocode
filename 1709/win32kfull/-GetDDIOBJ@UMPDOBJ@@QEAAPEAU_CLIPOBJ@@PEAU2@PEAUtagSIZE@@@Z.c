/*
 * XREFs of ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400
 * Callers:
 *     NtGdiEngTextOut @ 0x1C00B84F0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C00B8F70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0131CB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0131F00 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0132370 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C028D620 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngFillPath @ 0x1C028DD30 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C028DF30 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C028E330 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C028E530 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C028E6C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C028EAF0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C028EDD0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C028F060 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C028FF80 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x1C028CB78 (-CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::GetDDIOBJ(UMPDOBJ *this, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  struct _CLIPOBJ *v5; // rbx

  if ( a2 == *((struct _CLIPOBJ **)this + 15) )
  {
    v5 = (struct _CLIPOBJ *)*((_QWORD *)this + 14);
  }
  else if ( a2 == *((struct _CLIPOBJ **)this + 17) )
  {
    v5 = CaptureAndMungeCLIPOBJ(a2, *((struct _CLIPOBJ **)this + 16), a3);
  }
  else
  {
    v5 = 0LL;
  }
  if ( a2 )
  {
    if ( !v5 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          785);
    }
  }
  if ( (*((_DWORD *)this + 103) & 0x100) != 0 && v5 && v5 < MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        791);
    return 0LL;
  }
  return v5;
}
