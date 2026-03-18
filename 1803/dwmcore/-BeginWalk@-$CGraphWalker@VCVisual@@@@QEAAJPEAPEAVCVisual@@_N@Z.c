/*
 * XREFs of ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800BED78
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800BEE20 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::BeginWalk(__int64 a1, void **a2)
{
  void *v2; // rsi
  void *v5; // rbp
  int v6; // eax
  unsigned int v7; // edi
  __int64 result; // rax

  v2 = *a2;
  v5 = 0LL;
  v6 = CThreadContext::RegisterGraphWalkRoot(*a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x40u);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v5 = v2;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = v2;
  }
  result = v7;
  *a2 = v5;
  return result;
}
