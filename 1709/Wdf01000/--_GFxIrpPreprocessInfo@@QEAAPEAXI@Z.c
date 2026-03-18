/*
 * XREFs of ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C007CA68
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0020A90 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C007D234 (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C006574C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

FxIrpPreprocessInfo *__fastcall FxIrpPreprocessInfo::`scalar deleting destructor'(FxIrpPreprocessInfo *this)
{
  `vector destructor iterator'(
    (char *)this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void (__fastcall *)(void *))FxIrpPreprocessInfo::Info::~Info);
  if ( this )
    FxPoolFree(this);
  return this;
}
