/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800A06F0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004FD08 (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18009F7DC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180190AFC (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionSpotLight::IsValid(CCompositionSpotLight *this, const struct CVisualTree *a2, CVisual **a3)
{
  CVisual *v5; // rax
  char v6; // bl
  CVisual **v7; // rbp
  struct _LIST_ENTRY *v8; // rdi
  signed int v9; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  _OWORD v18[4]; // [rsp+30h] [rbp-58h] BYREF
  int Blink; // [rsp+70h] [rbp-18h]

  v5 = (CVisual *)(*(__int64 (__fastcall **)(CCompositionSpotLight *))(*(_QWORD *)this + 168LL))(this);
  v6 = 0;
  v7 = (CVisual **)v5;
  if ( v5 )
  {
    if ( *((_BYTE *)a2 + 32) )
    {
      v8 = (struct _LIST_ENTRY *)((char *)v5 + 280);
LABEL_4:
      if ( v8 )
      {
        v9 = CVisual::EnsureWorldTransform(v7, a2, (struct CTreeData *)v8);
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x59Bu);
        }
        else if ( v8[7].Blink )
        {
          v11 = *(_OWORD *)&v8[3].Blink;
          v12 = *(_OWORD *)&v8[2].Blink;
          Blink = (int)v8[6].Blink;
          v18[1] = v11;
          v13 = *(_OWORD *)&v8[5].Blink;
          v18[0] = v12;
          v14 = *(_OWORD *)&v8[4].Blink;
          v18[3] = v13;
          v18[2] = v14;
          *(float *)&v14 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v18, v10);
          if ( CMILMatrix::IsInvertibleDeterminant(*(float *)&v14) )
          {
            while ( a3 )
            {
              if ( a3 == v7 )
                return 1;
              a3 = (CVisual **)a3[10];
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x70u);
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x5A2u);
        }
      }
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v5);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          v8 = i - 14;
          if ( (const struct CVisualTree *)i[2].Flink == a2 )
            goto LABEL_4;
        }
      }
    }
  }
  return v6;
}
