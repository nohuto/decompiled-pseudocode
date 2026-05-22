/*
 * XREFs of ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x18002CA18
 * Callers:
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x18002B8D4 (--1ViewHierarchy@@UEAA@XZ.c)
 *     ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002BA10 (-OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002BAD0 (-OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002BCD0 (-OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18002BD30 (-OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?Shutdown@ViewHierarchy@@UEAAXXZ @ 0x18002C970 (-Shutdown@ViewHierarchy@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
