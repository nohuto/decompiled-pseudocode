/*
 * XREFs of ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C0127680
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0127618 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
        CTouchProcessor *this,
        int a2,
        unsigned __int16 a3,
        int a4)
{
  unsigned int v8; // ebx
  PERESOURCE *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v11,
    (CTouchProcessor *)((char *)this + 200));
  v8 = (unsigned int)CTouchProcessor::SetPointerInfoNodeFlag(this, a2, a3, a4);
  if ( !v12 )
  {
    v9 = (PERESOURCE *)v11;
    *(_QWORD *)(v11 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  }
  return v8;
}
