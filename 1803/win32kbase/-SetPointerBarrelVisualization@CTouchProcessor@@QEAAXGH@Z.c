/*
 * XREFs of ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C011BA20
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerBarrelVisualization(CTouchProcessor *this, unsigned __int16 a2, char a3)
{
  struct CInputPointerNode *NodeById; // rax
  CInpLockGuard *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v7,
    (CTouchProcessor *)((char *)this + 72));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 1, 0);
  if ( NodeById )
    *((_DWORD *)NodeById + 82) = *((_DWORD *)NodeById + 82) & 0xFFFFFBFF | ((a3 & 1 | 2) << 10);
  if ( !v8 )
    CInpLockGuard::UnLock((PERESOURCE *)v7);
}
