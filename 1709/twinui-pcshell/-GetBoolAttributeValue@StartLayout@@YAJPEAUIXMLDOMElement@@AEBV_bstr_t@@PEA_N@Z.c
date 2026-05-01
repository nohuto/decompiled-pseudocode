/*
 * XREFs of ?GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1801BFBB8
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x1801C03D0 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x18000506C (-_com_issue_error@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartLayout::GetBoolAttributeValue(
        StartLayout *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        bool *a4)
{
  HRESULT (__stdcall *QueryInterface)(IXMLDOMElement *, const IID *const, void **); // rdx
  int v8; // eax
  unsigned int v9; // ebx
  VARIANTARG pvargDest; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_BYTE *)a3 = 0;
  VariantInit(&pvargDest);
  if ( a2->lpVtbl )
    QueryInterface = a2->lpVtbl->QueryInterface;
  else
    QueryInterface = 0LL;
  v8 = (*(__int64 (__fastcall **)(StartLayout *, HRESULT (__stdcall *)(IXMLDOMElement *, const IID *const, void **), VARIANTARG *))(*(_QWORD *)this + 352LL))(
         this,
         QueryInterface,
         &pvargDest);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( pvargDest.vt == 1 )
    {
      v9 = -2147023728;
    }
    else
    {
      if ( pvargDest.vt == 11 )
        goto LABEL_13;
      if ( VariantChangeType(&pvargDest, &pvargDest, 0, 0xBu) < 0 )
        _com_issue_error();
      if ( pvargDest.vt == 11 )
      {
LABEL_13:
        *(_BYTE *)a3 = pvargDest.iVal != 0;
        v9 = 0;
      }
      else
      {
        v9 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10,
          (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
          (const char *)0x8000FFFFLL);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( VariantClear(&pvargDest) < 0 )
    _com_issue_error();
  return v9;
}
