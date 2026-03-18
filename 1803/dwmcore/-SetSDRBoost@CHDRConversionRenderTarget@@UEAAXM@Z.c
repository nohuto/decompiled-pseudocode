/*
 * XREFs of ?SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z @ 0x1801E7760
 * Callers:
 *     ?SetSDRBoost@CHDRConversionRenderTarget@@WNI@EAAXM@Z @ 0x1800DE440 (-SetSDRBoost@CHDRConversionRenderTarget@@WNI@EAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHDRConversionRenderTarget::SetSDRBoost(CHDRConversionRenderTarget *this, float a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 76);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
  CHwDisplayRenderTarget::SetSDRBoost(this, a2);
}
