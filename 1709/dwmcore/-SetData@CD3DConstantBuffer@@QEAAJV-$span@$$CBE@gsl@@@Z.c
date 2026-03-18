/*
 * XREFs of ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE@gsl@@@Z @ 0x1801B422C
 * Callers:
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE@gsl@@I@Z @ 0x1801AB988 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE@gsl@@I@Z.c)
 * Callees:
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180020718 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180020730 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CD3DConstantBuffer::SetData(__int64 a1, __int64 a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  bool v6; // cf
  unsigned int *v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = CD3DDeviceLevel1::Map(
         *(CD3DDeviceLevel1 **)(*(_QWORD *)(a1 + 16) + 80LL),
         *(struct ID3D11Resource **)(a1 + 120),
         0LL,
         4LL,
         v9,
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x48u);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 128) < *(_DWORD *)(a2 + 8);
    v7 = (unsigned int *)&v11;
    v11 = *(_DWORD *)(a2 + 8);
    if ( v6 )
      v7 = (unsigned int *)(a1 + 128);
    memcpy_0(v10.pData, *(const void **)a2, *v7);
    CD3DDeviceLevel1::Unmap(*(CD3DDeviceLevel1 **)(*(_QWORD *)(a1 + 16) + 80LL), *(struct ID3D11Resource **)(a1 + 120));
  }
  return v5;
}
