/*
 * XREFs of ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C009F354
 * Callers:
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0022470 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C009F590 (-_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxFilteredStartContext *__fastcall FxFilteredStartContext::`scalar deleting destructor'(FxFilteredStartContext *this)
{
  _CM_RESOURCE_LIST *ResourcesRaw; // rcx
  _CM_RESOURCE_LIST *ResourcesTranslated; // rcx

  ResourcesRaw = this->ResourcesRaw;
  if ( ResourcesRaw )
    ExFreePoolWithTag(ResourcesRaw, 0);
  ResourcesTranslated = this->ResourcesTranslated;
  if ( ResourcesTranslated )
    ExFreePoolWithTag(ResourcesTranslated, 0);
  FxPoolFree(this);
  return this;
}
