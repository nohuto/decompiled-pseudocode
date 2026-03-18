/*
 * XREFs of ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C000A508
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTOPOLOGY *__fastcall DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY(DMMVIDPNTOPOLOGY *this)
{
  unsigned __int8 (__fastcall ***v1)(_QWORD); // rdi
  void *v3; // rax
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rcx
  unsigned __int8 (__fastcall **v7)(_QWORD); // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx

  v1 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 8);
  *(_QWORD *)this = &Set<DMMVIDPNPRESENTPATH>::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNPRESENTPATH>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_BYTE *)this + 192) = 1;
  *((_QWORD *)this + 7) = &ProtectableFromChange::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 76) = 4;
  *((_WORD *)this + 39) = 0;
  *((_QWORD *)this + 10) = &Vector<unsigned __int64>::`vftable';
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 4LL;
  *((_DWORD *)this + 28) = 1;
  v3 = operator new(4uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 13) = v3;
  if ( v3 )
  {
    memset(v3, 0, *((_QWORD *)this + 12));
    *((_DWORD *)this + 28) = 2;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v4);
    WdLogEvent5_WdLowResource(v9);
    *((_DWORD *)this + 22) = -1073741801;
  }
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 4LL;
  *((_QWORD *)this + 15) = &Vector<unsigned __int64>::`vftable';
  *((_DWORD *)this + 38) = 1;
  v5 = operator new(0x20uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 18) = v5;
  if ( v5 )
  {
    memset(v5, 0, 8LL * *((_QWORD *)this + 17));
    *((_DWORD *)this + 38) = 2;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v6);
    WdLogEvent5_WdLowResource(v10);
    *((_DWORD *)this + 32) = -1073741801;
  }
  *((_DWORD *)this + 18) = 2;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 46) = 1833173002;
  *(_QWORD *)this = &DMMVIDPNTOPOLOGY::`vftable'{for `Set<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 7) = &DMMVIDPNTOPOLOGY::`vftable'{for `ProtectableFromChange'};
  *((_QWORD *)this + 20) = &DMMVIDPNTOPOLOGY::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 22) = &DMMVIDPNTOPOLOGY::`vftable'{for `SignedWithClassSignature<DMMVIDPNTOPOLOGY>'};
  v7 = *v1;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 200) = 0;
  if ( !(*v7)(v1) )
  {
    v11 = WdLogNewEntry5_WdTrace();
    v12 = *((int *)this + 4);
LABEL_12:
    *(_QWORD *)(v11 + 24) = v12;
    return this;
  }
  if ( *((_DWORD *)this + 18) != 2 )
  {
    v11 = WdLogNewEntry5_WdTrace();
    v12 = *((int *)this + 16);
    goto LABEL_12;
  }
  return this;
}
