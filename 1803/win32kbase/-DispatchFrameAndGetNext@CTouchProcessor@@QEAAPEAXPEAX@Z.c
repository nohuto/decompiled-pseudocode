/*
 * XREFs of ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0110D50
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0110F30 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0113F28 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::DispatchFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *NextFrame; // rsi
  const struct RIMCOMPLETEFRAME *v5; // rdx
  CInpLockGuard *v7; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v7,
    (CTouchProcessor *)((char *)this + 72));
  NextFrame = CTouchProcessor::GetNextFrame(this, a2, (struct _LIST_ENTRY *)((char *)this + 120));
  CTouchProcessor::DoContactVisualizationAndGenerateMessages(
    this,
    v5,
    a2,
    *((void **)a2 + 8),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 14) + 276LL), 6),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 14) + 276LL), 7),
    0);
  if ( !v8 )
    CInpLockGuard::UnLock((PERESOURCE *)v7);
  return NextFrame;
}
