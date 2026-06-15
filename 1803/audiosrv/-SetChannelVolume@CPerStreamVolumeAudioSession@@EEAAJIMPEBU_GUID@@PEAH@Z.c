/*
 * XREFs of ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800ACF80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800ACE30 (-SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800AD93C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetChannelVolume(
        const wchar_t **this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = CAudioSession::SetChannelVolume(this, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer((CPerStreamVolumeAudioSession *)this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x448,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
