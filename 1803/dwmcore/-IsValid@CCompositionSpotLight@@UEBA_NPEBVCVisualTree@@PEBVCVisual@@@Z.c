/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000DED0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB230 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18000DFF8 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180041280 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004DB60 (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801C77C4 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionSpotLight::IsValid(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  const struct CVisual *v5; // rdi
  struct _LIST_ENTRY *v6; // rsi
  int v7; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  _OWORD v16[4]; // [rsp+30h] [rbp-58h] BYREF
  int Blink; // [rsp+70h] [rbp-18h]

  v5 = (const struct CVisual *)(*(__int64 (__fastcall **)(CCompositionSpotLight *))(*(_QWORD *)this + 168LL))(this);
  if ( !CVisualTree::IsInTree(a2, v5) )
    return 0;
  if ( *((_BYTE *)a2 + 32) )
  {
    v6 = (struct _LIST_ENTRY *)((char *)v5 + 288);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v5);
    if ( !TreeDataListHead )
      return 0;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      return 0;
    while ( 1 )
    {
      v6 = Flink - 14;
      if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        return 0;
    }
  }
  if ( !v6 )
    return 0;
  v7 = CVisual::EnsureWorldTransform(v5, a2, (struct CTreeData *)v6);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x616u);
    return 0;
  }
  if ( !v6[7].Blink )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x61Du);
    return 0;
  }
  v9 = *(_OWORD *)&v6[3].Blink;
  v10 = *(_OWORD *)&v6[2].Blink;
  Blink = (int)v6[6].Blink;
  v16[1] = v9;
  v11 = *(_OWORD *)&v6[5].Blink;
  v16[0] = v10;
  v12 = *(_OWORD *)&v6[4].Blink;
  v16[3] = v11;
  v16[2] = v12;
  *(float *)&v12 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v16, v8);
  if ( !CMILMatrix::IsInvertibleDeterminant(*(float *)&v12) || !a3 )
    return 0;
  while ( a3 != v5 )
  {
    a3 = (const struct CVisual *)*((_QWORD *)a3 + 10);
    if ( !a3 )
      return 0;
  }
  return 1;
}
