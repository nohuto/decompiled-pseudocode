/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x1800764A0
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800765E0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18005B3BC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180075718 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     WPP_SF_Sg @ 0x180076E18 (WPP_SF_Sg.c)
 *     ValidateAudioLevel @ 0x1800784AC (ValidateAudioLevel.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, const struct _GUID *a3)
{
  CAudioDGProcess *v5; // rcx
  int v6; // ebx
  int v7; // xmm6_4
  bool v8; // zf
  int v10; // [rsp+20h] [rbp-58h]
  double v11; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v13; // [rsp+48h] [rbp-30h]

  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 17, (_DWORD)a3, *((_QWORD *)this + 99), SLOBYTE(v11));
  }
  if ( !(unsigned __int8)ValidateAudioLevel(v5) )
  {
    v6 = -2147024809;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetVolume", 896, v6);
    return (unsigned int)v6;
  }
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_DWORD *)this + 226);
  AudioSrvVolumeTelemetry::Update((CAudioSession *)((char *)this + 920));
  v8 = v13 == 0;
  *((_DWORD *)this + 251) = v7;
  *((float *)this + 252) = a2;
  *((float *)this + 226) = a2;
  if ( !v8 )
    LeaveCriticalSection(lpCriticalSection);
  v6 = CAudioSession::ResetPolicyGainStages(this);
  LOBYTE(v10) = 0;
  (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
    (char *)this + 16,
    0LL,
    a3,
    0xFFFFFFFFLL,
    v10,
    0LL);
  if ( v6 < 0 )
    goto LABEL_10;
  return (unsigned int)v6;
}
