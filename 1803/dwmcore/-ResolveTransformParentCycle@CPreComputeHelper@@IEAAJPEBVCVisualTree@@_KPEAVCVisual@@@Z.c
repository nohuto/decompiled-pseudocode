/*
 * XREFs of ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x180212924
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000A980 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18000B384 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004CB4C (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800BFE40 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x1801409E8 (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x180212750 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 */

__int64 __fastcall CPreComputeHelper::ResolveTransformParentCycle(
        CPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct _LIST_ENTRY *a3,
        struct CVisual *a4)
{
  unsigned int v4; // ebx
  int *v5; // rsi
  int v9; // eax
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v11; // r10
  CPreComputeHelper *v12; // rcx
  CVisual *v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (int *)((char *)this + 8);
  v14 = 0LL;
  while ( *v5 )
  {
    v9 = CWatermarkStack<CVisual *,64,2,10>::Top(v5, &v14);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x14Au);
      return v4;
    }
    if ( CVisual::GetTransformParentNoRef(v14) )
    {
      CVisual::FindTreeData(v14, a2);
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v14);
      LOBYTE(v12) = *(_BYTE *)(v11 + 16) & 0xF7;
      *(_BYTE *)(v11 + 16) = (_BYTE)v12;
      if ( *((_BYTE *)TransformParentDataInternal + 8) )
      {
        if ( ((unsigned __int8)v12 & 4) == 0 || *(struct _LIST_ENTRY **)(v11 + 216) != a3 )
          CPreComputeHelper::InvalidateVisual(v12, v14, a2, a3);
        if ( a4 == v14 )
          return v4;
      }
    }
    CWatermarkStack<CVisual *,64,2,10>::Pop(v5, 0LL);
  }
  return v4;
}
