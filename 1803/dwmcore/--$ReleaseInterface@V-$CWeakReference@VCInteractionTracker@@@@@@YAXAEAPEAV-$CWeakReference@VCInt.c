/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV?$CWeakReference@VCInteractionTracker@@@@@Z @ 0x1801BDAB4
 * Callers:
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801BDB14 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801C96F8 (--1InteractionSourceManager@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CWeakReference<CInteractionTracker>>(CWeakReferenceBase **a1)
{
  CWeakReferenceBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CWeakReferenceBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
