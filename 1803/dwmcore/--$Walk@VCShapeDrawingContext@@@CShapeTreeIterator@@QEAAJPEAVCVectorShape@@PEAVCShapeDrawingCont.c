/*
 * XREFs of ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18020FDB0
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x1802103C8 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802104D0 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 *     ?GotoSibling@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802105A8 (-GotoSibling@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVectorS.c)
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180210840 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x180212D28 (-GotoParent@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeDrawingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  _QWORD *v9; // rcx
  int v10; // eax
  bool v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  while ( 1 )
  {
LABEL_2:
    v6 = CShapeDrawingContext::PreSubgraph((CShapeDrawingContext *)a3, &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x24u);
      goto LABEL_16;
    }
    if ( !v12 )
      break;
    v13 = 0LL;
    v8 = CGraphWalker<CVectorShape>::GotoFirstChild(a1, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x29u);
      goto LABEL_16;
    }
    if ( !v13 )
      goto LABEL_6;
  }
  while ( 1 )
  {
LABEL_6:
    v9 = *(_QWORD **)(a3 + 8);
    if ( v9[7] )
    {
      --*(_DWORD *)(a3 + 88);
      *(_BYTE *)(a3 + 536) = 1;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v9 + 48LL))(v9, 137LL) )
        *(_BYTE *)(a3 + 537) = 1;
    }
    v13 = 0LL;
    v10 = CGraphWalker<CVectorShape>::GotoSibling(a1, &v13);
    v7 = v10;
    if ( v10 < 0 )
      break;
    if ( v13 )
      goto LABEL_2;
    v13 = 0LL;
    CGraphWalker<CVectorShape>::GotoParent(a1, &v13);
    if ( !v13 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x39u);
LABEL_16:
  CGraphWalker<CVectorShape>::EndWalk(a1, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v3;
}
