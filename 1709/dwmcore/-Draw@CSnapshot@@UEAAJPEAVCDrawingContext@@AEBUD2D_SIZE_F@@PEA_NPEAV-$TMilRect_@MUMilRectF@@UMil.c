/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175F20
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18003CFD0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSnapshot::Draw(__int64 a1, CDrawingContext *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  signed int v5; // eax

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 && !*(_BYTE *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 80) = 1;
    v5 = CDrawingContext::DrawBitmap(a2, (struct CResource *)((v4 + 16) & -(__int64)(v4 != 0)));
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x6Au);
    *(_BYTE *)(a1 + 80) = 0;
  }
  return v3;
}
