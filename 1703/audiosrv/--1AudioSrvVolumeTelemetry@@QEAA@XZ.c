/*
 * XREFs of ??1AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18007B884
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$15 @ 0x18005A8C7 (_CAudioStream--_CAudioStream_--_1_--dtor$15.c)
 *     _AudioSrvVolumeTelemetryStreamVolume::_AudioSrvVolumeTelemetryStreamVolume_::_1_::dtor$0 @ 0x18007B843 (_AudioSrvVolumeTelemetryStreamVolume--_AudioSrvVolumeTelemetryStreamVolume_--_1_--dtor$0.c)
 *     _CVolumeControlBase::_CVolumeControlBase_::_1_::dtor$4 @ 0x180084CD9 (_CVolumeControlBase--_CVolumeControlBase_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall AudioSrvVolumeTelemetry::~AudioSrvVolumeTelemetry(AudioSrvVolumeTelemetry *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
