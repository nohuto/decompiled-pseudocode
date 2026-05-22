/*
 * XREFs of ?Shutdown@ViewHierarchy@@UEAAXXZ @ 0x180084150
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x1800841F4 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewHierarchy::Shutdown(ViewHierarchy *this)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 *v4; // rdi
  __int64 *j; // rbx
  __int64 v6; // rcx

  ViewHierarchy::RemoveListListenerReference((ViewHierarchy *)((char *)this - 16));
  v2 = (_QWORD *)*((_QWORD *)this + 20);
  for ( i = (_QWORD *)*((_QWORD *)this + 19); i != v2; ++i )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*i + 64LL))(*i, (char *)this + 16);
  v4 = (__int64 *)*((_QWORD *)this + 20);
  for ( j = (__int64 *)*((_QWORD *)this + 19); j != v4; ++j )
  {
    v6 = *j;
    if ( *j )
    {
      *j = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  *((_QWORD *)this + 20) = *((_QWORD *)this + 19);
}
