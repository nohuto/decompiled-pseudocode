/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01155A0
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  PERESOURCE *v3; // rbx
  __int64 v4; // rdi
  int IsValid; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi

  v3 = this + 9;
  v4 = a3;
  CInpLockGuard::LockExclusive(this + 9);
  IsValid = CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)a2 + 12) + 576 * v4));
  v8 = (v7 + 232) & -(__int64)(IsValid != 0);
  CInpLockGuard::UnLock(v3);
  return (const struct tagPOINTER_INFO *)v8;
}
