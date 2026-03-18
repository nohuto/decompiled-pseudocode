/*
 * XREFs of ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00042C8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00BC600 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0ProtectableFromChange@@QEAA@EE@Z @ 0x1C00040F0 (--0ProtectableFromChange@@QEAA@EE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTOPOLOGY *__fastcall DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY(DMMVIDPNTOPOLOGY *this)
{
  unsigned __int8 (__fastcall ***v1)(_QWORD); // rdi
  unsigned __int8 (__fastcall **v3)(_QWORD); // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 8);
  *(_QWORD *)this = &Set<DMMVIDPNPRESENTPATH>::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_BYTE *)this + 192) = 1;
  ProtectableFromChange::ProtectableFromChange((DMMVIDPNTOPOLOGY *)((char *)this + 56));
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 46) = 1833173002;
  *((_DWORD *)this + 49) = 0;
  *(_QWORD *)this = &DMMVIDPNTOPOLOGY::`vftable'{for `Set<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 7) = &DMMVIDPNTOPOLOGY::`vftable'{for `ProtectableFromChange'};
  *((_QWORD *)this + 20) = &DMMVIDPNTOPOLOGY::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 22) = &DMMVIDPNTOPOLOGY::`vftable'{for `SignedWithClassSignature<DMMVIDPNTOPOLOGY>'};
  v3 = *v1;
  *((_BYTE *)this + 200) = 0;
  if ( !(*v3)(v1) )
  {
    v5 = WdLogNewEntry5_WdTrace();
    v6 = *((int *)this + 4);
LABEL_6:
    *(_QWORD *)(v5 + 24) = v6;
    return this;
  }
  if ( *((_DWORD *)this + 18) != 2 )
  {
    v5 = WdLogNewEntry5_WdTrace();
    v6 = *((int *)this + 16);
    goto LABEL_6;
  }
  return this;
}
