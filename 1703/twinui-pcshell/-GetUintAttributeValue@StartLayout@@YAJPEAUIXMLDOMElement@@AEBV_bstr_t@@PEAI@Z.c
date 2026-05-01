/*
 * XREFs of ?GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180174470
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x180174C70 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180004D30 (-_com_issue_error@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartLayout::GetUintAttributeValue(
        StartLayout *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        unsigned int *a4)
{
  struct IXMLDOMElementVtbl *lpVtbl; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  VARIANTARG pvargDest; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  VariantInit(&pvargDest);
  lpVtbl = a2->lpVtbl;
  if ( a2->lpVtbl )
    lpVtbl = (struct IXMLDOMElementVtbl *)lpVtbl->QueryInterface;
  v8 = (*(__int64 (__fastcall **)(StartLayout *, struct IXMLDOMElementVtbl *, VARIANTARG *))(*(_QWORD *)this + 352LL))(
         this,
         lpVtbl,
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
      if ( pvargDest.vt == 23 )
        goto LABEL_12;
      if ( VariantChangeType(&pvargDest, &pvargDest, 0, 0x17u) < 0 )
        _com_issue_error();
      if ( pvargDest.vt == 23 )
      {
LABEL_12:
        *(_DWORD *)a3 = pvargDest.lVal;
        v9 = 0;
      }
      else
      {
        v9 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D,
          (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
          (const char *)0x8000FFFFLL);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x19,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( VariantClear(&pvargDest) < 0 )
    _com_issue_error();
  return v9;
}
