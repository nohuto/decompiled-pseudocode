/*
 * XREFs of ?IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1800DD20C
 * Callers:
 *     ?GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z @ 0x180076954 (-GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z.c)
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA_NXZ @ 0x1801F19A0 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CComputeScribbleRenderer::IsGPUWhitelisted(const struct CD3DDeviceLevel1 *a1)
{
  char v1; // dl

  v1 = 0;
  if ( CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist || *(_DWORD *)(*((_QWORD *)a1 + 89) + 296LL) == 32902 )
    return 1;
  return v1;
}
