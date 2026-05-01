/*
 * XREFs of ?SetMonitor@CClassicWindow@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x18011AB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindow::SetMonitor(CClassicWindow *this, struct IImmersiveMonitor *a2)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)((char *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 3);
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v2);
    (**(void (__fastcall ***)(struct IImmersiveMonitor *, GUID *, __int64 *))a2)(
      a2,
      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
      v2);
  }
}
