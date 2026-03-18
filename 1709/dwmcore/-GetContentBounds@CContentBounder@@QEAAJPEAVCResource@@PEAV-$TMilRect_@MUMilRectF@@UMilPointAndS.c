/*
 * XREFs of ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C9C
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E3F0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D840 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180045DA4 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CContentBounder::GetContentBounds(CContentBounder *this, _QWORD *a2, float *a3)
{
  unsigned int v3; // ebx
  bool (__fastcall *v7)(__int64, int); // rax
  bool v8; // al
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax

  v3 = 0;
  a3[3] = 0.0;
  a3[2] = 0.0;
  a3[1] = 0.0;
  *a3 = 0.0;
  if ( a2 )
  {
    v7 = *(bool (__fastcall **)(__int64, int))(*a2 + 48LL);
    if ( v7 == CRenderData::IsOfType )
      v8 = CRenderData::IsOfType((__int64)a2, 107);
    else
      v8 = v7((__int64)a2, 107);
    if ( v8 )
    {
      v9 = CContentBounder::EnsureDrawingContextFrame(this);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC6u);
      }
      else
      {
        v10 = CRenderData::Draw(a2, *((_QWORD *)this + 1), 1);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC9u);
        }
        else
        {
          v3 = 0;
          *(_OWORD *)a3 = *(_OWORD *)(*((_QWORD *)this + 2) + 52LL);
          if ( a3[2] < *a3 || a3[3] < a3[1] )
            *(_OWORD *)a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        CDrawingContext::EndFrame(*((CDrawingContext **)this + 1), v11, v12);
      }
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xD1u);
    }
  }
  v13 = *((_QWORD *)this + 2);
  if ( v13 )
    *(_OWORD *)(v13 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return v3;
}
