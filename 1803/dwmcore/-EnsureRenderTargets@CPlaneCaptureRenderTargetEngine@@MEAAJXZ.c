/*
 * XREFs of ?EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ @ 0x18015BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015B6E8 (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::EnsureRenderTargets(struct _LUID *this)
{
  int v1; // ebx
  int v3; // eax
  unsigned int LowPart; // eax
  unsigned int v5; // edx
  int v6; // eax
  struct IRenderTargetBitmap *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( !this[37].LowPart )
  {
    v3 = CPlaneCaptureRenderTargetEngine::CreateOverlayableRenderTargetBitmap(this, &v8);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC2u);
    }
    else
    {
      LowPart = this[37].LowPart;
      v5 = LowPart + 1;
      v1 = LowPart + 1 < LowPart ? 0x80070216 : 0;
      if ( LowPart + 1 < LowPart )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xB5u);
      }
      else if ( v5 > this[36].HighPart )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[34], 8u, 1, &v8);
        v1 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)&this[34] + 8LL * LowPart) = v8;
        this[37].LowPart = v5;
      }
      if ( v1 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xC4u);
      else
        v8 = 0LL;
    }
    if ( v1 < 0 )
      COffScreenRenderTarget::ReleaseRenderTargets((COffScreenRenderTarget *)this);
  }
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)&v8);
  return (unsigned int)v1;
}
