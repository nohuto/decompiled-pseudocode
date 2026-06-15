/*
 * XREFs of ??0AudioDeviceMgr@@IEAA@XZ @ 0x180056530
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005F730 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800576D4 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
AudioDeviceMgr *__fastcall AudioDeviceMgr::AudioDeviceMgr(AudioDeviceMgr *this)
{
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *(_QWORD *)this = &AudioDeviceMgr::`vftable'{for `IAudioDeviceMgr'};
  *((_QWORD *)this + 1) = &AudioDeviceMgr::`vftable'{for `IMMNotificationClientInternal'};
  *((_QWORD *)this + 2) = &AudioDeviceMgr::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((AudioDeviceMgr *)((char *)this + 88));
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((AudioDeviceMgr *)((char *)this + 176));
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  return this;
}
