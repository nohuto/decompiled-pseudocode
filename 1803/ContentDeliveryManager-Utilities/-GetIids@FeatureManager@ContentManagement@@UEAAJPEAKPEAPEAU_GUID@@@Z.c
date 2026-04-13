/*
 * XREFs of ?GetIids@FeatureManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800116A0
 * Callers:
 *     ?GetIids@FeatureManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025040 (-GetIids@FeatureManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::FeatureManager::GetIids(
        ContentManagement::FeatureManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IFeatureManager>::GetIids(
           this,
           a2,
           a3);
}
