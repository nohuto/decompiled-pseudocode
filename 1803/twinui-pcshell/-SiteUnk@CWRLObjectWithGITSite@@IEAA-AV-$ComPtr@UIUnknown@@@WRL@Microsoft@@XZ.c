/*
 * XREFs of ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180030C68
 * Callers:
 *     ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@@@Z @ 0x18009DA80 (-GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E2374 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1802E24F8 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1802E2780 (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1802E2800 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180306410 (-QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall CWRLObjectWithGITSite::SiteUnk(CWRLObjectWithGITSite *this, void **a2)
{
  int (*v4)(CWRLObjectWithGITSite *__hidden, const struct _GUID *, void **); // rax

  *a2 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  v4 = *(int (**)(CWRLObjectWithGITSite *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
  if ( v4 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(this, &GUID_00000000_0000_0000_c000_000000000046, a2);
  else
    ((void (__fastcall *)(CWRLObjectWithGITSite *, GUID *, void **))v4)(
      this,
      &GUID_00000000_0000_0000_c000_000000000046,
      a2);
  return a2;
}
