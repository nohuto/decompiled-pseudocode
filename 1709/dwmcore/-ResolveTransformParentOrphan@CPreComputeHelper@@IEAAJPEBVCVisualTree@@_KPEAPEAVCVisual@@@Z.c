/*
 * XREFs of ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x1801D05D4
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x1800B06F0 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800B1154 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x18011DE70 (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801D0324 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 */

__int64 __fastcall CPreComputeHelper::ResolveTransformParentOrphan(
        CPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct _LIST_ENTRY *a3,
        struct CVisual **a4)
{
  unsigned int v4; // ebx
  int *v5; // rsi
  signed int v9; // eax
  CVisual *v10; // rdi
  struct TransformParentData *TransformParentDataInternal; // rax
  CPreComputeHelper *v12; // rcx
  __int64 v13; // r10
  CVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (int *)((char *)this + 8);
  v15 = 0LL;
  *a4 = 0LL;
  while ( *v5 )
  {
    v9 = CWatermarkStack<CVisual *,64,2,10>::Top(v5, &v15);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x134u);
      return v4;
    }
    v10 = v15;
    if ( (*(_DWORD *)(*((_QWORD *)v15 + 26) + 4LL) & 0x10000000) != 0 )
    {
      CVisual::FindTreeData(v15, a2);
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v10);
      *(_BYTE *)(v13 + 16) &= ~8u;
      if ( *((_BYTE *)TransformParentDataInternal + 8) )
      {
        if ( (*(_BYTE *)(v13 + 16) & 4) == 0 || *(struct _LIST_ENTRY **)(v13 + 216) != a3 )
        {
          CPreComputeHelper::InvalidateVisual(v12, v10, a2, a3);
          *a4 = v10;
          return v4;
        }
      }
    }
    CWatermarkStack<CVisual *,64,2,10>::Pop(v5, 0LL);
  }
  return v4;
}
