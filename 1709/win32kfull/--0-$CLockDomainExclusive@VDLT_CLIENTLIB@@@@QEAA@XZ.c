/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C005A10C
 * Callers:
 *     RemoveHmodDependency @ 0x1C0058D88 (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C0058E0C (xxxDoSysExpunge.c)
 *     AddHmodDependency @ 0x1C00590AC (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00590E8 (GetHmodTableIndex.c)
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

tagObjLock **__fastcall CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(tagObjLock **a1)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax

  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  tagObjLock::LockExclusive(DomainLockRef);
  return a1;
}
