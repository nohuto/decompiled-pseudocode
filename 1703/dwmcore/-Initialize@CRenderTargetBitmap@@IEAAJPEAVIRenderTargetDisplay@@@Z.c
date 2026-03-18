/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180047358
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800474A8 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IRenderTargetDisplay *a2)
{
  int v4; // eax
  int v5; // esi
  struct IRenderTargetDisplay *v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 464LL))(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x5Bu);
  }
  else
  {
    v7 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v7);
    v7 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = a2;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v7);
    if ( *((struct IRenderTargetDisplay **)this + 17) != a2 )
    {
      (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = a2;
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v7);
    }
  }
  if ( v5 < 0 )
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  return (unsigned int)v5;
}
