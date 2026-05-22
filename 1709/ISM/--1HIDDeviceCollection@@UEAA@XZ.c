/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009C794
 * Callers:
 *     ??1PTPDeviceCollection@@MEAA@XZ @ 0x18008A7C4 (--1PTPDeviceCollection@@MEAA@XZ.c)
 *     ??_ETouchDeviceCollection@@MEAAPEAXI@Z @ 0x18008AFA0 (--_ETouchDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EPenDeviceCollection@@MEAAPEAXI@Z @ 0x18008B740 (--_EPenDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z @ 0x18008BD60 (--_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800927B4 (--1SpatialInputControllerCollection@@UEAA@XZ.c)
 *     ??_EMobileButtonDeviceCollection@@MEAAPEAXI@Z @ 0x1800997E0 (--_EMobileButtonDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCollection@@MEAAPEAXI@Z @ 0x18009A590 (--_GConsumerControlDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x18009B040 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_GGazeDeviceCollection@@MEAAPEAXI@Z @ 0x18009B670 (--_GGazeDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x18009C750 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$3 @ 0x1800D0AAC (_RIMRawInputProvider--Initialize_--_1_--dtor$3.c)
 *     _GazeDeviceCollection::Create_::_1_::dtor$1 @ 0x1800D0AD0 (_GazeDeviceCollection--Create_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$0 @ 0x1800D0C53 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDeviceCollection::~HIDDeviceCollection(HIDDeviceCollection *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  v2 = (void *)*((_QWORD *)this + 343);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 343) = 0LL;
  }
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
