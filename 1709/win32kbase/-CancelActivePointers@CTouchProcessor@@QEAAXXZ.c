/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00072A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011AAF8 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(CTouchProcessor *this)
{
  char *v1; // rbx
  CTouchProcessor *v3; // rdi
  struct CInputPointerNode *v4; // rdx

  v1 = (char *)this + 224;
  CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)this + 224));
  v3 = (CTouchProcessor *)*((_QWORD *)this + 39);
  while ( v3 != (CTouchProcessor *)((char *)this + 312) )
  {
    v4 = (CTouchProcessor *)((char *)v3 - 16);
    v3 = *(CTouchProcessor **)v3;
    CTouchProcessor::CancelActivePointer(this, v4);
  }
  *((_QWORD *)v1 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v1);
}
