/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800AD6E0
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x1800AD850 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180097EAC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x1800ACB0C (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     ValidateAudioLevel @ 0x1800ADE1C (ValidateAudioLevel.c)
 *     WPP_SF_Sg @ 0x1800AE08C (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, const struct _GUID *a3, int *a4)
{
  CAudioSessionManager *v7; // rcx
  int v8; // edi
  int v10; // xmm6_4
  float v11; // xmm6_4
  int v12; // [rsp+20h] [rbp-58h]
  double v13; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v15; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v13 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 17, (_DWORD)a3, *((_QWORD *)this + 91), SLOBYTE(v13));
  }
  v8 = 0;
  if ( (unsigned __int8)ValidateAudioLevel(v7) )
  {
    v15 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v10 = *((_DWORD *)this + 212);
    AudioSrvVolumeTelemetry::Update((CAudioSession *)((char *)this + 864));
    *((_DWORD *)this + 237) = v10;
    *((float *)this + 238) = a2;
    v11 = *((float *)this + 212);
    *((float *)this + 212) = a2;
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    CAudioSession::ResetPolicyGainStages(this);
    LOBYTE(v12) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v12,
      0LL);
    if ( a4 )
    {
      if ( v11 == a2 )
        v8 = 1;
      *a4 = v8;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
