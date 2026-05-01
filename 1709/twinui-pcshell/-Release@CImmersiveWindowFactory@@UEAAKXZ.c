/*
 * XREFs of ?Release@CImmersiveWindowFactory@@UEAAKXZ @ 0x1801DFB60
 * Callers:
 *     ?Release@CImmersiveWindowFactory@@WDI@EAAKXZ @ 0x1801E07B0 (-Release@CImmersiveWindowFactory@@WDI@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WFI@EAAKXZ @ 0x1801E07D0 (-Release@CImmersiveWindowFactory@@WFI@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WGA@EAAKXZ @ 0x1801E0820 (-Release@CImmersiveWindowFactory@@WGA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WMA@EAAKXZ @ 0x1801E0830 (-Release@CImmersiveWindowFactory@@WMA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@W7EAAKXZ @ 0x1801E0850 (-Release@CImmersiveWindowFactory@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CImmersiveWindowFactory::Release(CImmersiveWindowFactory *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::Release(this);
}
