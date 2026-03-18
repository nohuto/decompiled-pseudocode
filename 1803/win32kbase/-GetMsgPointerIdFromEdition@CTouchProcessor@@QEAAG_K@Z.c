/*
 * XREFs of ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C0113EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerIdFromEdition(CTouchProcessor *this, __int64 a2)
{
  unsigned __int16 v3; // bx
  CInpLockGuard *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v5,
    (CTouchProcessor *)((char *)this + 72));
  if ( a2 )
    v3 = *(_WORD *)(a2 + 16);
  else
    v3 = 0;
  if ( !v6 )
    CInpLockGuard::UnLock((PERESOURCE *)v5);
  return v3;
}
