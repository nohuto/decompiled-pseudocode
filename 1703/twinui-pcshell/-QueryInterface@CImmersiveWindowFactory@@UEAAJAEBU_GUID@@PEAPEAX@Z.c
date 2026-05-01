/*
 * XREFs of ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180191950
 * Callers:
 *     ?QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801925F0 (-QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180192600 (-QueryInterface@CImmersiveWindowFactory@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180192640 (-QueryInterface@CImmersiveWindowFactory@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180192660 (-QueryInterface@CImmersiveWindowFactory@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801926A0 (-QueryInterface@CImmersiveWindowFactory@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CImmersiveWindowFactory::QueryInterface(
        CImmersiveWindowFactory *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
