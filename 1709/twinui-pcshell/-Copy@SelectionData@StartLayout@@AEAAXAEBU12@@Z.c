/*
 * XREFs of ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008D420
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008D680 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008EE20 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAAXPEAUParsedPenWorkspaceLayout@@$$QEAU2@@Z @ 0x18008F66C (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Wrap_alloc@V-$allocator@UParsedPenWorkspaceLayout.c)
 *     std::_Func_impl__lambda_4e68ad2abbd0bb666338069fbee19963__std::allocator_int__StartLayout::SelectionData_ParsedPenWorkspaceLayout_const_&___ptr64_::_Do_call @ 0x18008F900 (std--_Func_impl__lambda_4e68ad2abbd0bb666338069fbee19963__std--allocator_int__StartLayout--Selec.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800F0570 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800F19CC (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 * Callees:
 *     ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18008F20C (--$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@V-$allo.c)
 *     ??$emplace_back@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18008F354 (--$emplace_back@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 */

void __fastcall StartLayout::SelectionData::Copy(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  _QWORD *v2; // r15
  __int64 v5; // rdi
  LPVOID *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rbp
  const WCHAR **v9; // rbx
  unsigned __int64 v10; // rdi
  const WCHAR *v11; // rcx
  __int64 v12; // rdi
  __int64 i; // rbp
  LPWSTR ppwsz; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  v5 = 0LL;
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  v6 = (LPVOID *)*((_QWORD *)this + 1);
  v7 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v6 + 7LL) >> 3;
  if ( (unsigned __int64)v6 > *((_QWORD *)this + 2) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      CoTaskMemFree(*v6);
      ++v5;
      ++v6;
    }
    while ( v5 != v7 );
  }
  v8 = 0LL;
  v2[1] = *v2;
  v9 = (const WCHAR **)*((_QWORD *)a2 + 1);
  v10 = (unsigned __int64)(*((_QWORD *)a2 + 2) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *((_QWORD *)a2 + 2) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *v9;
      ppwsz = 0LL;
      if ( SHStrDupW(v11, &ppwsz) >= 0 )
        std::vector<unsigned short *>::emplace_back<unsigned short * const &>(v2, &ppwsz);
      ++v9;
      ++v8;
    }
    while ( v8 != v10 );
  }
  *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
  v12 = *((_QWORD *)a2 + 5);
  for ( i = *((_QWORD *)a2 + 4); i != v12; i += 4LL )
    std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
      (char *)this + 32,
      i);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_BYTE *)this + 60) = *((_BYTE *)a2 + 60);
  *((_BYTE *)this + 61) = *((_BYTE *)a2 + 61);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
}
