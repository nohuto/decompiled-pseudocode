/*
 * XREFs of ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C011CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C011CC7C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
        struct _KTHREAD **this,
        unsigned int a2,
        __int16 a3,
        int a4)
{
  unsigned int v8; // ebx
  CInpLockGuard *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v10,
    (struct CInpLockGuard *)(this + 9));
  v8 = (unsigned int)CTouchProcessor::SetPointerInfoNodeFlag(this, a2, a3, a4);
  if ( !v11 )
    CInpLockGuard::UnLock((PERESOURCE *)v10);
  return v8;
}
