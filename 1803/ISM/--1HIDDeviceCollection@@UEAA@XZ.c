/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x180074E14
 * Callers:
 *     ??_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z @ 0x18006CBC0 (--_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x180070D60 (--_ESpatialRimDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EMobileButtonDeviceCollection@@MEAAPEAXI@Z @ 0x180072910 (--_EMobileButtonDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCollection@@MEAAPEAXI@Z @ 0x1800732D0 (--_GConsumerControlDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x180073AD0 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_GGazeDeviceCollection@@MEAAPEAXI@Z @ 0x180073E60 (--_GGazeDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_ECameraControlDeviceCollection@@MEAAPEAXI@Z @ 0x1800743F0 (--_ECameraControlDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x180074DD0 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$1 @ 0x1800E72FE (_RIMRawInputProvider--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
