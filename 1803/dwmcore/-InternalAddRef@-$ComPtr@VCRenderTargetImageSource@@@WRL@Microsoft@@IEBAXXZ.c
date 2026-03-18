/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C2418
 * Callers:
 *     ??4?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000C87C (--4-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CRenderTargetImageSource@@UEAAKXZ @ 0x180089F70 (-AddRef@CRenderTargetImageSource@@UEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalAddRef(CRenderTargetImageSource **a1)
{
  CRenderTargetImageSource *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 8LL);
    if ( (char *)v2 == (char *)CRenderTargetImageSource::AddRef )
      CRenderTargetImageSource::AddRef(v1);
    else
      v2();
  }
}
