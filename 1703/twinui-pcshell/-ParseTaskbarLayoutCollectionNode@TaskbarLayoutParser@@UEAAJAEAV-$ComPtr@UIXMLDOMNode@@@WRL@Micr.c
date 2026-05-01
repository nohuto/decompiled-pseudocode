/*
 * XREFs of ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008B050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008AE6C (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18008B774 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18008B9B8 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18008C344 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008C788 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008CA34 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode(
        TaskbarLayoutParser *this,
        _QWORD *a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct IXMLDOMNode *v11; // rcx
  __int64 v12; // rbx
  const char *v13; // r9
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 i; // rax
  __int64 v17; // rdx
  struct IXMLDOMNode *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 j; // rax
  __int64 v23; // rdx
  int Selected; // eax
  unsigned int v25; // esi
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rbx
  unsigned __int64 m; // rax
  __int64 v29; // rdx
  struct IXMLDOMNode *v30; // rcx
  __int64 v31; // rcx
  char *v32; // rsi
  char *v33; // r15
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  _QWORD *v36; // rdx
  _QWORD *v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned __int64 k; // rax
  __int64 v40; // rdx
  struct IXMLDOMNode *v41; // rcx
  __int64 v42; // rcx
  struct IXMLDOMNode *v43; // [rsp+20h] [rbp-178h] BYREF
  __int64 v44; // [rsp+28h] [rbp-170h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-168h] BYREF
  __int128 v46; // [rsp+38h] [rbp-160h]
  __int64 v47; // [rsp+48h] [rbp-150h]
  __int128 v48; // [rsp+50h] [rbp-148h] BYREF
  __int128 v49; // [rsp+60h] [rbp-138h]
  __int128 v50; // [rsp+70h] [rbp-128h]
  __int64 v51; // [rsp+80h] [rbp-118h]
  int v52; // [rsp+88h] [rbp-110h]
  __int16 v53; // [rsp+8Ch] [rbp-10Ch]
  int v54; // [rsp+90h] [rbp-108h]
  LPVOID v55; // [rsp+A0h] [rbp-F8h] BYREF
  unsigned __int64 v56; // [rsp+A8h] [rbp-F0h]
  __int64 v57; // [rsp+B0h] [rbp-E8h]
  __int64 v58; // [rsp+B8h] [rbp-E0h]
  int v59; // [rsp+C0h] [rbp-D8h] BYREF
  __int16 v60; // [rsp+C4h] [rbp-D4h]
  __int64 v61; // [rsp+C8h] [rbp-D0h]
  __int128 v62; // [rsp+D0h] [rbp-C8h]
  __int128 v63; // [rsp+E0h] [rbp-B8h]
  __int64 v64; // [rsp+F0h] [rbp-A8h]
  int v65; // [rsp+F8h] [rbp-A0h]
  __int16 v66; // [rsp+FCh] [rbp-9Ch]
  int v67; // [rsp+100h] [rbp-98h]
  __int128 v68; // [rsp+110h] [rbp-88h] BYREF
  __int64 v69; // [rsp+120h] [rbp-78h]
  __int64 v70; // [rsp+128h] [rbp-70h]
  LPVOID *p_pv; // [rsp+130h] [rbp-68h]
  _QWORD v72[9]; // [rsp+138h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]
  _QWORD *v74; // [rsp+1B8h] [rbp+20h] BYREF

  v70 = -2LL;
  v6 = TaskbarLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5A,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v44 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 96LL))(*a2, &v44);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v9);
    v10 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v7;
  }
  v11 = 0LL;
  v43 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  while ( 1 )
  {
    v12 = v44;
    if ( v11 )
    {
      v43 = 0LL;
      ((void (__fastcall *)(struct IXMLDOMNode *))v11->lpVtbl->Release)(v11);
    }
    if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v12 + 72LL))(v12, &v43) < 0 || !v43 )
      break;
    pv = 0LL;
    v46 = 0uLL;
    v47 = 0LL;
    LODWORD(v48) = 0;
    WORD2(v48) = 0;
    *((_QWORD *)&v48 + 1) = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    if ( (int)TaskbarLayoutParser::ParseTaskbarLayoutNode(this, v43, (struct ParsedTaskbarLayout *)&pv) >= 0 )
    {
      try
      {
        std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>(&v68, &pv);
      }
      catch ( ... )
      {
        LODWORD(v74) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x6A,
                         (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                         v13);
        StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v48);
        v14 = pv;
        if ( pv )
        {
          v15 = 0LL;
          for ( i = v46; v15 < i; ++v15 )
          {
            v17 = v14[v15];
            if ( v17 )
            {
              v14[v15] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
              i = v46;
              v14 = pv;
            }
          }
          CoTaskMemFree(v14);
          pv = 0LL;
        }
        *(_QWORD *)&v46 = 0LL;
        v47 = 0LL;
        std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(&v68);
        v18 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          ((void (__fastcall *)(struct IXMLDOMNode *))v18->lpVtbl->Release)(v18);
        }
        v19 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        return (unsigned int)v74;
      }
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v48);
    v20 = pv;
    if ( pv )
    {
      v21 = 0LL;
      for ( j = v46; v21 < j; ++v21 )
      {
        v23 = v20[v21];
        if ( v23 )
        {
          v20[v21] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          j = v46;
          v20 = pv;
        }
      }
      CoTaskMemFree(v20);
    }
    v11 = v43;
  }
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v74 = v72;
  p_pv = &pv;
  v72[0] = off_1801AE178;
  v72[7] = v72;
  LODWORD(pv) = 0;
  WORD2(pv) = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  *(_QWORD *)&v49 = 0LL;
  DWORD2(v49) = 0;
  WORD6(v49) = 0;
  LODWORD(v50) = 0;
  StartLayout::SelectionData::Copy((StartLayout::SelectionData *)&pv, (TaskbarLayoutParser *)((char *)this + 40));
  Selected = StartLayout::GetSelectedItem<ParsedTaskbarLayout>(&v68, &pv, v72, &v55);
  v25 = Selected;
  if ( Selected >= 0 )
  {
    v32 = (char *)v55;
    v33 = (char *)v55 + 8 * v56;
    while ( v32 != v33 )
    {
      v34 = *(_QWORD **)v32;
      v74 = v34;
      if ( v34 )
        (*(void (__fastcall **)(_QWORD *))(*v34 + 8LL))(v34);
      v35 = a3[1];
      if ( v35 != a3[3]
        || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
             (__int64)a3,
             v35 + 1) >= 0 )
      {
        v36 = (_QWORD *)(*a3 + 8 * a3[1]++);
        if ( v36 )
        {
          *v36 = 0LL;
          if ( v36 != &v74 )
          {
            *v36 = v34;
            v34 = 0LL;
          }
        }
      }
      if ( v34 )
        (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
      v32 += 8;
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v59);
    v37 = v55;
    if ( v55 )
    {
      v38 = 0LL;
      for ( k = v56; v38 < k; ++v38 )
      {
        v40 = v37[v38];
        if ( v40 )
        {
          v37[v38] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
          k = v56;
          v37 = v55;
        }
      }
      CoTaskMemFree(v37);
      v55 = 0LL;
    }
    v56 = 0LL;
    v58 = 0LL;
    std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(&v68);
    v41 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      ((void (__fastcall *)(struct IXMLDOMNode *))v41->lpVtbl->Release)(v41);
    }
    v42 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)Selected);
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v59);
    v26 = v55;
    if ( v55 )
    {
      v27 = 0LL;
      for ( m = v56; v27 < m; ++v27 )
      {
        v29 = v26[v27];
        if ( v29 )
        {
          v26[v27] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          m = v56;
          v26 = v55;
        }
      }
      CoTaskMemFree(v26);
      v55 = 0LL;
    }
    v56 = 0LL;
    v58 = 0LL;
    std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>(&v68);
    v30 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      ((void (__fastcall *)(struct IXMLDOMNode *))v30->lpVtbl->Release)(v30);
    }
    v31 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    return v25;
  }
}
