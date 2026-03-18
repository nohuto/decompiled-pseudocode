/*
 * XREFs of ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x1801EDF14
 * Callers:
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x1801E57F8 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x18007521C (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180075234 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CD3DConstantBuffer::SetData(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v9; // [rsp+30h] [rbp-18h] BYREF

  v4 = CD3DDeviceLevel1::Map(
         *(CD3DDeviceLevel1 **)(*(_QWORD *)(a1 + 16) + 80LL),
         *(struct ID3D11Resource **)(a1 + 120),
         0LL,
         4LL,
         v8,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x48u);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 128);
    if ( v6 >= *a2 )
      v6 = *a2;
    memcpy_0(v9.pData, *((const void **)a2 + 1), v6);
    CD3DDeviceLevel1::Unmap(*(CD3DDeviceLevel1 **)(*(_QWORD *)(a1 + 16) + 80LL), *(struct ID3D11Resource **)(a1 + 120));
  }
  return v5;
}
