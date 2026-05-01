/*
 * XREFs of ??$destroy@UParsedTaskbarLayout@@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@@Z @ 0x18008F764
 * Callers:
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch$67 @ 0x1801EA919 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--emplace_back_P.c)
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::destroy<ParsedTaskbarLayout>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 i; // rdi
  __int64 v4; // rcx

  StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(a2 + 32));
  if ( *(_QWORD *)a2 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a2 + 8); ++i )
    {
      v4 = *(_QWORD *)(*(_QWORD *)a2 + 8 * i);
      if ( v4 )
      {
        *(_QWORD *)(*(_QWORD *)a2 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    CoTaskMemFree(*(LPVOID *)a2);
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
}
