/*
 * XREFs of ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x180135DAC
 * Callers:
 *     ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x180019650 (-PreRender@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureDirtyRegion(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 17) )
  {
    if ( *((_QWORD *)this + 10) )
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), v5);
      v3 = CVisualTree::PreCompute(*((CVisualTree **)this + 10));
      v1 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xA70u);
    }
    else
    {
      v1 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0xA76u);
    }
  }
  return v1;
}
