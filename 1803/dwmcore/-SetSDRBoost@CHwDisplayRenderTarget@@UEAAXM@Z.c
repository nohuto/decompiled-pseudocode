/*
 * XREFs of ?SetSDRBoost@CHwDisplayRenderTarget@@UEAAXM@Z @ 0x1801E77B0
 * Callers:
 *     ?SetSDRBoost@CHwDisplayRenderTarget@@WNI@EAAXM@Z @ 0x1800DE450 (-SetSDRBoost@CHwDisplayRenderTarget@@WNI@EAAXM@Z.c)
 *     ?SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z @ 0x1801E7760 (-SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::SetSDRBoost(CHwDisplayRenderTarget *this, float a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  *((float *)this + 49) = a2;
  if ( (*(unsigned __int8 (**)(void))(v2 + 32))() )
    *(float *)(*((_QWORD *)this + 31) + 196LL) = (*(float (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 168LL))(this);
}
