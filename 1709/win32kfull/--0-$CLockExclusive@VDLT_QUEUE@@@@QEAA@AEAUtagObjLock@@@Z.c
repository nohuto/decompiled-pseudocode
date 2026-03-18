/*
 * XREFs of ??0?$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00A07E0
 * Callers:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockExclusive<DLT_QUEUE>::CLockExclusive<DLT_QUEUE>(__int64 a1, __int64 a2)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax

  DLT = DLT_QUEUE::getDLT(a1);
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  *(_QWORD *)a1 = DomainLockRef;
  *(_QWORD *)(a1 + 8) = a2;
  tagObjLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive(*(tagObjLock **)(a1 + 8));
  return a1;
}
