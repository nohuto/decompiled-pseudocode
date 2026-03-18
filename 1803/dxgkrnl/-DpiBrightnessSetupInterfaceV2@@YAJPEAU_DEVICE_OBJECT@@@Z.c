/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201A60
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C30 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiQueryMiniportInterface @ 0x1C01FE2B8 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201978 (-DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessSetupInterfaceV2(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rsi
  int MiniportInterface; // r14d
  __int64 v4; // xmm1_8
  __int64 v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  MiniportInterface = DpiQueryMiniportInterface(
                        (__int64)a1,
                        (__int64)&GUID_DEVINTERFACE_BRIGHTNESS_2,
                        88,
                        2,
                        v6,
                        (__int64)(DeviceExtension + 4560));
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1140) = 131160;
  *((_QWORD *)DeviceExtension + 565) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 564) = a1;
  *((_QWORD *)DeviceExtension + 566) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 1126) = 65592;
  *((_QWORD *)DeviceExtension + 567) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 568) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 569) = DpiBrightnessIfGet;
  *((_OWORD *)DeviceExtension + 276) = *(_OWORD *)(DeviceExtension + 4504);
  *((_OWORD *)DeviceExtension + 277) = *(_OWORD *)(DeviceExtension + 4520);
  *((_OWORD *)DeviceExtension + 278) = *(_OWORD *)(DeviceExtension + 4536);
  v4 = *((_QWORD *)DeviceExtension + 569);
  *((_QWORD *)DeviceExtension + 559) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 560) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 561) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 558) = v4;
  *((_QWORD *)DeviceExtension + 562) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1104) = 131160;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
    8395569LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00564B0,
    0,
    v7);
  if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 577))(*((_QWORD *)DeviceExtension + 571), &v9) >= 0
    && (v9 & 1) != 0 )
  {
    v8 |= 1u;
    (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 578))(*((_QWORD *)DeviceExtension + 571), &v8);
  }
  (*((void (__fastcall **)(_QWORD, char *))DeviceExtension + 576))(
    *((_QWORD *)DeviceExtension + 571),
    DeviceExtension + 4192);
  DeviceExtension[4280] = DeviceExtension[4192];
  DpiBrightnessAISetBacklightOptLevel(a1);
  DpiBrightnessSetupAggregateEvents(a1);
  return (unsigned int)MiniportInterface;
}
