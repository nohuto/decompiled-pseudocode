/*
 * XREFs of ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x180149D30
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18014B2D0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18014A854 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x18014A8D4 (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??R?$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z @ 0x18014A994 (--R-$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA-AUSelectionData.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18014ADF4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StartLayout::GetSelectedItem<ParsedTaskbarLayout>(
        __int64 *a1,
        StartLayout::SelectionData *a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r14
  int SelectionScore; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE v16[80]; // [rsp+30h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v7 = -1;
  v8 = *a1;
  v9 = a1[1];
  if ( *a1 == v9 )
    goto LABEL_9;
  do
  {
    std::_Func_class<StartLayout::SelectionData,ParsedTaskbarLayout const &>::operator()(a3, v16, v8);
    SelectionScore = StartLayout::SelectionData::GetSelectionScore(a2, (const struct StartLayout::SelectionData *)v16);
    if ( SelectionScore > v7 )
    {
      ParsedTaskbarLayout::operator=(a4, v8);
      v7 = SelectionScore;
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)v16);
    v8 += 104LL;
  }
  while ( v8 != v9 );
  if ( v7 == -1 )
  {
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"internal\\shellcommonshell\\inc\\startlayoutselectiondata.h",
      (const char *)0x80070490LL);
    StartLayout::SelectionData::~SelectionData(a2);
    v15 = *(_QWORD *)(a3 + 56);
    if ( v15 )
    {
      LOBYTE(v14) = v15 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v14);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    StartLayout::SelectionData::~SelectionData(a2);
    v12 = *(_QWORD *)(a3 + 56);
    if ( v12 )
    {
      LOBYTE(v11) = v12 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
}
