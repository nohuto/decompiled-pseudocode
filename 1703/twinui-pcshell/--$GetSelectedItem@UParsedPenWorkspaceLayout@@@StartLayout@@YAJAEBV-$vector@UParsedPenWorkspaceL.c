/*
 * XREFs of ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800CEA60
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CD600 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008AB7C (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008AE6C (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ??R?$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z @ 0x18008CEC4 (--R-$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA-AUSelectionData.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StartLayout::GetSelectedItem<ParsedPenWorkspaceLayout>(
        __int64 *a1,
        StartLayout::SelectionData *a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdi
  int SelectionScore; // r13d
  unsigned __int64 i; // r14
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE v23[136]; // [rsp+30h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v7 = -1;
  v8 = *a1;
  v9 = a1[1];
  if ( *a1 == v9 )
    goto LABEL_25;
  do
  {
    std::_Func_class<StartLayout::SelectionData,ParsedTaskbarLayout const &>::operator()(a3, (__int64)v23);
    SelectionScore = StartLayout::SelectionData::GetSelectionScore(a2, (const struct StartLayout::SelectionData *)v23);
    if ( SelectionScore > v7 )
    {
      if ( a4 != v8 )
      {
        if ( *(_QWORD *)a4 )
        {
          for ( i = 0LL; i < *(_QWORD *)(a4 + 8); ++i )
          {
            v12 = *(_QWORD *)(*(_QWORD *)a4 + 8 * i);
            if ( v12 )
            {
              *(_QWORD *)(*(_QWORD *)a4 + 8 * i) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            }
          }
          CoTaskMemFree(*(LPVOID *)a4);
          *(_QWORD *)a4 = 0LL;
        }
        *(_QWORD *)(a4 + 8) = 0LL;
        *(_QWORD *)(a4 + 24) = 0LL;
        v13 = *(__int64 **)v8;
        v14 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
        while ( v13 != (__int64 *)v14 )
        {
          v15 = *(_QWORD *)(a4 + 8);
          if ( v15 != *(_QWORD *)(a4 + 24)
            || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                 a4,
                 v15 + 1) >= 0 )
          {
            v16 = (__int64 *)(*(_QWORD *)a4 + 8 * (*(_QWORD *)(a4 + 8))++);
            if ( v16 )
            {
              v17 = *v13;
              *v16 = *v13;
              if ( v17 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            }
          }
          ++v13;
        }
        StartLayout::SelectionData::Copy(
          (StartLayout::SelectionData *)(a4 + 32),
          (const struct StartLayout::SelectionData *)(v8 + 32));
      }
      v7 = SelectionScore;
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)v23);
    v8 += 104LL;
  }
  while ( v8 != v9 );
  if ( v7 == -1 )
  {
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"internal\\shellcommonshell\\inc\\startlayoutselectiondata.h",
      (const char *)0x80070490LL);
    StartLayout::SelectionData::~SelectionData(a2);
    v22 = *(_QWORD *)(a3 + 56);
    if ( v22 )
    {
      LOBYTE(v21) = v22 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v21);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    StartLayout::SelectionData::~SelectionData(a2);
    v19 = *(_QWORD *)(a3 + 56);
    if ( v19 )
    {
      LOBYTE(v18) = v19 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v18);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
}
