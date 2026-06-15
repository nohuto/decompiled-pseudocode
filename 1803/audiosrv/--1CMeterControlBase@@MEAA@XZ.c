/*
 * XREFs of ??1CMeterControlBase@@MEAA@XZ @ 0x18004AAFC
 * Callers:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x18004ADD4 (--1CMeterHardware@@EEAA@XZ.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$22 @ 0x180066A74 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$22.c)
 *     ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x1800A0480 (--_GCMeterControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x1800A5414 (--1CMeterSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CMeterControlBase::~CMeterControlBase(CMeterControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMeterControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_00df95541f0e32c0c29587cc00cae0f9_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
