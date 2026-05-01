/*
 * XREFs of ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800F19CC
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800F0570 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18008D1F4 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008D420 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rcx
  int SelectionScore; // r13d
  unsigned __int64 i; // r14
  __int64 v13; // rcx
  __int64 *v14; // r14
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _BYTE v24[136]; // [rsp+30h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v7 = -1;
  v8 = *a1;
  v9 = a1[1];
  if ( *a1 == v9 )
    goto LABEL_27;
  do
  {
    v10 = *(_QWORD *)(a3 + 56);
    if ( !v10 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v10 + 16LL))(v10, v24, v8);
    SelectionScore = StartLayout::SelectionData::GetSelectionScore(a2, (const struct StartLayout::SelectionData *)v24);
    if ( SelectionScore > v7 )
    {
      if ( a4 != v8 )
      {
        if ( *(_QWORD *)a4 )
        {
          for ( i = 0LL; i < *(_QWORD *)(a4 + 8); ++i )
          {
            v13 = *(_QWORD *)(*(_QWORD *)a4 + 8 * i);
            if ( v13 )
            {
              *(_QWORD *)(*(_QWORD *)a4 + 8 * i) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            }
          }
          CoTaskMemFree(*(LPVOID *)a4);
          *(_QWORD *)a4 = 0LL;
        }
        *(_QWORD *)(a4 + 8) = 0LL;
        *(_QWORD *)(a4 + 24) = 0LL;
        v14 = *(__int64 **)v8;
        v15 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
        while ( v14 != (__int64 *)v15 )
        {
          v16 = *(_QWORD *)(a4 + 8);
          if ( v16 != *(_QWORD *)(a4 + 24)
            || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                 a4,
                 v16 + 1) >= 0 )
          {
            v17 = (__int64 *)(*(_QWORD *)a4 + 8 * (*(_QWORD *)(a4 + 8))++);
            if ( v17 )
            {
              v18 = *v14;
              *v17 = *v14;
              if ( v18 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
            }
          }
          ++v14;
        }
        StartLayout::SelectionData::Copy(
          (StartLayout::SelectionData *)(a4 + 32),
          (const struct StartLayout::SelectionData *)(v8 + 32));
      }
      v7 = SelectionScore;
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)v24);
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
    v23 = *(_QWORD *)(a3 + 56);
    if ( v23 )
    {
      LOBYTE(v22) = v23 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v22);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    StartLayout::SelectionData::~SelectionData(a2);
    v20 = *(_QWORD *)(a3 + 56);
    if ( v20 )
    {
      LOBYTE(v19) = v20 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v19);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
}
