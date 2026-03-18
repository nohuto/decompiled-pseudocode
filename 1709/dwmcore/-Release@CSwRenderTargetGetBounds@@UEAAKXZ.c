/*
 * XREFs of ?Release@CSwRenderTargetGetBounds@@UEAAKXZ @ 0x18002C740
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ @ 0x1800C6860 (-Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ @ 0x1800C6F90 (-Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@WDA@EAAKXZ @ 0x1800C6FA0 (-Release@CMILBrushBitmap@@WDA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Release(CSwRenderTargetGetBounds *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CSwRenderTargetGetBounds *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
