/*
 * XREFs of ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18021F6B4
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x1802123E0 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801C24D8 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAX$$QEAVCDepthSortingLayer@@@Z @ 0x18021F2A8 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 *     ??$emplace_back@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAX$$QEAVCVisualDepthGeometry@@@Z @ 0x18021F454 (--$emplace_back@VCVisualDepthGeometry@@@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDep.c)
 *     ?AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z @ 0x18021FE20 (-AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z.c)
 *     ?IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z @ 0x18021FE6C (-IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z.c)
 *     ?MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z @ 0x18021FE88 (-MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z.c)
 */

void __fastcall CDepthSortedVisualCollection::AddVisual(
        CDepthSortedVisualCollection *this,
        struct CVisual *a2,
        struct CMILMatrix *a3)
{
  CVisualDepthGeometry *v4; // rax
  float *v5; // rsi
  __int64 v6; // r8
  float v7; // xmm1_4
  int v8; // r15d
  int v9; // r12d
  float v10; // xmm1_4
  __int64 v11; // r14
  const struct CVisualDepthGeometry *v12; // rdx
  CDepthSortingLayer *v13; // rcx
  float v14; // xmm1_4
  struct CDepthSortingLayer *v15; // rcx
  int v16; // eax
  int v17; // edx
  void *lpMem[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+38h] [rbp-C8h]
  float v21; // [rsp+3Ch] [rbp-C4h]
  int v22; // [rsp+40h] [rbp-C0h]
  char v23[84]; // [rsp+50h] [rbp-B0h] BYREF
  char v24[108]; // [rsp+A4h] [rbp-5Ch] BYREF

  v4 = CVisualDepthGeometry::CVisualDepthGeometry((CVisualDepthGeometry *)v23, a2, a3);
  std::vector<CVisualDepthGeometry>::emplace_back<CVisualDepthGeometry>((_QWORD *)this + 4, v4);
  `vector destructor iterator'(v24, 16LL, 4LL, dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly);
  v5 = (float *)(*((_QWORD *)this + 5) - 192LL);
  *((_DWORD *)v5 + 8) = (*((_DWORD *)this + 10) - *((_DWORD *)this + 8)) / 192 - 1;
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)this + 1) )
  {
    v7 = v5[7];
    v19 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    v22 = -1;
    v20 = *((_DWORD *)v5 + 6);
    v21 = v7;
    std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)lpMem);
    if ( lpMem[0] )
      std::_Deallocate((char *)lpMem[0], (signed __int64)(v19 - (unsigned __int64)lpMem[0]) >> 2, 4uLL);
    CDepthSortingLayer::AddVisual(
      (CDepthSortingLayer *)(*((_QWORD *)this + 1) - 40LL),
      (const struct CVisualDepthGeometry *)v5);
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    v8 = *((_DWORD *)this + 6);
    v9 = -1;
    if ( v8 == -1 )
    {
LABEL_10:
      v14 = v5[7];
      v19 = 0LL;
      *(_OWORD *)lpMem = 0LL;
      v22 = -1;
      v20 = *((_DWORD *)v5 + 6);
      v21 = v14;
      std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)lpMem);
      if ( lpMem[0] )
        std::_Deallocate((char *)lpMem[0], (signed __int64)(v19 - (unsigned __int64)lpMem[0]) >> 2, 4uLL);
      CDepthSortingLayer::AddVisual(
        (CDepthSortingLayer *)(*((_QWORD *)this + 1) - 40LL),
        (const struct CVisualDepthGeometry *)v5);
      *(_DWORD *)(*(_QWORD *)this + 40LL * v9 + 32) = (*((_DWORD *)this + 2) - *(_DWORD *)this) / 40 - 1;
    }
    else
    {
      v10 = v5[7];
      while ( 1 )
      {
        v11 = v6 + 40LL * v8;
        if ( *(float *)(v11 + 24) > v10 )
          break;
        if ( CDepthSortingLayer::IsOverlappingInZ(
               (CDepthSortingLayer *)(v6 + 40LL * v8),
               (const struct CVisualDepthGeometry *)v5) )
        {
          CDepthSortingLayer::AddVisual(v13, v12);
          while ( 1 )
          {
            v16 = *(_DWORD *)(v11 + 32);
            if ( v16 == -1
              || !CDepthSortingLayer::IsOverlappingInZ(
                    (CDepthSortingLayer *)(*(_QWORD *)this + 40LL * v16),
                    (const struct CVisualDepthGeometry *)v5) )
            {
              break;
            }
            CDepthSortingLayer::MergeWith((CDepthSortingLayer *)v11, v15);
          }
          return;
        }
        v9 = v8;
        v8 = *(_DWORD *)(v11 + 32);
        if ( v8 == -1 )
          goto LABEL_10;
      }
      v19 = 0LL;
      v21 = v10;
      *(_OWORD *)lpMem = 0LL;
      v22 = -1;
      v20 = *((_DWORD *)v5 + 6);
      std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)lpMem);
      if ( lpMem[0] )
        std::_Deallocate((char *)lpMem[0], (signed __int64)(v19 - (unsigned __int64)lpMem[0]) >> 2, 4uLL);
      *(_DWORD *)(*((_QWORD *)this + 1) - 8LL) = v8;
      v17 = (*((_DWORD *)this + 2) - *(_DWORD *)this) / 40 - 1;
      if ( v9 == -1 )
        *((_DWORD *)this + 6) = v17;
      else
        *(_DWORD *)(*(_QWORD *)this + 40LL * v9 + 32) = v17;
      CDepthSortingLayer::AddVisual(
        (CDepthSortingLayer *)(*(_QWORD *)this + 40LL * v8),
        (const struct CVisualDepthGeometry *)v5);
    }
  }
}
