/*
 * XREFs of ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18013F330
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18003E988 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014A5BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

__int64 __fastcall CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(CDrawingContext *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  signed int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[64]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+70h] [rbp-38h]
  _BYTE v9[16]; // [rsp+80h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 45) + 48LL))(*((_QWORD *)this + 45), v9);
  v8 = 0;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v7, v2, v3);
  v4 = ClipPlaneIterator::ClipToPolygon((char *)this + 3344, *((_QWORD *)this + 417), v7, v9);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x199Fu);
  return v5;
}
