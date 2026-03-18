/*
 * XREFs of ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C009F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0062B5C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C012C504 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(CHidInput *this)
{
  struct DelayZonePalmRejection *Instance; // rax
  DelayZonePalmRejection *v2; // rbx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+4Ch] [rbp+14h]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v4, 1, 0);
  Instance = DelayZonePalmRejection::GetInstance();
  v2 = Instance;
  if ( *((_BYTE *)Instance + 9) )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)Instance + 14),
      4u,
      0xDu,
      0xBu,
      (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids);
    *((_BYTE *)v2 + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(v2);
  }
  if ( v4 && !v5 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return 0LL;
}
