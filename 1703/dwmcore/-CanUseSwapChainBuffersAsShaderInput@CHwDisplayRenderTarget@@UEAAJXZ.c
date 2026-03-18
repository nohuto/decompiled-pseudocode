/*
 * XREFs of ?CanUseSwapChainBuffersAsShaderInput@CHwDisplayRenderTarget@@UEAAJXZ @ 0x180022DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x180079884 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CanUseSwapChainBuffersAsShaderInput(CD3DDeviceLevel1 **this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(char *))*(this - 22) + 6))((char *)this - 176) )
  {
    if ( !CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(this[1]) )
    {
      v2 = -2003292287;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292287, 0x40Fu);
    }
  }
  else
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x40Au);
  }
  return v2;
}
