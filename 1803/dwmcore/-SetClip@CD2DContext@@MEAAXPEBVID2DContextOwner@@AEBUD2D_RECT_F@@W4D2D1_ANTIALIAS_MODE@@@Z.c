/*
 * XREFs of ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180096530
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?QueueForRender@CHWCallbackRenderer@@QEAAXIPEAVIRenderTarget@@@Z @ 0x180059CA4 (-QueueForRender@CHWCallbackRenderer@@QEAAXIPEAVIRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180095BF0 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C3D28 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v4; // edx
  __int64 v5; // rsi
  __int64 v9; // rdx
  bool v10; // zf
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rcx
  int v20; // eax
  __int128 v21; // [rsp+38h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-30h]
  int v23; // [rsp+4Ch] [rbp-2Ch]

  v4 = *((_DWORD *)this + 86);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 464)
    || *((_BYTE *)this + 466)
    || a4 != *((_DWORD *)this + 102)
    || a3->left != *((float *)this + 98)
    || a3->top != *((float *)this + 99)
    || a3->right != *((float *)this + 100)
    || a3->bottom != *((float *)this + 101) )
  {
    if ( *((_QWORD *)this + 56) )
    {
      v16 = 0LL;
      if ( v4 )
        v16 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v4 - 1));
      CHWCallbackRenderer::QueueForRender(
        *((CHWCallbackRenderer **)this + 56),
        *((_DWORD *)this + 8),
        *(struct IRenderTarget **)(v16 + 24));
      v17 = *((_QWORD *)this + 56);
      CD2DContext::EnsureBeginDraw(this);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 120LL))(*((_QWORD *)this + 23), v17);
      v18 = *((_QWORD *)this + 56);
      if ( v18 )
      {
        v19 = (volatile signed __int32 *)(v18 + 8);
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 && v19 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 16LL))(v19, 1LL);
        *((_QWORD *)this + 56) = 0LL;
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 57);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 44) = *((_DWORD *)this + 8);
        *(_OWORD *)(v9 + 48) = *(_OWORD *)((char *)this + 424);
        *(_DWORD *)(v9 + 64) = *((_DWORD *)this + 110);
        *(_BYTE *)(v9 + 68) = 1;
        v20 = CD2DContext::DrawCustomCallbackRendererInternal(
                this,
                *((struct ID2D1PrivateCompositorRenderer **)this + 57));
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x331u);
        else
          ReleaseInterface<CWARPCallbackRenderer>((char *)this + 456);
      }
    }
    v10 = *(_BYTE *)(v5 + 48) == 0;
    v11 = (__int128)*a3;
    *(_DWORD *)(v5 + 76) = a4;
    *(_OWORD *)(v5 + 60) = v11;
    if ( !v10 )
    {
      v12 = *(_QWORD *)(v5 + 16);
      v22 = 0;
      v23 = 0;
      v13 = *(_QWORD *)(v12 + 176);
      v21 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 240LL))(v13, &v21);
      v14 = *(_QWORD *)(v12 + 184);
      *(_BYTE *)(v12 + 466) = 0;
      v15 = *(_OWORD *)(v5 + 60);
      *(_DWORD *)(v12 + 408) = a4;
      *(_OWORD *)(v12 + 392) = v15;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, v5 + 60, a4);
    }
    *(_BYTE *)(v5 + 56) = 1;
  }
}
