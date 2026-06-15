/*
 * XREFs of ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003B018
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180087B44 (--0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18002E968 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=3
CVolumeControlBase *__fastcall CVolumeControlBase::CVolumeControlBase(
        CVolumeControlBase *this,
        struct CVolumeStrip *a2)
{
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_DWORD *)this + 14) = 51;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = a2;
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry((CVolumeControlBase *)((char *)this + 136));
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, this);
  }
  return this;
}
