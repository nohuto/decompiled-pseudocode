/*
 * XREFs of ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x1C008DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C008DB94 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 */

FxUsbPipeTransferContext *__fastcall FxUsbPipeTransferContext::`vector deleting destructor'(
        FxUsbPipeTransferContext *this,
        char a2)
{
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
