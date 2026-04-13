/*
 * XREFs of ?QueryInterface@ActionHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011500
 * Callers:
 *     ?QueryInterface@ActionHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800216A0 (-QueryInterface@ActionHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ActionHelper@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021A00 (-QueryInterface@ActionHelper@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ActionHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021FC0 (-QueryInterface@ActionHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ActionHelper::QueryInterface(
        ContentManagement::ActionHelper *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::QueryInterface(
           this,
           a2,
           a3);
}
