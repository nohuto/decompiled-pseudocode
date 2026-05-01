/*
 * XREFs of ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18014A6DC
 * Callers:
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x18014A0C8 (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedPenW.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18014B2D0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     std::_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__StartLayout::SelectionData_ParsedPenWorkspaceLayout_const_&___ptr64_::_Do_call @ 0x18014BD70 (std--_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__StartLayout--Sel_ea_18014BD70.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18019BEF0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18014ACC8 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
StartLayout::SelectionData *__fastcall StartLayout::SelectionData::SelectionData(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  *(_DWORD *)this = 0;
  *((_WORD *)this + 2) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 30) = 0;
  *((_DWORD *)this + 16) = 0;
  StartLayout::SelectionData::Copy(this, a2);
  return this;
}
