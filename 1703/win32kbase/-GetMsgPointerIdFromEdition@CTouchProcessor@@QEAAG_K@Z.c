/*
 * XREFs of ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C0120570
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerIdFromEdition(CTouchProcessor *this, __int64 a2)
{
  unsigned __int16 v3; // bx
  PERESOURCE *v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v6,
    (CTouchProcessor *)((char *)this + 200));
  if ( a2 )
    v3 = *(_WORD *)(a2 + 16);
  else
    v3 = 0;
  if ( !v7 )
  {
    v4 = (PERESOURCE *)v6;
    *(_QWORD *)(v6 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v4);
  }
  return v3;
}
