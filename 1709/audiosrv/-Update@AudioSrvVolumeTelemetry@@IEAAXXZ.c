/*
 * XREFs of ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18005B3BC
 * Callers:
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006AAE0 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006AD60 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x1800764A0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180030FA8 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSrvVolumeTelemetry::Update(AudioSrvVolumeTelemetry *this)
{
  ULONGLONG TickCount64; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  TickCount64 = GetTickCount64();
  if ( AudioSrvVolumeTelemetry::LogTelemetry((void (__fastcall ***)(AudioSrvVolumeTelemetryStreamVolume *, __int64, unsigned int))this) )
  {
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 2) = TickCount64;
  }
  else
  {
    ++*((_DWORD *)this + 6);
  }
  *((_QWORD *)this + 1) = TickCount64;
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
