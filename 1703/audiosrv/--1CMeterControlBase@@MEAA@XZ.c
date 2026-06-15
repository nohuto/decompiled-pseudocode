/*
 * XREFs of ??1CMeterControlBase@@MEAA@XZ @ 0x1800835B8
 * Callers:
 *     _CVolumeStrip::Initialize_::_1_::dtor$16 @ 0x1800591C5 (_CVolumeStrip--Initialize_--_1_--dtor$16.c)
 *     ??1CMeterHardware@@EEAA@XZ @ 0x180083620 (--1CMeterHardware@@EEAA@XZ.c)
 *     ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x180083670 (--_GCMeterControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x180087C60 (--1CMeterSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

void __fastcall CMeterControlBase::~CMeterControlBase(CMeterControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMeterControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_554bf26313353362e0874a871197bf29_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
}
