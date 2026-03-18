/*
 * XREFs of ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C01267B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerBarrelVisualization(CTouchProcessor *this, unsigned __int16 a2, int a3)
{
  struct CInputPointerNode *NodeById; // rax
  int v7; // r8d
  __int64 v8; // r9
  PERESOURCE *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v10,
    (CTouchProcessor *)((char *)this + 200));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 1, 0);
  if ( NodeById )
    *((_DWORD *)NodeById + 86) = *((_DWORD *)NodeById + 86) & 0xFFFFFBFF | ((v7 & a3 | 2) << 10);
  if ( v11 == (_DWORD)v8 )
  {
    v9 = (PERESOURCE *)v10;
    *(_QWORD *)(v10 + 32) &= v8;
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  }
}
