/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008B8B4
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008B158 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??4?$ComPtr@VIRenderTargetDisplay@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetDisplay@@@Z @ 0x1800BDDF8 (--4-$ComPtr@VIRenderTargetDisplay@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IRenderTargetDisplay *a2)
{
  signed int v4; // eax
  int v5; // ebx
  struct IRenderTargetDisplay *v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 480LL))(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x5Au);
  }
  else
  {
    v7 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v7);
    v7 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = a2;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v7);
    Microsoft::WRL::ComPtr<IRenderTargetDisplay>::operator=((char *)this + 168, a2);
  }
  if ( v5 < 0 )
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  return (unsigned int)v5;
}
