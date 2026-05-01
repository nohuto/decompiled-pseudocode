/*
 * XREFs of ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18017457C
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180088D14 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18008BD14 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1800CE3DC (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x180174C70 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180004D30 (-_com_issue_error@@YAXJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x1801747A8 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEAG@std@@YA-AV-.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartLayout::GetStringAttributeValue(__int64 a1, __int64 **a2, _QWORD *a3)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v14; // [rsp+30h] [rbp-40h]
  volatile signed __int32 *v15; // [rsp+40h] [rbp-30h]
  _BYTE v16[8]; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v17; // [rsp+50h] [rbp-20h]
  VARIANTARG pvarg; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  VariantInit(&pvarg);
  if ( *a2 )
    v6 = **a2;
  else
    v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, VARIANTARG *))(*(_QWORD *)a1 + 352LL))(a1, v6, &pvarg);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( pvarg.vt == 1 )
    {
      v8 = -2147023728;
    }
    else
    {
      if ( pvarg.vt == 8 )
        goto LABEL_17;
      if ( VariantChangeType(&pvarg, &pvarg, 0, 8u) < 0 )
        _com_issue_error();
      if ( pvarg.vt == 8 )
      {
LABEL_17:
        v9 = (__int64 *)std::make_shared<std::wstring,unsigned short * &>(v16, &pvarg.decVal.Lo32);
        v10 = *v9;
        v11 = v9[1];
        *v9 = 0LL;
        v9[1] = 0LL;
        v14 = (volatile signed __int32 *)a3[1];
        a3[1] = v11;
        *a3 = v10;
        if ( v14 )
        {
          if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        v12 = v17;
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
            if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          }
        }
        v8 = 0;
      }
      else
      {
        v8 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
          (const char *)0x8000FFFFLL);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( VariantClear(&pvarg) < 0 )
    _com_issue_error();
  return v8;
}
