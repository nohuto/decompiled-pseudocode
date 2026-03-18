/*
 * XREFs of ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18014E30C
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801566BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

__int64 __fastcall CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(CDrawingContext *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _BYTE v5[64]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+70h] [rbp-38h]
  _BYTE v7[16]; // [rsp+80h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 46) + 64LL))(*((_QWORD *)this + 46), v7);
  v6 = 0;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 472), (struct CMILMatrix *)v5);
  v2 = ClipPlaneIterator::ClipToPolygon((char *)this + 3248, *((_QWORD *)this + 405), v5, v7);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1BD7u);
  return v3;
}
