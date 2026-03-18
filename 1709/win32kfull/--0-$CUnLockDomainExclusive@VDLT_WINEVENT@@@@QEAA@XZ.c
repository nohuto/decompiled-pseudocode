/*
 * XREFs of ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0102FD0
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C006E334 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

tagObjLock **__fastcall CUnLockDomainExclusive<DLT_WINEVENT>::CUnLockDomainExclusive<DLT_WINEVENT>(tagObjLock **a1)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  tagObjLock::UnLock(DomainLockRef);
  return a1;
}
