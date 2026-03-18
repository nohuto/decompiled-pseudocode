/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x1800407E0
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180027B58 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppffffcbq @ 0x18013F668 (McTemplateU0ppffffcbq.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  unsigned int v3; // eax
  int v4; // edx
  int v5; // ecx
  _BYTE v6[64]; // [rsp+60h] [rbp-78h] BYREF
  int v7; // [rsp+A0h] [rbp-38h]
  int v8; // [rsp+B0h] [rbp-28h]
  int v9; // [rsp+B4h] [rbp-24h]
  int v10; // [rsp+B8h] [rbp-20h]
  int v11; // [rsp+BCh] [rbp-1Ch]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
  {
    v7 = 0;
    if ( ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 114) + 8LL * (unsigned int)(*((_DWORD *)this + 234) - 1)) + 128LL)
         + 1) & 0xFFFFFFFE) == 0
      && CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8)) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)CurrentVisual + 104LL))(CurrentVisual);
    }
    CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v6);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v3 = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
      McTemplateU0ppffffcbq(v5, v4, (_DWORD)this, v3, v8, v9, v10, v11);
    }
  }
}
