/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C0121720
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  char *v3; // rbx
  __int64 v4; // rdi
  int IsValid; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi

  v3 = (char *)(this + 25);
  v4 = a3;
  CInpLockGuard::LockExclusive(this + 25);
  IsValid = CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)a2 + 12) + 608 * v4));
  *((_QWORD *)v3 + 4) = 0LL;
  v8 = (v7 + 248) & -(__int64)(IsValid != 0);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v3);
  return (const struct tagPOINTER_INFO *)v8;
}
