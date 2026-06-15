/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x180067E6C
 * Callers:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x180067F68 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x180067FC0 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 *     _CVolumeSoftware::CVolumeSoftware_::_1_::dtor$0 @ 0x18006BE9C (_CVolumeSoftware--CVolumeSoftware_--_1_--dtor$0.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x18006C1A8 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     _CVolumeSoftware::_CVolumeSoftware_::_1_::dtor$0 @ 0x18006C22A (_CVolumeSoftware--_CVolumeSoftware_--_1_--dtor$0.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180030FA8 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
  }
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((void (__fastcall ***)(AudioSrvVolumeTelemetryStreamVolume *, __int64, unsigned int))this + 17);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    free(v2);
  CoTaskMemFree(*((LPVOID *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
