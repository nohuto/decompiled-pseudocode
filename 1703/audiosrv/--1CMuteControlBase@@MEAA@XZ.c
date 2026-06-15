/*
 * XREFs of ??1CMuteControlBase@@MEAA@XZ @ 0x180083E28
 * Callers:
 *     _CVolumeStrip::Initialize_::_1_::dtor$13 @ 0x18005918A (_CVolumeStrip--Initialize_--_1_--dtor$13.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x180083E90 (--1CMuteHardware@@EEAA@XZ.c)
 *     ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x180083EE0 (--_GCMuteControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x180087CA0 (--1CMuteSoftware@@EEAA@XZ.c)
 *     _CMuteSoftware::_CMuteSoftware_::_1_::dtor$0 @ 0x180087D16 (_CMuteSoftware--_CMuteSoftware_--_1_--dtor$0.c)
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

void __fastcall CMuteControlBase::~CMuteControlBase(CMuteControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMuteControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
