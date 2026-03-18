/*
 * XREFs of ??1?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C01A0A60
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockDomainExclusive<DLT_CLIENTLIB>::~CLockDomainExclusive<DLT_CLIENTLIB>(tagObjLock **a1)
{
  tagObjLock::UnLock(*a1);
}
