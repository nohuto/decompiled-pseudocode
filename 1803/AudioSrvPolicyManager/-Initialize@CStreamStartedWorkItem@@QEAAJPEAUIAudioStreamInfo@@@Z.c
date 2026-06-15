/*
 * XREFs of ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002804C
 * Callers:
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180021234 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18001AF8C (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamStartedWorkItem::Initialize(CStreamStartedWorkItem *this, struct IAudioStreamInfo *a2)
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
        0xBu,
        &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
        ProcessFromStreamInfo);
    }
    AudPolicyLogError("CStreamStartedWorkItem::Initialize", 96, ProcessFromStreamInfo);
  }
  return (unsigned int)ProcessFromStreamInfo;
}
