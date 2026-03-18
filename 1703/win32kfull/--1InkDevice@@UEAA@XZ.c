/*
 * XREFs of ??1InkDevice@@UEAA@XZ @ 0x1C021D01C
 * Callers:
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0217C00 (--_EInkDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C021EBF0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 */

void __fastcall InkDevice::~InkDevice(InkDevice *this)
{
  *(_QWORD *)this = &InkDevice::`vftable'{for `Rim::RimBackedDeviceBase'};
  *((_QWORD *)this + 4) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  InkDevice::UnInitialize(this);
  *((_QWORD *)this + 4) = &InkFeedbackProviderBase::`vftable';
  *(_QWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  Rim::RimBackedDeviceBase::UnInitialize(this);
}
