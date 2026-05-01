/*
 * XREFs of ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@PEAUParsedPenWorkspaceLayout@@@std@@YAXPEAUParsedPenWorkspaceLayout@@0AEAU?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@0@@Z @ 0x18008CE38
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked1_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayout_____ptr64_std::allocator_ParsedPenWorkspaceLayout____::_1_::catch$1 @ 0x18019BF7A (_std--_Uninitialized_move_al_unchecked1_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLay.c)
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>,ParsedPenWorkspaceLayout *>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 i; // rdi
  __int64 v5; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v3 + 32));
      if ( *(_QWORD *)v3 )
      {
        for ( i = 0LL; i < *(_QWORD *)(v3 + 8); ++i )
        {
          v5 = *(_QWORD *)(*(_QWORD *)v3 + 8 * i);
          if ( v5 )
          {
            *(_QWORD *)(*(_QWORD *)v3 + 8 * i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        CoTaskMemFree(*(LPVOID *)v3);
        *(_QWORD *)v3 = 0LL;
      }
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 24) = 0LL;
      v3 += 104LL;
    }
    while ( v3 != a2 );
  }
}
