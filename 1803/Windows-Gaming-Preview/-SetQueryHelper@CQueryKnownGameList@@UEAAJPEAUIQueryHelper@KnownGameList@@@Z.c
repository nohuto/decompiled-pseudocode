/*
 * XREFs of ?SetQueryHelper@CQueryKnownGameList@@UEAAJPEAUIQueryHelper@KnownGameList@@@Z @ 0x18003DA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueryKnownGameList::SetQueryHelper(
        CQueryKnownGameList *this,
        struct KnownGameList::IQueryHelper *a2)
{
  struct KnownGameList::IQueryHelper *v4; // rcx

  v4 = (struct KnownGameList::IQueryHelper *)*((_QWORD *)this + 94);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct KnownGameList::IQueryHelper *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct KnownGameList::IQueryHelper *)*((_QWORD *)this + 94);
    }
    *((_QWORD *)this + 94) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct KnownGameList::IQueryHelper *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
