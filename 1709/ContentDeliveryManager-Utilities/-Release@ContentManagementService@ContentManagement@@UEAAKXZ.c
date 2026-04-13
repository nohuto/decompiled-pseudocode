/*
 * XREFs of ?Release@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x1800224B0
 * Callers:
 *     ?Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x1800258C0 (-Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x180025910 (-Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180025A70 (-Release@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180025AC0 (-Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WGI@EAAKXZ @ 0x180025B20 (-Release@ContentManagementService@ContentManagement@@WGI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x180025C90 (-Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x180025CD0 (-Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x180025E60 (-Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180025EB0 (-Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::Release(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(this);
}
