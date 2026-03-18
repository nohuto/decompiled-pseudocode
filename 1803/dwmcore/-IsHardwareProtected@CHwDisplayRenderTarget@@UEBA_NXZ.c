/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046E90
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@WNI@EBA_NXZ @ 0x1800DE330 (-IsHardwareProtected@CHwDisplayRenderTarget@@WNI@EBA_NXZ.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ @ 0x18007CC20 (-IsHardwareProtected@CDWMSwapChain@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::IsHardwareProtected(CDWMSwapChain **this)
{
  char v2; // bl
  __int64 (*v3)(void); // rax
  char IsValid; // al
  CDWMSwapChain *v5; // rcx
  __int64 (*v6)(void); // rax

  v2 = 0;
  v3 = (__int64 (*)(void))*((_QWORD *)*this + 4);
  if ( (char *)v3 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid((CHwDisplayRenderTarget *)this);
  else
    IsValid = v3();
  if ( IsValid )
  {
    v5 = this[31];
    v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 240LL);
    if ( (char *)v6 == (char *)CDWMSwapChain::IsHardwareProtected )
      return CDWMSwapChain::IsHardwareProtected(v5);
    else
      return v6();
  }
  return v2;
}
