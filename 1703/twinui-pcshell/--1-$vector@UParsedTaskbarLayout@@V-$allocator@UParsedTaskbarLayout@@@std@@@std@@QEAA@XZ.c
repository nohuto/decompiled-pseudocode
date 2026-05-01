/*
 * XREFs of ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18008C344
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008B050 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CD600 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$2 @ 0x18019BC26 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$2.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$7 @ 0x18019D172 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$7.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(__int64 a1)
{
  char *v2; // rbx
  char *v3; // rbp
  unsigned __int64 i; // rdi
  __int64 v5; // rcx

  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v2 != v3 )
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v2 + 32));
      if ( *(_QWORD *)v2 )
      {
        for ( i = 0LL; i < *((_QWORD *)v2 + 1); ++i )
        {
          v5 = *(_QWORD *)(*(_QWORD *)v2 + 8 * i);
          if ( v5 )
          {
            *(_QWORD *)(*(_QWORD *)v2 + 8 * i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        CoTaskMemFree(*(LPVOID *)v2);
        *(_QWORD *)v2 = 0LL;
      }
      *((_QWORD *)v2 + 1) = 0LL;
      *((_QWORD *)v2 + 3) = 0LL;
      v2 += 104;
    }
    std::_Deallocate(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 104LL, 0x68uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
