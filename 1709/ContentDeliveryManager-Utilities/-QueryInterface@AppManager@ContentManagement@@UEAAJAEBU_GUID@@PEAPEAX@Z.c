/*
 * XREFs of ?QueryInterface@AppManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000C4D0
 * Callers:
 *     ?QueryInterface@AppManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021590 (-QueryInterface@AppManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppManager@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021930 (-QueryInterface@AppManager@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021F10 (-QueryInterface@AppManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppManager::QueryInterface(
        ContentManagement::AppManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::QueryInterface(
           this,
           a2,
           a3);
}
