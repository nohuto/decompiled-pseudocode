/*
 * XREFs of ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0110DF0
 * Callers:
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C012C504 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0113F28 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0119E20 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *NextFrame; // rdi
  CInpLockGuard *v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v6,
    (CTouchProcessor *)((char *)this + 72));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x136u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  NextFrame = CTouchProcessor::GetNextFrame(this, a2, (struct _LIST_ENTRY *)((char *)this + 120));
  CTouchProcessor::ProcessInputPostDelayZonePalmRejection(this, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x137u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( !v7 )
    CInpLockGuard::UnLock((PERESOURCE *)v6);
  return NextFrame;
}
