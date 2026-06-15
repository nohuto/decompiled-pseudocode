/*
 * XREFs of ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18003101C
 * Callers:
 *     ??0AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180011920 (--0AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180067D20 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioSrvVolumeTelemetry *__fastcall AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry(AudioSrvVolumeTelemetry *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetry::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  return this;
}
