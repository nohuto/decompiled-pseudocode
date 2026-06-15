/*
 * XREFs of ??1CDriverListener@@UEAA@XZ @ 0x180023294
 * Callers:
 *     ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x180021ED4 (--1CVolumeLimitTrackerImpl@@UEAA@XZ.c)
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x180023184 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 *     ??_GCDriverListener@@UEAAPEAXI@Z @ 0x180023260 (--_GCDriverListener@@UEAAPEAXI@Z.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$3 @ 0x180028E7A (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$3.c)
 * Callees:
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 */

void __fastcall CDriverListener::~CDriverListener(CDriverListener *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  *(_QWORD *)this = &CDriverListener::`vftable';
  if ( *((_QWORD *)this + 63) )
  {
    v2 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( v2 < 0 )
    {
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        McTemplateU0dsdp(
          v3,
          &EUVolumePolicy_Error_Propagation,
          v2,
          "CDriverListener::UnsubscribeWnfNotifications",
          67,
          (char)this);
      return;
    }
    *((_QWORD *)this + 63) = 0LL;
  }
  if ( *((_QWORD *)this + 64) )
  {
    v4 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( v4 >= 0 )
    {
      *((_QWORD *)this + 64) = 0LL;
    }
    else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    {
      McTemplateU0dsdp(
        v5,
        &EUVolumePolicy_Error_Propagation,
        v4,
        "CDriverListener::UnsubscribeWnfNotifications",
        73,
        (char)this);
    }
  }
}
