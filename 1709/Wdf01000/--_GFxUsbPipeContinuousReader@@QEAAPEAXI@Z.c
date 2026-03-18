/*
 * XREFs of ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C008DC40
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C008DE70 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008EAD0 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C008DA7C (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 */

FxUsbPipeContinuousReader *__fastcall FxUsbPipeContinuousReader::`scalar deleting destructor'(
        FxUsbPipeContinuousReader *this)
{
  FxUsbPipeContinuousReader::~FxUsbPipeContinuousReader(this);
  if ( this )
    FxPoolFree(this);
  return this;
}
