/*
 * XREFs of ?GetHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A0CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x1801A0AC4 (-EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetHDRIntermediateTargetBitmap(
        CHwFullScreenRenderTarget *this,
        struct IRenderTargetBitmap **a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( *((_BYTE *)this + 145) )
  {
    v4 = CHwFullScreenRenderTarget::EnsureHDRIntermediateTargetBitmap((CHwFullScreenRenderTarget *)((char *)this - 176));
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x33Du);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21));
      *a2 = (struct IRenderTargetBitmap *)*((_QWORD *)this + 21);
    }
  }
  else
  {
    v5 = -2003292287;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292287, 0x344u);
  }
  return v5;
}
