/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800122DC
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N4@Z @ 0x180012948 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180012408 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z @ 0x180013864 (-GotoParent@-$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x1800138C0 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180013948 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800139FC (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x180013A7C (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        __int64 a3,
        CHitTestContext *a4,
        bool a5)
{
  int v8; // eax
  int v9; // ebx
  CVisual *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-20h]
  struct CTreeData *v13; // [rsp+30h] [rbp-10h] BYREF
  bool v14; // [rsp+70h] [rbp+30h] BYREF
  CVisual *v15; // [rsp+78h] [rbp+38h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF

  *(_QWORD *)(a1 + 64) = a2;
  v16 = a3;
  *(_DWORD *)(a1 + 72) = 4;
  v8 = CGraphWalker<CVisual>::BeginWalk(a1, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 193;
  }
  else
  {
    v10 = *(CVisual **)(a1 + 8);
    do
    {
LABEL_9:
      v9 = CVisual::EnsureTreeData(v10, a2, &v13);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xCFu);
        goto LABEL_12;
      }
      v8 = CHitTestContext::PreSubgraph(a4, a2, &v14);
      v9 = v8;
      if ( v8 < 0 )
      {
        v12 = 211;
        goto LABEL_24;
      }
      if ( !v14 )
        break;
      v15 = 0LL;
      v8 = CGraphWalker<CVisual>::GotoFirstChild(a1, &v15);
      v9 = v8;
      if ( v8 < 0 )
      {
        v12 = 218;
        goto LABEL_24;
      }
      v10 = v15;
    }
    while ( v15 );
    while ( 1 )
    {
      a5 = 1;
      v8 = CHitTestContext::PostSubgraph(a4, a2, &a5);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v15 = 0LL;
      if ( a5 )
      {
        v8 = CGraphWalker<CVisual>::GotoSibling(a1, &v15);
        v9 = v8;
        if ( v8 < 0 )
        {
          v12 = 253;
          goto LABEL_24;
        }
        v10 = v15;
        if ( v15 )
          goto LABEL_9;
      }
      v15 = 0LL;
      CGraphWalker<CVisual>::GotoParent(a1, &v15);
      if ( !v15 )
        goto LABEL_12;
    }
    v12 = 244;
  }
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v12);
LABEL_12:
  if ( v9 == 1 || v9 == -2147467260 )
    v9 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v16);
  return (unsigned int)v9;
}
