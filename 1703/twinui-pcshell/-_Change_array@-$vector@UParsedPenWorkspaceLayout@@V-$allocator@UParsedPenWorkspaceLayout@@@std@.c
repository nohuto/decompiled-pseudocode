/*
 * XREFs of ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18008CEF8
 * Callers:
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008CA34 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ParsedPenWorkspaceLayout>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // r14
  unsigned __int64 i; // rsi
  __int64 v11; // rcx
  __int64 result; // rax

  v4 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(char **)(a1 + 8);
    while ( v4 != v9 )
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v4 + 32));
      if ( *(_QWORD *)v4 )
      {
        for ( i = 0LL; i < *((_QWORD *)v4 + 1); ++i )
        {
          v11 = *(_QWORD *)(*(_QWORD *)v4 + 8 * i);
          if ( v11 )
          {
            *(_QWORD *)(*(_QWORD *)v4 + 8 * i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        CoTaskMemFree(*(LPVOID *)v4);
        *(_QWORD *)v4 = 0LL;
      }
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      v4 += 104;
    }
    std::_Deallocate(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 104LL, 0x68uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 104 * a3;
  result = a2 + 104 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
