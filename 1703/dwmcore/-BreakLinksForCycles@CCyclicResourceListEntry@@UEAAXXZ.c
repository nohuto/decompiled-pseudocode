/*
 * XREFs of ?BreakLinksForCycles@CCyclicResourceListEntry@@UEAAXXZ @ 0x18015A740
 * Callers:
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x18017B060 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCyclicResourceListEntry::BreakLinksForCycles(CCyclicResourceListEntry *this)
{
  _DWORD *v1; // rbx

  v1 = (_DWORD *)(**(__int64 (__fastcall ***)(CCyclicResourceListEntry *))this)(this);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 8LL))(v1);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 56LL))(v1);
  CResource::NotifyOnChanged(v1, 0LL, 0LL);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 16LL))(v1);
}
