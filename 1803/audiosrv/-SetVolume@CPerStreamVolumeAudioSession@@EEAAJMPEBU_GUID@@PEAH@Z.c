/*
 * XREFs of ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x1800AD850
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800418F8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800AD6E0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800AD93C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ValidateAudioLevel @ 0x1800ADE1C (ValidateAudioLevel.c)
 *     WPP_SF_Sg @ 0x1800AE08C (WPP_SF_Sg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetVolume(
        CPerStreamVolumeAudioSession *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  CAudioSessionManager *v7; // rcx
  int v9; // eax
  unsigned int v10; // edi
  double v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 16, (_DWORD)a3, *((_QWORD *)this + 91), SLOBYTE(v11));
  }
  if ( (unsigned __int8)ValidateAudioLevel(v7) )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    v9 = CAudioSession::SetVolume(this, a2, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x327,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
