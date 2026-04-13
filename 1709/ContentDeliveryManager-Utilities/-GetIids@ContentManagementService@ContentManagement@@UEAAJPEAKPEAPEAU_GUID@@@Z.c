/*
 * XREFs of ?GetIids@ContentManagementService@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180022490
 * Callers:
 *     ?GetIids@ContentManagementService@ContentManagement@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800257A0 (-GetIids@ContentManagementService@ContentManagement@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800259C0 (-GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WFI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800259E0 (-GetIids@ContentManagementService@ContentManagement@@WFI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025BA0 (-GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WGA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025BD0 (-GetIids@ContentManagementService@ContentManagement@@WGA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025D80 (-GetIids@ContentManagementService@ContentManagement@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WGI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025DA0 (-GetIids@ContentManagementService@ContentManagement@@WGI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementService::GetIids(
        ContentManagement::ContentManagementService *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::GetIids(
           this,
           a2,
           a3);
}
