/*
 * XREFs of ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x18020FC8C
 * Callers:
 *     ?GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C1BA0 (-GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801A468C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x1802103C8 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802104D0 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 *     ?GotoSibling@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802105A8 (-GotoSibling@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVectorS.c)
 *     ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x180210744 (-PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x180212D28 (-GotoParent@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeBoundingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  CSpriteVectorShape *v6; // rdi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  do
  {
LABEL_2:
    v6 = *(CSpriteVectorShape **)(a3 + 8);
    *(_BYTE *)(a3 + 72) = 0;
    if ( !*((_BYTE *)v6 + 80) )
      break;
    *(_BYTE *)(a3 + 72) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(CSpriteVectorShape *, __int64))(*(_QWORD *)v6 + 48LL))(v6, 137LL) )
    {
      CSpriteVectorShape::ComputeBounds(v6);
      break;
    }
    *((_WORD *)v6 + 40) = 0;
    v12 = 0LL;
    v7 = CGraphWalker<CVectorShape>::GotoFirstChild(a1, &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x29u);
      goto LABEL_16;
    }
  }
  while ( v12 );
  while ( 1 )
  {
    LOBYTE(v12) = 1;
    v9 = CShapeBoundingContext::PostSubgraph((CShapeBoundingContext *)a3, (bool *)&v12);
    v8 = v9;
    if ( v9 < 0 )
      break;
    v13 = 0LL;
    if ( (_BYTE)v12 )
    {
      v10 = CGraphWalker<CVectorShape>::GotoSibling(a1, &v13);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x39u);
        goto LABEL_16;
      }
      if ( v13 )
        goto LABEL_2;
    }
    v12 = 0LL;
    CGraphWalker<CVectorShape>::GotoParent(a1, &v12);
    if ( !v12 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x34u);
LABEL_16:
  CGraphWalker<CVectorShape>::EndWalk(a1, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
