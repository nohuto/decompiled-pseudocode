/*
 * XREFs of ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137B88
 * Callers:
 *     ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N0@Z @ 0x180137350 (-PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N0@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180137960 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180136EE0 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::TryTargetNextBuffer(CIndirectSwapchainRenderTarget *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  signed int RenderTargetForAcquiredBuffer; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  *((_BYTE *)this + 456) &= ~8u;
  v2 = *((_QWORD *)this + 58);
  v3 = 0;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v2 + 56LL))(v2, 0LL, (char *)this + 472);
    v7 = v4;
    if ( v4 >= 0 )
    {
      RenderTargetForAcquiredBuffer = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer((struct _LUID *)this);
      v3 = RenderTargetForAcquiredBuffer;
      if ( RenderTargetForAcquiredBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetForAcquiredBuffer, 0x1C5u);
    }
    else
    {
      TranslateDXGIorD3DErrorInContext(v4, 0, &v7);
      v3 = v7;
      if ( v7 == -2005270490 )
      {
        CIndirectSwapchainRenderTarget::Unregister(this);
        return 0;
      }
      if ( v7 == -2147483638 )
      {
        *((_BYTE *)this + 456) |= 8u;
        v3 = 0;
      }
    }
    if ( v3 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
  }
  return v3;
}
