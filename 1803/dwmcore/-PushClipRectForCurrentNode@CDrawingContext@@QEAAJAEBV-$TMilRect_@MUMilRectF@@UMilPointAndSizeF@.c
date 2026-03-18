/*
 * XREFs of ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180161E8C
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800640D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B500 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B270 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18014018C (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 */

__int64 __fastcall CDrawingContext::PushClipRectForCurrentNode(
        const struct CVisualTree **this,
        struct MilRectF *a2,
        _BYTE *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  struct CRectanglesShape *v7; // rcx
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v9; // rax
  int v10; // r8d
  CRectanglesShape *v11; // rbx
  unsigned int v12; // ebx
  struct _LIST_ENTRY *Blink; // r8
  int v14; // eax
  CRectanglesShape *v16; // [rsp+38h] [rbp-69h] BYREF
  char v17; // [rsp+40h] [rbp-61h]
  CVisual *v18[11]; // [rsp+48h] [rbp-59h] BYREF
  _OWORD v19[4]; // [rsp+A4h] [rbp+3h] BYREF
  int v20; // [rsp+E4h] [rbp+43h]
  char v21; // [rsp+ECh] [rbp+4Bh]

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)v18);
  v18[0] = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  v21 = 1;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
  v16 = 0LL;
  v17 = 0;
  v19[0] = *(_OWORD *)TopByReference;
  v19[1] = *((_OWORD *)TopByReference + 1);
  v19[2] = *((_OWORD *)TopByReference + 2);
  v19[3] = *((_OWORD *)TopByReference + 3);
  v20 = *((_DWORD *)TopByReference + 16);
  ObjectCache = CThreadContext::GetObjectCache(v7);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = (CRectanglesShape *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
    v11 = CRectanglesShape::CRectanglesShape(v9, a2);
  else
    v11 = 0LL;
  CShapePtr::Release(&v16);
  v16 = v11;
  v17 = 1;
  if ( v11 )
  {
    if ( *((_BYTE *)this[126] + 80 * (unsigned int)(*((_DWORD *)this + 258) - 1)) )
      Blink = CVisual::FindTreeData(v18[0], this[816])[9].Blink;
    else
      Blink = (struct _LIST_ENTRY *)v19;
    v14 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
            (CDrawingContext *)this,
            &v16,
            (__int64)Blink,
            0LL,
            (__int64)v18,
            a3);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1367u);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1356u);
  }
  CShapePtr::Release(&v16);
  return v12;
}
