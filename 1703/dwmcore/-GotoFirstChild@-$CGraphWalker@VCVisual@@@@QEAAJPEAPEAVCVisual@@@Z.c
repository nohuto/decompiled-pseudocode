/*
 * XREFs of ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180013948
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800122DC (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180013804 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x180013B1C (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGraph.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoFirstChild(__int64 a1, struct CVisual **a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  struct CVisual *ChildAt; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  v5 = *(_QWORD *)(v2 + 72);
  if ( (v5 & 2) != 0 )
    v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v5) = v5 & 1;
  if ( (_DWORD)v5 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_DWORD *)(a1 + 24);
    v6 = CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push(a1 + 32, &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x87u);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 28) == 1 )
        *(_DWORD *)(a1 + 24) = 0;
      else
        *(_DWORD *)(a1 + 24) = v5 - 1;
      ChildAt = CVisual::GetChildAt(*(CVisual **)(a1 + 8), *(_DWORD *)(a1 + 24));
      v9 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 8) = ChildAt;
      *a2 = ChildAt;
    }
  }
  else
  {
    return 1;
  }
  return v7;
}
