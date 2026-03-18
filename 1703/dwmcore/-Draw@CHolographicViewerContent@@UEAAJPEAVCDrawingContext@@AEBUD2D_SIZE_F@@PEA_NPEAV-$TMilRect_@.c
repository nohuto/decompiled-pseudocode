/*
 * XREFs of ?Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5190
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D99C (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawHolographicViewerContent@CDrawingContext@@QEAAJPEAVCHolographicViewerContent@@@Z @ 0x18014B6E8 (-DrawHolographicViewerContent@CDrawingContext@@QEAAJPEAVCHolographicViewerContent@@@Z.c)
 *     ?CacheFrame@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A4F70 (-CacheFrame@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z.c)
 *     ?CreateRenderTarget@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A5064 (-CreateRenderTarget@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z.c)
 *     ?EnsureCache@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A533C (-EnsureCache@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z.c)
 *     ?EnsureSourceBounds@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A5490 (-EnsureSourceBounds@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CHolographicViewerContent::Draw(CHolographicViewerContent *this, CDrawingContext *a2)
{
  int v3; // esi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  struct ID3D11Texture2D *v8; // rdx
  int RenderTarget; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  struct IDXGIResource *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v15 = 0LL;
  if ( IsRectEmptyOrInvalid((float *)this + 26) )
    return (unsigned int)v3;
  AcquireSRWLockExclusive((PSRWLOCK)this + 17);
  if ( *((_DWORD *)this + 37) == *((_DWORD *)this + 36) )
  {
    ++*((_DWORD *)this + 39);
LABEL_17:
    if ( *((_QWORD *)this + 12) )
    {
      v13 = CDrawingContext::DrawHolographicViewerContent(a2, this);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x100u);
    }
    goto LABEL_20;
  }
  v5 = *((_QWORD *)this + 10);
  if ( !v5 )
    goto LABEL_17;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IDXGIResource **))(*(_QWORD *)v5 + 56LL))(v5, 0LL, &v15);
  if ( v3 < 0 )
    goto LABEL_15;
  if ( *((_QWORD *)this + 12) )
    goto LABEL_13;
  v6 = CHolographicViewerContent::EnsureSourceBounds(this, v15);
  v3 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE8u);
    goto LABEL_20;
  }
  v7 = CHolographicViewerContent::EnsureCache(this, v15);
  v3 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xE9u);
    goto LABEL_20;
  }
  RenderTarget = CHolographicViewerContent::CreateRenderTarget(this, v8);
  v3 = RenderTarget;
  if ( RenderTarget >= 0 )
  {
LABEL_13:
    v10 = CHolographicViewerContent::CacheFrame(this, v15);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xEEu);
      goto LABEL_20;
    }
    v11 = *((_DWORD *)this + 36);
    v12 = v11 - *((_DWORD *)this + 37);
    ++*((_DWORD *)this + 38);
    *((_DWORD *)this + 40) += v12 - 1;
    *((_DWORD *)this + 37) = v11;
LABEL_15:
    if ( v3 == -2147483638 )
    {
      ++*((_DWORD *)this + 39);
      v3 = 0;
    }
    goto LABEL_17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTarget, 0xEAu);
LABEL_20:
  ReleaseSRWLockExclusive((PSRWLOCK)this + 17);
  if ( v15 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 64LL))(
           *((_QWORD *)this + 10),
           0LL,
           0LL);
  if ( v3 < 0 )
    ++*((_DWORD *)this + 41);
  return (unsigned int)v3;
}
