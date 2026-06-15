/*
 * XREFs of ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180016A10
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001D7E4 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x1800178A0 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18002F2E0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::GetSoundLevel(
        CProcess *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a5)
{
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *v5; // r14
  int SoundLevelForExtendedAudioCategory; // ebx
  __int64 *v10; // rsi
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // edi
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 **v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a5;
  SoundLevelForExtendedAudioCategory = 0;
  if ( !a5 )
    return 2147500035LL;
  v10 = (__int64 *)((char *)this + 728);
  v11 = *((_QWORD *)this + 91);
  if ( !v11 )
  {
    a5 = (CProcess *)((char *)this - 16);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
            (char *)this + 728,
            a2,
            &a5);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11FB,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    v11 = *v10;
  }
  LODWORD(a5) = 0;
  if ( !a3 )
  {
    v15 = 0LL;
    goto LABEL_10;
  }
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 **))(**(_QWORD **)(v11 + 120) + 104LL))(
         *(_QWORD *)(v11 + 120),
         0LL,
         *(unsigned int *)a3,
         0LL,
         &a5) >= 0 )
  {
    v15 = &a5;
LABEL_10:
    SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                           v11,
                                           a2,
                                           v15,
                                           a4);
  }
  *(_DWORD *)v5 = SoundLevelForExtendedAudioCategory;
  return 2147500035LL;
}
