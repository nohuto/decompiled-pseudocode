/*
 * XREFs of ?BreakLinksForCycles@CCyclicResourceListEntry@@UEAAXXZ @ 0x180019890
 * Callers:
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180019550 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 *     ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x1801B6DA0 (-BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCyclicResourceListEntry::BreakLinksForCycles(CCyclicResourceListEntry *this)
{
  __int64 v1; // rbx

  v1 = (**(__int64 (__fastcall ***)(CCyclicResourceListEntry *))this)(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, 0LL, 0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
