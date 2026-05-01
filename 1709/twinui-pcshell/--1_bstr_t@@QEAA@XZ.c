/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x18008CA5C
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18008B130 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18008E2E4 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1800F1344 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1801BF5B8 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801BF7E0 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     ??_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z @ 0x1801C0360 (--_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z.c)
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x1801EA50E (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x1801EA7D3 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x1801EA7FF (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$7 @ 0x1801EA82B (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$7.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x1801ECFE4 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x1801ECFF0 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$1 @ 0x1801F74ED (_StartLayout--AddSchemaToCollection_--_1_--dtor$1.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$4 @ 0x1801F7511 (_StartLayout--AddSchemaToCollection_--_1_--dtor$4.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$6 @ 0x1801F7571 (_StartLayout--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x1801F7622 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$1.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1801F7632 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$2.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1801F7642 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$3.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1801F7652 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$4.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1801F7662 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$5.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1801F7672 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$6.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  __int64 v1; // rbx
  void *v3; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 16), 0xFFFFFFFF) == 1 && v1 )
    {
      if ( *(_QWORD *)v1 )
      {
        SysFreeString(*(BSTR *)v1);
        *(_QWORD *)v1 = 0LL;
      }
      v3 = *(void **)(v1 + 8);
      if ( v3 )
      {
        operator delete(v3);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
      operator delete((void *)v1);
    }
    *(_QWORD *)this = 0LL;
  }
}
