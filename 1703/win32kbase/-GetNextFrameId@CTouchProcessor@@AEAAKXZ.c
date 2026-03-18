/*
 * XREFs of ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C01205C4
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011C7A4 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C013D62C (ApiSetResetLastSeenFrameId.c)
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
    (struct CInpLockGuard *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL));
  v2 = *(_DWORD *)(v1 + 248);
  *(_DWORD *)(v1 + 248) = v2 + 1;
  if ( v2 == -1 )
  {
    *(_DWORD *)(v1 + 248) = 1;
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
