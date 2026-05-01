/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800F0570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008D174 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008D420 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18008E918 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@StartLayout@@@12@XZ @ 0x18008F058 (--$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSelectionDat.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008F0E4 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1800F1100 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1800F1344 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800F19CC (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode(PWSLayoutParser *this, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  PWSLayoutParser *v5; // r15
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct IXMLDOMNode *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  unsigned __int64 v16; // rax
  struct IPenWorkspaceLayoutItem **v17; // rdx
  struct IPenWorkspaceLayoutItem *v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // rcx
  struct IPenWorkspaceLayoutItem *v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int64 n; // rax
  __int64 v30; // rdx
  struct IXMLDOMNode *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 m; // rax
  __int64 v37; // rdx
  struct IXMLDOMNode *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  unsigned __int64 v42; // rbx
  unsigned __int64 k; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  unsigned __int64 j; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  unsigned __int64 i; // rax
  __int64 v52; // rdx
  struct IXMLDOMNode *v53; // rcx
  const char *v54; // r9
  int Selected; // eax
  _QWORD *v56; // rcx
  unsigned __int64 v57; // rbx
  unsigned __int64 ii; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rbx
  unsigned __int64 jj; // rax
  __int64 v62; // rdx
  __int64 *v63; // rdi
  __int64 *v64; // r15
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 *v67; // rdx
  _QWORD *v68; // rcx
  unsigned __int64 v69; // rbx
  unsigned __int64 kk; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  unsigned __int64 v73; // rbx
  unsigned __int64 mm; // rax
  __int64 v75; // rdx
  struct IXMLDOMNode *v76; // rcx
  __int64 v77; // rcx
  int v78[2]; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+28h] [rbp-1E0h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned __int64 v81; // [rsp+38h] [rbp-1D0h]
  __int64 v82; // [rsp+40h] [rbp-1C8h]
  __int64 v83; // [rsp+48h] [rbp-1C0h]
  int v84; // [rsp+50h] [rbp-1B8h] BYREF
  __int16 v85; // [rsp+54h] [rbp-1B4h]
  __int64 v86; // [rsp+58h] [rbp-1B0h]
  __int128 v87; // [rsp+60h] [rbp-1A8h]
  __int128 v88; // [rsp+70h] [rbp-198h]
  __int64 v89; // [rsp+80h] [rbp-188h]
  int v90; // [rsp+88h] [rbp-180h]
  __int16 v91; // [rsp+8Ch] [rbp-17Ch]
  int v92; // [rsp+90h] [rbp-178h]
  struct IPenWorkspaceLayoutItem *v93; // [rsp+A0h] [rbp-168h] BYREF
  int *v94; // [rsp+A8h] [rbp-160h] BYREF
  LPVOID v95; // [rsp+B0h] [rbp-158h] BYREF
  unsigned __int64 v96; // [rsp+B8h] [rbp-150h]
  __int128 v97; // [rsp+C0h] [rbp-148h]
  int v98; // [rsp+D0h] [rbp-138h] BYREF
  __int16 v99; // [rsp+D4h] [rbp-134h]
  __int64 v100; // [rsp+D8h] [rbp-130h]
  __int128 v101; // [rsp+E0h] [rbp-128h]
  __int128 v102; // [rsp+F0h] [rbp-118h]
  __int64 v103; // [rsp+100h] [rbp-108h]
  int v104; // [rsp+108h] [rbp-100h]
  __int16 v105; // [rsp+10Ch] [rbp-FCh]
  int v106; // [rsp+110h] [rbp-F8h]
  _QWORD *v107; // [rsp+120h] [rbp-E8h]
  __int128 v108; // [rsp+128h] [rbp-E0h] BYREF
  __int64 v109; // [rsp+138h] [rbp-D0h]
  int v110; // [rsp+140h] [rbp-C8h] BYREF
  __int16 v111; // [rsp+144h] [rbp-C4h]
  __int128 v112; // [rsp+148h] [rbp-C0h]
  __int64 v113; // [rsp+158h] [rbp-B0h]
  __int128 v114; // [rsp+160h] [rbp-A8h]
  __int64 v115; // [rsp+170h] [rbp-98h]
  int v116; // [rsp+178h] [rbp-90h]
  __int16 v117; // [rsp+17Ch] [rbp-8Ch]
  int v118; // [rsp+180h] [rbp-88h]
  __int64 v119; // [rsp+188h] [rbp-80h]
  _QWORD v120[15]; // [rsp+190h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]
  struct IXMLDOMNode *v124; // [rsp+228h] [rbp+20h] BYREF

  v119 = -2LL;
  v3 = a3;
  v5 = this;
  v6 = PWSLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  *(_QWORD *)v78 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a2 + 96LL))(*a2, v78);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v9);
    v10 = *(_QWORD *)v78;
    if ( *(_QWORD *)v78 )
    {
      *(_QWORD *)v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v7;
  }
  v11 = 0LL;
  v124 = 0LL;
  pv = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0;
  v85 = 0;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)v78;
    if ( v11 )
    {
      v124 = 0LL;
      ((void (__fastcall *)(struct IXMLDOMNode *))v11->lpVtbl->Release)(v11);
    }
    if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v12 + 72LL))(v12, &v124) < 0 || !v124 )
      break;
    v79 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(
            *a2,
            &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60,
            &v79);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x69,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v13);
      v49 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v84);
      v41 = pv;
      if ( !pv )
        goto LABEL_87;
      v50 = 0LL;
      for ( i = v81; v50 < i; ++v50 )
      {
        v52 = v41[v50];
        if ( v52 )
        {
          v41[v50] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
          i = v81;
          v41 = pv;
        }
      }
      goto LABEL_86;
    }
    v93 = 0LL;
    v15 = PWSLayoutParser::ParsePinnedAppNode(v5, v124, &v93);
    v14 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6C,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v15);
      if ( v93 )
        (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v93 + 16LL))(v93);
      v45 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v84);
      v41 = pv;
      if ( !pv )
        goto LABEL_87;
      v46 = 0LL;
      for ( j = v81; v46 < j; ++v46 )
      {
        v48 = v41[v46];
        if ( v48 )
        {
          v41[v46] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
          j = v81;
          v41 = pv;
        }
      }
      goto LABEL_86;
    }
    v16 = v81;
    if ( v81 == v83 )
    {
      v14 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
              (__int64)&pv,
              v81 + 1);
      if ( (v14 & 0x80000000) != 0 )
      {
        v25 = v93;
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6D,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)v14);
        if ( v25 )
          (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v25 + 16LL))(v25);
        v40 = v79;
        if ( v79 )
        {
          v79 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        }
        StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v84);
        v41 = pv;
        if ( pv )
        {
          v42 = 0LL;
          for ( k = v81; v42 < k; ++v42 )
          {
            v44 = v41[v42];
            if ( v44 )
            {
              v41[v42] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
              k = v81;
              v41 = pv;
            }
          }
          goto LABEL_86;
        }
LABEL_87:
        v83 = 0LL;
        v81 = 0LL;
        v53 = v124;
        if ( v124 )
        {
          v124 = 0LL;
          ((void (__fastcall *)(struct IXMLDOMNode *))v53->lpVtbl->Release)(v53);
        }
        v39 = *(_QWORD *)v78;
        if ( *(_QWORD *)v78 )
        {
LABEL_90:
          *(_QWORD *)v78 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        }
        return v14;
      }
      v16 = v81;
    }
    v81 = v16 + 1;
    v17 = (struct IPenWorkspaceLayoutItem **)((char *)pv + 8 * v16);
    v18 = v93;
    if ( v17 )
    {
      *v17 = v93;
      if ( v18 )
        (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v18 + 8LL))(v18);
    }
    v19 = Microsoft::WRL::Details::Make<StartLayout::SelectionDataParser,>((__int64 *)&v94);
    v20 = *v19;
    v107 = (_QWORD *)*v19;
    *v19 = 0LL;
    v21 = (__int64)v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( !v20 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)0x8007000ELL);
      if ( v18 )
        (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v18 + 16LL))(v18);
      v33 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v84);
      v34 = pv;
      if ( pv )
      {
        v35 = 0LL;
        for ( m = v81; v35 < m; ++v35 )
        {
          v37 = v34[v35];
          if ( v37 )
          {
            v34[v35] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
            m = v81;
            v34 = pv;
          }
        }
        CoTaskMemFree(v34);
        pv = 0LL;
      }
      v81 = 0LL;
      v83 = 0LL;
      v38 = v124;
      if ( v124 )
      {
        v124 = 0LL;
        ((void (__fastcall *)(struct IXMLDOMNode *))v38->lpVtbl->Release)(v38);
      }
      v39 = *(_QWORD *)v78;
      if ( *(_QWORD *)v78 )
        goto LABEL_90;
      return v14;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v20 + 24LL))(v20, &v79, &v84);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x71,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v22);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v18 )
        (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v18 + 16LL))(v18);
      v26 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v84);
      v27 = pv;
      if ( pv )
      {
        v28 = 0LL;
        for ( n = v81; v28 < n; ++v28 )
        {
          v30 = v27[v28];
          if ( v30 )
          {
            v27[v28] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            n = v81;
            v27 = pv;
          }
        }
        CoTaskMemFree(v27);
        pv = 0LL;
      }
      v81 = 0LL;
      v83 = 0LL;
      v31 = v124;
      if ( v124 )
      {
        v124 = 0LL;
        ((void (__fastcall *)(struct IXMLDOMNode *))v31->lpVtbl->Release)(v31);
      }
      v32 = *(_QWORD *)v78;
      if ( *(_QWORD *)v78 )
      {
        *(_QWORD *)v78 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      return v23;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v18 )
      (*(void (__fastcall **)(struct IPenWorkspaceLayoutItem *))(*(_QWORD *)v18 + 16LL))(v18);
    v24 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v11 = v124;
  }
  v108 = 0LL;
  v109 = 0LL;
  try
  {
    std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>(&v108, (__int64)&pv);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x78,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      v54);
    v5 = this;
    v3 = a3;
  }
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0;
  v99 = 0;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = v120;
  v94 = &v110;
  v120[0] = off_180206778;
  v120[7] = v120;
  v110 = 0;
  v111 = 0;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  StartLayout::SelectionData::Copy((StartLayout::SelectionData *)&v110, (PWSLayoutParser *)((char *)v5 + 40));
  Selected = StartLayout::GetSelectedItem<ParsedPenWorkspaceLayout>(&v108, &v110, v120, &v95);
  v14 = Selected;
  if ( Selected < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)Selected);
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v98);
    v56 = v95;
    if ( v95 )
    {
      v57 = 0LL;
      for ( ii = v96; v57 < ii; ++v57 )
      {
        v59 = v56[v57];
        if ( v59 )
        {
          v56[v57] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          ii = v96;
          v56 = v95;
        }
      }
      CoTaskMemFree(v56);
      v95 = 0LL;
    }
    v96 = 0LL;
    *((_QWORD *)&v97 + 1) = 0LL;
    std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>((void **)&v108);
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v84);
    v41 = pv;
    if ( !pv )
      goto LABEL_87;
    v60 = 0LL;
    for ( jj = v81; v60 < jj; ++v60 )
    {
      v62 = v41[v60];
      if ( v62 )
      {
        v41[v60] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
        jj = v81;
        v41 = pv;
      }
    }
LABEL_86:
    CoTaskMemFree(v41);
    pv = 0LL;
    goto LABEL_87;
  }
  v63 = (__int64 *)v95;
  v64 = (__int64 *)((char *)v95 + 8 * v96);
  while ( v63 != v64 )
  {
    v65 = *v63;
    v94 = (int *)v65;
    if ( v65 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v65);
    v66 = v3[1];
    if ( v66 != v3[3]
      || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
           (__int64)v3,
           v66 + 1) >= 0 )
    {
      v67 = (__int64 *)(*v3 + 8 * v3[1]++);
      if ( v67 )
      {
        *v67 = 0LL;
        if ( v67 != (__int64 *)&v94 )
        {
          *v67 = v65;
          v65 = 0LL;
        }
      }
    }
    if ( v65 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    ++v63;
  }
  StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v98);
  v68 = v95;
  if ( v95 )
  {
    v69 = 0LL;
    for ( kk = v96; v69 < kk; ++v69 )
    {
      v71 = v68[v69];
      if ( v71 )
      {
        v68[v69] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
        kk = v96;
        v68 = v95;
      }
    }
    CoTaskMemFree(v68);
    v95 = 0LL;
  }
  v96 = 0LL;
  *((_QWORD *)&v97 + 1) = 0LL;
  std::vector<ParsedTaskbarLayout>::~vector<ParsedTaskbarLayout>((void **)&v108);
  StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v84);
  v72 = pv;
  if ( pv )
  {
    v73 = 0LL;
    for ( mm = v81; v73 < mm; ++v73 )
    {
      v75 = v72[v73];
      if ( v75 )
      {
        v72[v73] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
        mm = v81;
        v72 = pv;
      }
    }
    CoTaskMemFree(v72);
    pv = 0LL;
  }
  v81 = 0LL;
  v83 = 0LL;
  v76 = v124;
  if ( v124 )
  {
    v124 = 0LL;
    ((void (__fastcall *)(struct IXMLDOMNode *))v76->lpVtbl->Release)(v76);
  }
  v77 = *(_QWORD *)v78;
  if ( *(_QWORD *)v78 )
  {
    *(_QWORD *)v78 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
  }
  return 0LL;
}
