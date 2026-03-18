/*
 * XREFs of ?GetBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x18019C440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18003F7F8 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetBackBuffer(CHwDisplayRenderTarget *this, struct CD3DSurface **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CSwapChainBase *v6; // rcx
  int BackBuffer; // eax

  v4 = -2003304307;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 22) + 48LL))((char *)this - 176) )
  {
    v6 = (CSwapChainBase *)*((_QWORD *)this + 5);
    if ( v6 )
    {
      BackBuffer = CSwapChainBase::GetBackBuffer(v6, v5, a2);
      v4 = BackBuffer;
      if ( BackBuffer < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x3FCu);
    }
  }
  return v4;
}
