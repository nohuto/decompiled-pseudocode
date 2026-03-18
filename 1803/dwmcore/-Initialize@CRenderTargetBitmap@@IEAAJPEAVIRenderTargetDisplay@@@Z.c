/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008A7C4
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008A0FC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IRenderTargetDisplay *a2)
{
  int v4; // eax
  int v5; // ebx
  char v7; // [rsp+48h] [rbp+10h] BYREF
  struct IRenderTargetDisplay *v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, char *))(*(_QWORD *)a2 + 528LL))(a2, &v7);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Bu);
  }
  else
  {
    if ( !v7 )
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5Eu);
      goto LABEL_8;
    }
    v8 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v8);
    v8 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = a2;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v8);
    if ( *((struct IRenderTargetDisplay **)this + 21) != a2 )
    {
      (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = a2;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v8);
    }
  }
  if ( v5 < 0 )
LABEL_8:
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  return (unsigned int)v5;
}
