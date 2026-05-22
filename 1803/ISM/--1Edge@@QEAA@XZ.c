/*
 * XREFs of ??1Edge@@QEAA@XZ @ 0x180067EEC
 * Callers:
 *     _Edges::AddOrUpdate_::_1_::dtor$0 @ 0x1800E701A (_Edges--AddOrUpdate_--_1_--dtor$0.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$0_0 @ 0x1800E7068 (_Edges--AddOrUpdate_--_1_--dtor$0_0.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$0_1 @ 0x1800E7096 (_Edges--AddOrUpdate_--_1_--dtor$0_1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Edge::~Edge(Edge *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (**(void (__fastcall ***)(__int64))(v2 + 16))(v2 + 16);
  }
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this + 1);
}
