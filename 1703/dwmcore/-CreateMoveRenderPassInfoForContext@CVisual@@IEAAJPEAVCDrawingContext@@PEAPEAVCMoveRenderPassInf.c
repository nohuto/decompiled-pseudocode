/*
 * XREFs of ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180160464
 * Callers:
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18012B628 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180161168 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CF70C (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x180158EF0 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 *     ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x180161210 (-SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CVisual::CreateMoveRenderPassInfoForContext(
        CVisual *this,
        struct CDrawingContext *a2,
        struct CMoveRenderPassInfo **a3)
{
  unsigned int v4; // edi
  _QWORD *v7; // rbx
  struct _LIST_ENTRY *RenderPassInfoList; // rsi
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v11; // rcx
  struct CDrawingContext *v12; // rax
  struct CDrawingContext **v13; // rdx

  v4 = 0;
  v7 = operator new(0x78uLL);
  if ( v7 )
  {
    v7[8] = 0LL;
    *v7 = &CMoveRenderPassInfo::`vftable';
    v7[9] = 0LL;
    v7[3] = 0LL;
    v7[4] = 0LL;
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[7] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v7[8] = *((_QWORD *)this + 2);
    v7[9] = this;
    RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
    if ( !RenderPassInfoList )
    {
      v9 = (struct _LIST_ENTRY *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
      RenderPassInfoList = v9;
      if ( !v9 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x114Cu);
        CMoveRenderPassInfo::`scalar deleting destructor'((void **)v7, 1);
        return v4;
      }
      v9->Blink = v9;
      v9->Flink = v9;
      CVisual::SetRenderPassInfoList(this, v9);
    }
    Blink = RenderPassInfoList->Blink;
    v11 = (struct _LIST_ENTRY *)(v7 + 11);
    if ( Blink->Flink != RenderPassInfoList )
      __fastfail(3u);
    v7[12] = Blink;
    v11->Flink = RenderPassInfoList;
    Blink->Flink = v11;
    v12 = (struct CDrawingContext *)(v7 + 13);
    RenderPassInfoList->Blink = v11;
    v7[10] = a2;
    ++*((_DWORD *)a2 + 1650);
    v13 = (struct CDrawingContext **)*((_QWORD *)a2 + 824);
    if ( *v13 != (struct CDrawingContext *)((char *)a2 + 6584) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)a2 + 6584;
    v7[14] = v13;
    *v13 = v12;
    *((_QWORD *)a2 + 824) = v12;
    *a3 = (struct CMoveRenderPassInfo *)v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1140u);
  }
  return v4;
}
