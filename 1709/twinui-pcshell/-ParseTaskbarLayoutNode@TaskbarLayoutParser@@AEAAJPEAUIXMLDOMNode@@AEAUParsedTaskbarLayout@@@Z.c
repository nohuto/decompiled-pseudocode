/*
 * XREFs of ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18008DF88
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008D680 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18008E2E4 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ??$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@StartLayout@@@12@XZ @ 0x18008F058 (--$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSelectionDat.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutNode(
        TaskbarLayoutParser *this,
        struct IXMLDOMNode *a2,
        struct ParsedTaskbarLayout *a3)
{
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct IXMLDOMNode *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  struct ITaskbarLayoutItem *v14; // rbx
  __int64 v15; // rdx
  struct ITaskbarLayoutItem **v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  struct ITaskbarLayoutItem **v19; // rax
  struct ITaskbarLayoutItem *v20; // rcx
  int v21; // eax
  struct IXMLDOMNode *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-30h] BYREF
  __int64 v29; // [rsp+28h] [rbp-28h] BYREF
  __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  struct ITaskbarLayoutItem *v31[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IXMLDOMNode *i; // [rsp+88h] [rbp+38h] BYREF
  __int64 v34; // [rsp+98h] [rbp+48h] BYREF

  v31[1] = (struct ITaskbarLayoutItem *)-2LL;
  v29 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60,
         &v29);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v34 = 0LL;
    v8 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, __int64 *))a2->lpVtbl->get_firstChild)(a2, &v34);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v30 = 0LL;
      v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v34)(
             v34,
             &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
             &v30);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v28 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 96LL))(v34, &v28);
        v7 = v10;
        if ( v10 >= 0 )
        {
          v11 = 0LL;
          for ( i = 0LL; ; v11 = i )
          {
            v12 = v28;
            if ( v11 )
            {
              i = 0LL;
              ((void (__fastcall *)(struct IXMLDOMNode *))v11->lpVtbl->Release)(v11);
            }
            if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v12 + 72LL))(v12, &i) < 0 || !i )
              break;
            v31[0] = 0LL;
            v13 = TaskbarLayoutParser::ParsePinnedAppNode(this, i, v31);
            v7 = v13;
            v14 = v31[0];
            if ( v13 < 0 )
            {
              v17 = (unsigned int)v13;
              v18 = 184LL;
              goto LABEL_25;
            }
            v15 = *((_QWORD *)a3 + 1);
            if ( v15 == *((_QWORD *)a3 + 3) )
            {
              v7 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                     (__int64)a3,
                     v15 + 1);
              if ( v7 < 0 )
              {
                v17 = (unsigned int)v7;
                v18 = 185LL;
LABEL_25:
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)v18,
                  (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                  (const char *)v17);
                goto LABEL_33;
              }
            }
            v16 = (struct ITaskbarLayoutItem **)(*(_QWORD *)a3 + 8 * (*((_QWORD *)a3 + 1))++);
            if ( v16 )
            {
              *v16 = v14;
              if ( v14 )
                (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v14 + 8LL))(v14);
            }
            if ( v14 )
              (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v14 + 16LL))(v14);
          }
          v19 = (struct ITaskbarLayoutItem **)Microsoft::WRL::Details::Make<StartLayout::SelectionDataParser,>(v31);
          v14 = *v19;
          v31[2] = *v19;
          *v19 = 0LL;
          v20 = v31[0];
          if ( v31[0] )
          {
            v31[0] = 0LL;
            (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v20 + 16LL))(v20);
          }
          if ( v14 )
          {
            v21 = (*(__int64 (__fastcall **)(struct ITaskbarLayoutItem *, __int64 *, char *))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    &v29,
                    (char *)a3 + 32);
            v7 = v21;
            if ( v21 >= 0 )
              v7 = 0;
            else
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xBE,
                (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                (const char *)(unsigned int)v21);
          }
          else
          {
            v7 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBD,
              (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
              (const char *)0x8007000ELL);
          }
LABEL_33:
          if ( v14 )
            (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v14 + 16LL))(v14);
          v22 = i;
          if ( i )
          {
            i = 0LL;
            ((void (__fastcall *)(struct IXMLDOMNode *))v22->lpVtbl->Release)(v22);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB2,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
            (const char *)(unsigned int)v10);
        }
        v23 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xAF,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v9);
      }
      v24 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xAC,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v8);
    }
    v25 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA9,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return (unsigned int)v7;
}
