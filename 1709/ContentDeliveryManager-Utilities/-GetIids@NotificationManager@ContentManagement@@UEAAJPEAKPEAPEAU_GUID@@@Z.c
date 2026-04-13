/*
 * XREFs of ?GetIids@NotificationManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000F210
 * Callers:
 *     ?GetIids@NotificationManager@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180021EE0 (-GetIids@NotificationManager@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::NotificationManager::GetIids(
        ContentManagement::NotificationManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::INotificationManager>::GetIids(
           this,
           a2,
           a3);
}
