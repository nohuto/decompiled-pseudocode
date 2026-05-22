/*
 * XREFs of ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x1800841F4
 * Callers:
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x180083170 (--1ViewHierarchy@@UEAA@XZ.c)
 *     ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180083280 (-OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180083340 (-OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180083500 (-OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180083560 (-OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?Shutdown@ViewHierarchy@@UEAAXXZ @ 0x180084150 (-Shutdown@ViewHierarchy@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewHierarchy::RemoveListListenerReference(ViewHierarchy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 72LL))(v2, (char *)this + 8);
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
    {
      *((_QWORD *)this + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
