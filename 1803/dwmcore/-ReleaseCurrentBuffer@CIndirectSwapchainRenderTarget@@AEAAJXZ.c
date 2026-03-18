/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159CC0
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180159850 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18015977C (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0;
  if ( *((_QWORD *)this + 66) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v7, (unsigned int *)&v6);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 520) + 64LL))(
           *(_QWORD *)(v3 + 520),
           (unsigned int)v6,
           v7);
    v6 = v4;
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1CEu);
    }
    else
    {
      *((_WORD *)this + 256) = 0;
      *((_BYTE *)this + 514) = 0;
      *((_DWORD *)this + 126) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 480, 1u);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 16LL))(*((_QWORD *)this + 66));
      *((_QWORD *)this + 66) = 0LL;
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
