/*
 * XREFs of ??1CMuteControlBase@@MEAA@XZ @ 0x180066874
 * Callers:
 *     ??1CMuteHardware@@EEAA@XZ @ 0x1800668DC (--1CMuteHardware@@EEAA@XZ.c)
 *     ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x180066930 (--_GCMuteControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x18006C104 (--1CMuteSoftware@@EEAA@XZ.c)
 *     _CMuteSoftware::_CMuteSoftware_::_1_::dtor$0 @ 0x18006C17A (_CMuteSoftware--_CMuteSoftware_--_1_--dtor$0.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$21 @ 0x18006E177 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$21.c)
 * Callees:
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CMuteControlBase::~CMuteControlBase(CMuteControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMuteControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
