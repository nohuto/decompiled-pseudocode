/*
 * XREFs of ?GetIids@MobilityExperienceSettings@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800115C0
 * Callers:
 *     ?GetIids@MobilityExperienceSettings@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180021410 (-GetIids@MobilityExperienceSettings@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::MobilityExperienceSettings::GetIids(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::GetIids(
           this,
           a2,
           a3);
}
