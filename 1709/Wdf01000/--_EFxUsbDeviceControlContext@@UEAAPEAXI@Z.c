/*
 * XREFs of ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x1C00907A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C0090700 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 */

FxUsbDeviceControlContext *__fastcall FxUsbDeviceControlContext::`vector deleting destructor'(
        FxUsbDeviceControlContext *this,
        char a2)
{
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
