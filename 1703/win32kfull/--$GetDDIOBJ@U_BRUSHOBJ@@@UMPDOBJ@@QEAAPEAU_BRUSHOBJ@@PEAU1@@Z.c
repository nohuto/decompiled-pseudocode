/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C0098174
 * Callers:
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C009B400 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F4E0 (NtGdiEngStretchBltROP.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C0290A60 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C0290B50 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C0290BD0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C0290C50 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiEngFillPath @ 0x1C0291620 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C0291C30 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0291E30 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02923F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02926C0 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 152) )
  {
    v3 = *(_QWORD *)(a1 + 144);
  }
  else if ( a2 == *(_QWORD *)(a1 + 168) )
  {
    v3 = *(_QWORD *)(a1 + 160);
  }
  else
  {
    v3 = 0LL;
  }
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          767);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        772);
    return 0LL;
  }
  return v3;
}
