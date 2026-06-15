/*
 * XREFs of ??1CMeterControlBase@@MEAA@XZ @ 0x180065AA0
 * Callers:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x180065B08 (--1CMeterHardware@@EEAA@XZ.c)
 *     ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x180065B60 (--_GCMeterControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x18006C0C4 (--1CMeterSoftware@@EEAA@XZ.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$24 @ 0x18006E1CA (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$24.c)
 * Callees:
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CMeterControlBase::~CMeterControlBase(CMeterControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMeterControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
