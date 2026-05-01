/*
 * XREFs of ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180011C20
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180010EF0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180011CA8 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180029508 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::TaskList::Clear(Windows::Internal::ComTaskPool::TaskList *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = v1[3];
    v1[3] = 0LL;
    if ( *((_QWORD **)this + 1) == v1 )
      *((_QWORD *)this + 1) = 0LL;
    while ( v1 )
    {
      v3 = v1[2];
      if ( v3 )
      {
        v1[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      operator delete(v1, 0x20uLL);
      v1 = *(_QWORD **)this;
      if ( !*(_QWORD *)this )
        break;
      *(_QWORD *)this = v1[3];
      v1[3] = 0LL;
      if ( *((_QWORD **)this + 1) == v1 )
        *((_QWORD *)this + 1) = 0LL;
    }
  }
}
