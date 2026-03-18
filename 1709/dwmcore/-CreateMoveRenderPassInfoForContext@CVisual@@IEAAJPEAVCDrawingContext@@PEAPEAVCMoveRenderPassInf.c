/*
 * XREFs of ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180176E78
 * Callers:
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180176D3C (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180177FBC (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180054DEC (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x18014DE20 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 *     ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x180178130 (-SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x119Cu);
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
    ++*((_DWORD *)a2 + 1666);
    v13 = (struct CDrawingContext **)*((_QWORD *)a2 + 832);
    if ( *v13 != (struct CDrawingContext *)((char *)a2 + 6648) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)a2 + 6648;
    v7[14] = v13;
    *v13 = v12;
    *((_QWORD *)a2 + 832) = v12;
    *a3 = (struct CMoveRenderPassInfo *)v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1190u);
  }
  return v4;
}
