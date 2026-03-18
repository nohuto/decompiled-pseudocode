/*
 * XREFs of ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1801D086C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1801D06B8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x1801D0A94 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ.c)
 */

__int64 __fastcall CBspPolygonListBuilder::BuildPolygonList(
        CBspPolygonListBuilder *this,
        struct CBspNode *a2,
        __int64 a3)
{
  signed int v4; // eax
  signed int v5; // edi
  unsigned int v7; // [rsp+20h] [rbp-18h]

  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 1) = a2;
  v7 = 0;
  v4 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>((__int64)this, (__int64)a2, a3, this, v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x2Fu);
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize();
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x19u);
  return (unsigned int)v5;
}
