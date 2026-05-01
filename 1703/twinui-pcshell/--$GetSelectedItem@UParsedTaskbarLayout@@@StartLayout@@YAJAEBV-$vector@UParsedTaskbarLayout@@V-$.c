/*
 * XREFs of ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008C788
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008B050 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008AB7C (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008AE6C (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ??R?$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z @ 0x18008CEC4 (--R-$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA-AUSelectionData.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall StartLayout::GetSelectedItem<ParsedTaskbarLayout>(
        __int64 *a1,
        StartLayout::SelectionData *a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 i; // rbx
  __int64 v11; // rcx
  __int64 *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _BYTE v22[136]; // [rsp+30h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int SelectionScore; // [rsp+C0h] [rbp+8h]

  v7 = -1;
  v8 = *a1;
  v9 = a1[1];
  if ( *a1 == v9 )
    goto LABEL_27;
  do
  {
    std::_Func_class<StartLayout::SelectionData,ParsedTaskbarLayout const &>::operator()(a3, v22, v8);
    SelectionScore = StartLayout::SelectionData::GetSelectionScore(a2, (const struct StartLayout::SelectionData *)v22);
    if ( SelectionScore > v7 )
    {
      if ( *(_QWORD *)a4 )
      {
        for ( i = 0LL; i < *(_QWORD *)(a4 + 8); ++i )
        {
          v11 = *(_QWORD *)(*(_QWORD *)a4 + 8 * i);
          if ( v11 )
          {
            *(_QWORD *)(*(_QWORD *)a4 + 8 * i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        CoTaskMemFree(*(LPVOID *)a4);
        *(_QWORD *)a4 = 0LL;
      }
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_QWORD *)(a4 + 24) = 0LL;
      v12 = *(__int64 **)v8;
      v13 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
      while ( v12 != (__int64 *)v13 )
      {
        v14 = *v12;
        if ( *v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = *(_QWORD *)(a4 + 8);
        if ( v15 != *(_QWORD *)(a4 + 24)
          || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
               a4,
               v15 + 1) >= 0 )
        {
          v16 = (_QWORD *)(*(_QWORD *)a4 + 8 * (*(_QWORD *)(a4 + 8))++);
          if ( v16 )
          {
            *v16 = v14;
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        ++v12;
      }
      StartLayout::SelectionData::Copy(
        (StartLayout::SelectionData *)(a4 + 32),
        (const struct StartLayout::SelectionData *)(v8 + 32));
      v7 = SelectionScore;
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)v22);
    v8 += 104LL;
  }
  while ( v8 != v9 );
  if ( v7 == -1 )
  {
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"internal\\shellcommonshell\\inc\\startlayoutselectiondata.h",
      (const char *)0x80070490LL);
    StartLayout::SelectionData::~SelectionData(a2);
    v21 = *(_QWORD *)(a3 + 56);
    if ( v21 )
    {
      LOBYTE(v20) = v21 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v20);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    StartLayout::SelectionData::~SelectionData(a2);
    v18 = *(_QWORD *)(a3 + 56);
    if ( v18 )
    {
      LOBYTE(v17) = v18 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v17);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
}
