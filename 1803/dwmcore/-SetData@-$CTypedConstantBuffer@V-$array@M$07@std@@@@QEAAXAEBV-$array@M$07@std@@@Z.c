/*
 * XREFs of ?SetData@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAXAEBV?$array@M$07@std@@@Z @ 0x18021BC40
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 */

int __fastcall CTypedConstantBuffer<std::array<float,8>>::SetData(__int64 a1, _OWORD *a2)
{
  int result; // eax
  __int128 v5; // xmm1

  result = memcmp_0(a2, (const void *)(a1 + 16), 0x20uLL);
  if ( result )
  {
    *(_OWORD *)(a1 + 16) = *a2;
    v5 = a2[1];
    *(_BYTE *)(a1 + 8) = 1;
    *(_OWORD *)(a1 + 32) = v5;
  }
  return result;
}
