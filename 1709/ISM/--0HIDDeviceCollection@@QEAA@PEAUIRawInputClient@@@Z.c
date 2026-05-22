/*
 * XREFs of ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18009C714
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18008ADF4 (-Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18008B594 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18008BBBC (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18009254C (--0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessa.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180099630 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18009A3D8 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18009AF68 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18009B4CC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180088FA4 (--0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

HIDDeviceCollection *__fastcall HIDDeviceCollection::HIDDeviceCollection(
        HIDDeviceCollection *this,
        struct IRawInputClient *a2)
{
  RIMDeviceCollection::RIMDeviceCollection(this, a2);
  *((_QWORD *)this + 343) = 0LL;
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  return this;
}
