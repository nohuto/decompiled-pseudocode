/*
 * XREFs of ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B120
 * Callers:
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000AD8C (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000AE00 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18000CD00 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180037670 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180037710 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180037824 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180038350 (-StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180038690 (-StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800388A0 (-StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180038AB0 (-StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007AE90 (--1-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007C7A4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007C8E0 (-StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007CB50 (-StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007CDC0 (-StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007D030 (-StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007D2A0 (-StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800A7F70 (-StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007B5D4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StopWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  wil::details::ThreadFailureCallbackHolder **v4; // rcx
  wil::details::ThreadFailureCallbackHolder *v5; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
    wil::details::in1diag3::Log_Hr(retaddr, v2, v3, (const char *)0x8007029CLL, v6);
  *((_DWORD *)this + 6) = 0;
  v4 = *(wil::details::ThreadFailureCallbackHolder ***)this;
  while ( 1 )
  {
    v5 = *v4;
    if ( !*v4 )
      break;
    if ( v5 == this )
    {
      *v4 = (wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)this + 2);
      break;
    }
    v4 = (wil::details::ThreadFailureCallbackHolder **)((char *)v5 + 16);
    *(_QWORD *)this = (char *)v5 + 16;
  }
  *(_QWORD *)this = 0LL;
}
