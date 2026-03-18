/*
 * XREFs of ?GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801F2BA4
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1801F31D0 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
        CHDRConversionRenderTarget *this,
        unsigned int *a2,
        unsigned int *a3,
        struct ID3D11ShaderResourceView **a4)
{
  __int64 v7; // rax

  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 76) + 112LL))(*((_QWORD *)this + 76));
  *a2 = *(_DWORD *)(v7 + 140);
  *a3 = *(_DWORD *)(v7 + 144);
  *a4 = (struct ID3D11ShaderResourceView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 120) + 32LL))(v7 + 120);
}
