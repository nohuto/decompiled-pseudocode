/*
 * XREFs of ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DFB50
 * Callers:
 *     ?QueryInterface@CImmersiveWindowFactory@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E07C0 (-QueryInterface@CImmersiveWindowFactory@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E07E0 (-QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E08C0 (-QueryInterface@CImmersiveWindowFactory@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E08D0 (-QueryInterface@CImmersiveWindowFactory@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E0900 (-QueryInterface@CImmersiveWindowFactory@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CImmersiveWindowFactory::QueryInterface(
        CImmersiveWindowFactory *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::QueryInterface(
           this,
           a2,
           a3);
}
