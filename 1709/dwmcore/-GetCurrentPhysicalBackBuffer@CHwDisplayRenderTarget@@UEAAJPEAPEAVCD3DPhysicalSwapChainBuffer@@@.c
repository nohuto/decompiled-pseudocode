/*
 * XREFs of ?GetCurrentPhysicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801AE340
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801B2858 (-GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetCurrentPhysicalBackBuffer(
        CSwapChainBase **this,
        struct CD3DPhysicalSwapChainBuffer **a2)
{
  unsigned int v4; // ebx
  signed int CurrentPhysicalBackBuffer; // eax

  v4 = -2003304307;
  if ( (*((unsigned __int8 (__fastcall **)(char *))*(this - 24) + 4))((char *)this - 192) )
  {
    CurrentPhysicalBackBuffer = CSwapChainBase::GetCurrentPhysicalBackBuffer(this[5], a2);
    v4 = CurrentPhysicalBackBuffer;
    if ( CurrentPhysicalBackBuffer < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentPhysicalBackBuffer, 0x2CCu);
  }
  return v4;
}
