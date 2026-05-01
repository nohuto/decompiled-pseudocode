/*
 * XREFs of ??0_bstr_t@@QEAA@PEBG@Z @ 0x18008CAC4
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18008B130 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18008E2E4 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1800F1344 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1801BF5B8 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18000506C (-_com_issue_error@@YAXJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_bstr_t *__fastcall _bstr_t::_bstr_t(_bstr_t *this, const unsigned __int16 *a2)
{
  BSTR *v4; // rbx
  BSTR v5; // rax

  v4 = (BSTR *)operator new(0x18uLL);
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = 1;
  v5 = SysAllocString(a2);
  *v4 = v5;
  if ( !v5 && a2 )
    _com_issue_error();
  *(_QWORD *)this = v4;
  return this;
}
