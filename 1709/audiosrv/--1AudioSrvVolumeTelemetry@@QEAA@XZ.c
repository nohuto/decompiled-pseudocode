/*
 * XREFs of ??1AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18005B3B0
 * Callers:
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$0 @ 0x180038554 (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$0.c)
 *     _CVolumeControlBase::_CVolumeControlBase_::_1_::dtor$4 @ 0x180067F59 (_CVolumeControlBase--_CVolumeControlBase_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall AudioSrvVolumeTelemetry::~AudioSrvVolumeTelemetry(AudioSrvVolumeTelemetry *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
