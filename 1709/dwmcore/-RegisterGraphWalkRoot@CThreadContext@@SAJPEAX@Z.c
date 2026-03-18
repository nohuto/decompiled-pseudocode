/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800B336C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18005B220 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005B770 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005C710 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005CD64 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800B325C (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B219C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(void *a1)
{
  _QWORD *Value; // rbx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  DWORD v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = operator new(0xA8uLL);
    Value = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[3] = 0LL;
      v9[4] = 0LL;
      v9[5] = 0LL;
      v9[6] = 0LL;
      v9[7] = 0LL;
      v9[8] = 0LL;
      v9[9] = 0LL;
      v9[10] = 0LL;
      v9[11] = 0LL;
      v9[12] = 0LL;
      v9[13] = 0LL;
      v9[14] = 0LL;
      v9[15] = 0LL;
      v9[16] = 0LL;
      v9[17] = 0LL;
      v9[18] = 0LL;
      v9[19] = 0LL;
      v9[20] = 0LL;
    }
    else
    {
      Value = 0LL;
    }
    if ( !Value )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x42u);
      v11 = 108;
LABEL_17:
      v10 = v6;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v11);
      return v6;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  if ( (*Value & 2) != 0 )
    v3 = *(_QWORD *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *Value & 1LL;
  v4 = 0LL;
  if ( v3 )
  {
    while ( a1 != (void *)CPtrArrayBase::operator[](Value, v4) )
    {
      v4 = v8 + 1;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v6 = -2147467260;
    v11 = 119;
    goto LABEL_17;
  }
LABEL_5:
  v5 = CPtrArrayBase::InsertAt((CPtrArrayBase *)Value, (__int64)a1, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 124;
    v10 = v5;
    goto LABEL_20;
  }
  return v6;
}
