/*
 * XREFs of ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180020730
 * Callers:
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18002E430 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x18006D0E0 (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x1801AF888 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1801B10F0 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE@gsl@@@Z @ 0x1801B422C (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Map(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct D3D11_MAPPED_SUBRESOURCE *a6)
{
  int v7; // eax
  unsigned int v8; // ebx

  v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, __int64, __int64, _DWORD, struct D3D11_MAPPED_SUBRESOURCE *))(**((_QWORD **)this + 82) + 112LL))(
         *((_QWORD *)this + 82),
         a2,
         a3,
         a4,
         0,
         a6);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB9Au);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v8, 0);
}
