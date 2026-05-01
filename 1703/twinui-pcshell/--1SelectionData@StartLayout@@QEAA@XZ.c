/*
 * XREFs of ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008B050 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18008B6D0 (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18008C344 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008C788 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@PEAUParsedPenWorkspaceLayout@@@std@@YAXPEAUParsedPenWorkspaceLayout@@0AEAU?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@0@@Z @ 0x18008CE38 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@PEAUParsedPenWorkspaceLayout@@@s.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18008CEF8 (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 *     ??$destroy@UParsedTaskbarLayout@@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@@Z @ 0x18008D0F4 (--$destroy@UParsedTaskbarLayout@@@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Q.c)
 *     ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x18008D170 (--_GTaskbarLayoutParser@@UEAAPEAXI@Z.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CD600 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800CEA60 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$1 @ 0x18019BE2F (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$1.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$2 @ 0x18019BE3B (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$2.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$1 @ 0x18019D256 (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$1.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$2 @ 0x18019D262 (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$2.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall StartLayout::SelectionData::~SelectionData(StartLayout::SelectionData *this)
{
  LPVOID *v1; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  char *v5; // rcx
  char *v6; // rcx

  v1 = (LPVOID *)*((_QWORD *)this + 1);
  v3 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 2) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      CoTaskMemFree(*v1);
      ++v3;
      ++v1;
    }
    while ( v3 != v4 );
  }
  v5 = (char *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    std::_Deallocate(v5, (__int64)(*((_QWORD *)this + 6) - (_QWORD)v5) >> 2, 4uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    std::_Deallocate(v6, (__int64)(*((_QWORD *)this + 3) - (_QWORD)v6) >> 3, 8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
