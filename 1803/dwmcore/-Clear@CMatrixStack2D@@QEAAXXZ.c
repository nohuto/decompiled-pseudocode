/*
 * XREFs of ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1802225D4
 * Callers:
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1802100FC (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CMatrixStack2D::Clear(CMatrixStack2D *this)
{
  __int64 v1; // rax
  int v2; // eax
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  *((_DWORD *)this + 6) = 0;
  v4 = 0LL;
  v3 = _xmm;
  if ( *((_DWORD *)this + 5) )
  {
    v1 = *(_QWORD *)this;
    *(_OWORD *)v1 = _xmm;
    *(_QWORD *)(v1 + 16) = v4;
    *((_DWORD *)this + 6) = 1;
  }
  else
  {
    v2 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x18u, 1, &v3);
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xC0u);
  }
}
