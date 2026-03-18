/*
 * XREFs of CComposition::ForEachCursorVisual__lambda_3e91fc0059ef0e11538ef3fb06109632___ @ 0x18015545C
 * Callers:
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z @ 0x180156750 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisual__lambda_3e91fc0059ef0e11538ef3fb06109632___(
        __int64 a1,
        struct CComposition **a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  int v6; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 944) )
  {
    while ( 1 )
    {
      v6 = CDrawingContext::DrawVisual(
             a2,
             *(struct CVisual **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 920) + 8 * v3) + 8LL) + 8LL),
             0);
      v2 = v6;
      if ( v6 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 944) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2EFu);
  }
  return v2;
}
