/*
 * XREFs of ?SetQueryHelper@CQueryKnownGameList@@UEAAJPEAUIQueryHelper@KnownGameList@@@Z @ 0x18003B8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueryKnownGameList::SetQueryHelper(
        CQueryKnownGameList *this,
        struct KnownGameList::IQueryHelper *a2)
{
  __int64 v4; // rcx

  if ( *((struct KnownGameList::IQueryHelper **)this + 93) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct KnownGameList::IQueryHelper *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 93);
    *((_QWORD *)this + 93) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
