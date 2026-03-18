/*
 * XREFs of ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C000C558
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C0002264 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCESET *__fastcall DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(DMMVIDPNSOURCESET *this, struct DMMVIDPN *const a2)
{
  char *v3; // rcx

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  v3 = (char *)this + 8;
  *(_QWORD *)v3 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  *((_QWORD *)v3 + 3) = v3 + 16;
  *((_QWORD *)v3 + 2) = v3 + 16;
  *((_DWORD *)v3 + 10) = 2;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 22) = 1833172998;
  *(_QWORD *)this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCESET>'};
  if ( (**(unsigned __int8 (__fastcall ***)(char *))v3)(v3) )
    ContainedBy<DMMVIDPN>::SetContainer((__int64)this + 64, (__int64)a2);
  else
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 4);
  return this;
}
