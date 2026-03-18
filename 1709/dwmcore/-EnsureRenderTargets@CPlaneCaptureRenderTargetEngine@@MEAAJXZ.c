/*
 * XREFs of ?EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ @ 0x180139910
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18013901C (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::EnsureRenderTargets(CPlaneCaptureRenderTargetEngine *this)
{
  signed int v1; // ebx
  signed int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // eax
  signed int v7; // eax
  struct IRenderTargetBitmap *v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0LL;
  if ( !*((_DWORD *)this + 60) )
  {
    v3 = CPlaneCaptureRenderTargetEngine::CreateOverlayableRenderTargetBitmap(this, &v9);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xC1u);
    }
    else
    {
      v4 = (unsigned int)v9;
      v5 = *((unsigned int *)this + 60);
      v6 = v5 + 1;
      if ( (int)v5 + 1 >= (unsigned int)v5 )
        v4 = v5 + 1;
      v1 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
      if ( v6 < (unsigned int)v5 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xB5u);
      }
      else if ( v4 > *((_DWORD *)this + 59) )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 8u, 1, &v9);
        v1 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v5) = v9;
        *((_DWORD *)this + 60) = v4;
      }
      if ( v1 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xC3u);
      else
        v9 = 0LL;
    }
    if ( v1 < 0 )
      COffScreenRenderTarget::ReleaseRenderTargets(this);
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v9);
  return (unsigned int)v1;
}
