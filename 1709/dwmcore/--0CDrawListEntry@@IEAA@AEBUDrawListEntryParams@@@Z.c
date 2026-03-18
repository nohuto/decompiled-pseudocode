/*
 * XREFs of ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x18011B7EC
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801549C8 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CDrawListEntry *__fastcall CDrawListEntry::CDrawListEntry(CDrawListEntry *this, const struct DrawListEntryParams *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _OWORD *v6; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  v4 = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = v4;
  *(_OWORD *)((char *)this + 24) = _xmm;
  *((_DWORD *)this + 11) = *(_DWORD *)a2;
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 6) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (_OWORD *)*((_QWORD *)a2 + 3);
  if ( v6 )
    *(_OWORD *)((char *)this + 24) = *v6;
  return this;
}
