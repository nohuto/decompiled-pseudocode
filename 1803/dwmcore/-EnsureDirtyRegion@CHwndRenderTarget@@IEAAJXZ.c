/*
 * XREFs of ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x180158678
 * Callers:
 *     ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x180061B70 (-PreRender@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureDirtyRegion(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 24) )
  {
    if ( *((_QWORD *)this + 15) )
    {
      (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 22) + 48LL))(*((_QWORD *)this + 22), &v5);
      v3 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 15), &v5);
      v1 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xA31u);
    }
    else
    {
      v1 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xA37u);
    }
  }
  return v1;
}
