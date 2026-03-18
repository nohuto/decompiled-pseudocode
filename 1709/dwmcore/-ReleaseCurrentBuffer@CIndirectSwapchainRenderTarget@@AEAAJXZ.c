/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013782C
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180137420 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1801372F4 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  signed int v4; // eax
  signed int v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0;
  if ( *((_QWORD *)this + 59) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v7, (unsigned int *)&v6);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 464) + 64LL))(
           *(_QWORD *)(v3 + 464),
           (unsigned int)v6,
           v7);
    v6 = v4;
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x1DEu);
    }
    else
    {
      *((_BYTE *)this + 456) &= 0xF8u;
      *((_DWORD *)this + 112) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 424, 1u);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 16LL))(*((_QWORD *)this + 59));
      *((_QWORD *)this + 59) = 0LL;
    }
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( v1 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v1, 0, &v6);
    v1 = v6;
    if ( v6 == -2005270490 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
      return 0;
    }
    else if ( v6 == -2003304307 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
    }
  }
  return (unsigned int)v1;
}
