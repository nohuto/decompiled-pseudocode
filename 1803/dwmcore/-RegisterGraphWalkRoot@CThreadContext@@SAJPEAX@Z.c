/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800BEE20
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800A8E44 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800BED78 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18008BA48 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(void *a1)
{
  int Current; // eax
  unsigned int v3; // ebx
  CPtrArrayBase *v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CThreadContext *v10; // [rsp+48h] [rbp+10h] BYREF

  Current = CThreadContext::GetCurrent(&v10);
  v3 = Current;
  if ( Current < 0 )
  {
    v9 = 108;
    goto LABEL_14;
  }
  v4 = v10;
  if ( (*(_QWORD *)v10 & 2) != 0 )
    v5 = *(_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)v10 & 1LL;
  v6 = 0LL;
  if ( !v5 )
  {
LABEL_5:
    Current = CPtrArrayBase::InsertAt(v4, (unsigned __int64)a1, v5);
    v3 = Current;
    if ( Current >= 0 )
      return v3;
    v9 = 124;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Current, v9);
    return v3;
  }
  while ( a1 != (void *)CPtrArrayBase::operator[]((__int64 *)v4, v6) )
  {
    v6 = v8 + 1;
    if ( v6 >= v5 )
      goto LABEL_5;
  }
  v3 = -2147467260;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467260, 0x77u);
  return v3;
}
