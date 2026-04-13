/*
 * XREFs of ?AddRef@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x180025520
 * Callers:
 *     ?AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180028E10 (-AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x180028E60 (-AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180028F80 (-AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x180029020 (-AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180029080 (-AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x1800292A0 (-AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x1800292D0 (-AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x1800294F0 (-AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180029510 (-AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::AddRef(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(this);
}
