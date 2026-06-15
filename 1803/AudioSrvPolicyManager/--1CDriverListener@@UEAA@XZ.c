/*
 * XREFs of ??1CDriverListener@@UEAA@XZ @ 0x18002C4C4
 * Callers:
 *     ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x18002B6E4 (--1CVolumeLimitTrackerImpl@@UEAA@XZ.c)
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x18002C2D4 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 *     ??_GCDriverListener@@UEAAPEAXI@Z @ 0x18002C490 (--_GCDriverListener@@UEAAPEAXI@Z.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$3 @ 0x180037A49 (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall CDriverListener::~CDriverListener(CDriverListener *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CDriverListener::`vftable';
  v4 = 0;
  v5 = *((_QWORD *)this + 63);
  if ( v5 )
  {
    v4 = RtlUnsubscribeWnfStateChangeNotification(v5, a2, a3) | 0x10000000;
    if ( v4 >= 0 )
      *((_QWORD *)this + 63) = 0LL;
  }
  v6 = *((_QWORD *)this + 64);
  if ( v6 && v4 >= 0 && (int)RtlUnsubscribeWnfStateChangeNotification(v6, a2, a3) >= 0 )
    *((_QWORD *)this + 64) = 0LL;
}
