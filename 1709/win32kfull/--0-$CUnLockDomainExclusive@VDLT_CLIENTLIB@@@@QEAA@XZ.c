/*
 * XREFs of ??0?$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C011925C
 * Callers:
 *     xxxDoSysExpunge @ 0x1C0058E0C (xxxDoSysExpunge.c)
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

tagObjLock **__fastcall CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(tagObjLock **a1)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax

  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  tagObjLock::UnLock(DomainLockRef);
  return a1;
}
