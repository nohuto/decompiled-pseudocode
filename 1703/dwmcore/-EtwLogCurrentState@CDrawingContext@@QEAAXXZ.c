/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18000F62C
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_ppffffcbq @ 0x18014E488 (Template_ppffffcbq.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this, __int64 a2)
{
  struct CVisual *CurrentVisual; // rax
  unsigned int v4; // eax
  int v5; // edx
  int v6; // ecx
  _BYTE v7[64]; // [rsp+60h] [rbp-78h] BYREF
  int v8; // [rsp+A0h] [rbp-38h]
  int v9; // [rsp+B0h] [rbp-28h] BYREF
  int v10; // [rsp+B4h] [rbp-24h]
  int v11; // [rsp+B8h] [rbp-20h]
  int v12; // [rsp+BCh] [rbp-1Ch]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
  {
    v8 = 0;
    if ( ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 102) + 8LL * (unsigned int)(*((_DWORD *)this + 210) - 1)) + 32LL)
         + 1) & 0xFFFFFFFE) == 0
      && CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8)) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)CurrentVisual + 96LL))(CurrentVisual);
    }
    LOBYTE(a2) = 1;
    CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, a2, &v9);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 472), (struct CMILMatrix *)v7);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v4 = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
      Template_ppffffcbq(v6, v5, (_DWORD)this, v4, v9, v10, v11, v12);
    }
  }
}
