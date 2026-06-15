/*
 * XREFs of ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18002E968
 * Callers:
 *     ??0CAudioSession@@IEAA@XZ @ 0x180015C90 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003B018 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
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
