/*
 * XREFs of ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C011CB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 */

char *__fastcall CTouchProcessor::DispatchFrameAndGetNext(CTouchProcessor *this, void *a2)
{
  CTouchProcessor *v4; // r8
  char *v5; // rbx
  PERESOURCE *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v8,
    (CTouchProcessor *)((char *)this + 224));
  v4 = (CTouchProcessor *)*((_QWORD *)a2 + 2);
  v5 = 0LL;
  if ( v4 && v4 != (CTouchProcessor *)((char *)this + 280) )
    v5 = (char *)v4 - 8;
  CTouchProcessor::DoContactVisualizationAndGenerateMessages(
    this,
    0LL,
    (const struct CPointerInputFrame *)a2,
    *((void **)a2 + 8),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 14) + 276LL), 6),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 14) + 276LL), 7),
    0);
  if ( !v9 )
  {
    v6 = (PERESOURCE *)v8;
    *(_QWORD *)(v8 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v6);
  }
  return v5;
}
