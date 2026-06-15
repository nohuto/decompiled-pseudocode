/*
 * XREFs of ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001F054
 * Callers:
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180017EDC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x180012E1C (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamStoppedWorkItem::Initialize(CStreamStoppedWorkItem *this, struct IAudioStreamInfo *a2)
{
  CApplicationManager *v4; // rcx
  int ProcessFromStreamInfo; // ebx

  *((_QWORD *)this + 1) = a2;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  ProcessFromStreamInfo = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 32LL))(
                            *((_QWORD *)this + 1),
                            (char *)this + 16);
  if ( ProcessFromStreamInfo < 0
    || (ProcessFromStreamInfo = CApplicationManager::GetProcessFromStreamInfo(v4, a2, (struct CProcess **)this + 3),
        ProcessFromStreamInfo < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids,
        ProcessFromStreamInfo);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Initialize", 319, ProcessFromStreamInfo);
  }
  return (unsigned int)ProcessFromStreamInfo;
}
