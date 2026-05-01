/*
 * XREFs of ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18008E918
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008D680 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800F0570 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$2 @ 0x1801EA696 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$2.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$7 @ 0x1801ECF24 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$7.c)
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(void **a1)
{
  LPVOID *v2; // rbx
  LPVOID *v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  void *v6; // r8
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v2 = (LPVOID *)*a1;
  if ( *a1 )
  {
    v3 = (LPVOID *)a1[1];
    while ( v2 != v3 )
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v2 + 4));
      if ( *v2 )
      {
        v4 = 0LL;
        if ( v2[1] )
        {
          do
          {
            v5 = *((_QWORD *)*v2 + v4);
            if ( v5 )
            {
              *((_QWORD *)*v2 + v4) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            }
            ++v4;
          }
          while ( v4 < (unsigned __int64)v2[1] );
        }
        CoTaskMemFree(*v2);
        *v2 = 0LL;
      }
      v2[1] = 0LL;
      v2[3] = 0LL;
      v2 += 13;
    }
    v6 = *a1;
    v7 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    if ( (unsigned __int64)(v7 / 104) <= 0x276276276276276LL )
    {
      if ( (unsigned __int64)(104 * (v7 / 104)) < 0x1000 )
      {
LABEL_17:
        operator delete(v6);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( ((unsigned __int8)v6 & 0x1F) == 0 )
      {
        v8 = *((_QWORD *)v6 - 1);
        if ( v8 < (unsigned __int64)v6 && (unsigned __int64)v6 - v8 - 8 <= 0x1F )
        {
          v6 = (void *)*((_QWORD *)v6 - 1);
          goto LABEL_17;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v7);
  }
}
