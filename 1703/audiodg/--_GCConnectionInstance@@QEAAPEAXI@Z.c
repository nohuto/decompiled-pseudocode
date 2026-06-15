/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140030D24
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000B350 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140031114 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
CConnectionInstance *__fastcall CConnectionInstance::`scalar deleting destructor'(CConnectionInstance *this)
{
  CInPlaceBuffer *v2; // rcx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 1) && *(_DWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 1) = 0LL;
  }
  v2 = (CInPlaceBuffer *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    CInPlaceBuffer::Release(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  operator delete(this);
  return this;
}
