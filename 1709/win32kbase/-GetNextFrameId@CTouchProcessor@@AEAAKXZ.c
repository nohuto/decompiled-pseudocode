/*
 * XREFs of ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C011F440
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011B604 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C013CAFC (ApiSetResetLastSeenFrameId.c)
 */

__int64 __fastcall CTouchProcessor::GetNextFrameId(CTouchProcessor *this)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  PERESOURCE *v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v5,
    (struct CInpLockGuard *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL));
  v2 = *(_DWORD *)(v1 + 272);
  *(_DWORD *)(v1 + 272) = v2 + 1;
  if ( v2 == -1 )
  {
    *(_DWORD *)(v1 + 272) = 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v6 )
  {
    v3 = (PERESOURCE *)v5;
    *(_QWORD *)(v5 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
  }
  return v2;
}
