/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C30
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201A60 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  int v3; // [rsp+20h] [rbp-18h]

  KeInitializeMutex((PRKMUTEX)((char *)a1->DeviceExtension + 4288), 0);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_Brightness3dxgkrnl__private_propertyCache,
    12732606LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005FE60,
    0,
    v3);
  return DpiBrightnessSetupInterfaceV2(a1);
}
