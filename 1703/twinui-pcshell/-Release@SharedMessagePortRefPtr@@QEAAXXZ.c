/*
 * XREFs of ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x180173710
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@@QEAAJPEAUITabTipAdapterOwner@@@Z @ 0x18016DF3C (-RuntimeClassInitialize@TabTipAdapter@@QEAAJPEAUITabTipAdapterOwner@@@Z.c)
 *     ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x180173708 (--1SharedMessagePortRefPtr@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SharedMessagePortRefPtr::Release(SharedMessagePortRefPtr *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
