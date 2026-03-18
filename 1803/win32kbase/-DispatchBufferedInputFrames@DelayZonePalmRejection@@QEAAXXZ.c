/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C012C504
 * Callers:
 *     ?DoPreDispatchProcessing@CHidInput@@EEAAJXZ @ 0x1C000EEF0 (-DoPreDispatchProcessing@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C009F5F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C012CC88 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0037430 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0110DF0 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(DelayZonePalmRejection *this)
{
  struct CPointerInputFrame *Next; // rax
  struct CPointerInputFrame *v3; // rdi
  int v4; // eax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    v6 = *((_DWORD *)this + 11);
    v5 = *((_DWORD *)this + 10);
    WPP_RECORDER_SF_dd(
      *((_QWORD *)this + 14),
      4u,
      0xDu,
      0xCu,
      (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
      v5,
      v6);
    Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
    v3 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
    while ( Next && Next != v3 )
      Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(gpTouchProcessor, Next);
    if ( v3 )
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(gpTouchProcessor, v3);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    {
      v4 = 2;
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      v4 = 0;
    }
    *((_DWORD *)this + 1) = v4;
    if ( *((_QWORD *)this + 3) )
      HMAssignmentUnlock((__int64 *)this + 3);
  }
}
