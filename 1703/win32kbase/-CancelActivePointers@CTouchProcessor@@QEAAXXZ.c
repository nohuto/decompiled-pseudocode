/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00A10E0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C00A1008 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(PERESOURCE *this)
{
  CInpLockGuard *v1; // rbx
  int v3; // r8d
  int v4; // r9d
  CTouchProcessor *v5; // rdi
  struct CInputPointerNode *v6; // rdx

  v1 = (CInpLockGuard *)(this + 25);
  CInpLockGuard::LockExclusive(this + 25);
  v5 = (CTouchProcessor *)this[36];
  while ( v5 != (CTouchProcessor *)(this + 36) )
  {
    v6 = (CTouchProcessor *)((char *)v5 - 16);
    v5 = *(CTouchProcessor **)v5;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v6, v3, v4);
  }
  CInpLockGuard::UnLock(v1);
}
