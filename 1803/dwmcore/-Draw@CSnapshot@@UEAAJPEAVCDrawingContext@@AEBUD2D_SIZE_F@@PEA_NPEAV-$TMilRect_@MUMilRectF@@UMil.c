/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18006C6F0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CSnapshot::Draw(__int64 a1, CDrawingContext *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 && !*(_BYTE *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 80) = 1;
    v6 = CDrawingContext::DrawBitmap(a2, (struct CResource *)(v4 + 16));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6Au);
    *(_BYTE *)(a1 + 80) = 0;
  }
  return v3;
}
