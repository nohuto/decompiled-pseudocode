/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x180084BEC
 * Callers:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x180084CE8 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x180084D40 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 *     _CVolumeSoftware::CVolumeSoftware_::_1_::dtor$0 @ 0x180087BA0 (_CVolumeSoftware--CVolumeSoftware_--_1_--dtor$0.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x180087D44 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     _CVolumeSoftware::_CVolumeSoftware_::_1_::dtor$0 @ 0x180087DC6 (_CVolumeSoftware--_CVolumeSoftware_--_1_--dtor$0.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002E934 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
      this,
      -2LL);
  }
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((CVolumeControlBase *)((char *)this + 136));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    free(v2);
  CoTaskMemFree(*((LPVOID *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
