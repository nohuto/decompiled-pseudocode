/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x18008A634
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180088D14 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18008BD14 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1800CE3DC (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180173A84 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180173E70 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     ??_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z @ 0x180174C00 (--_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z.c)
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x18019BAF2 (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x18019BD83 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x18019BDAF (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$7 @ 0x18019BDDB (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$7.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x18019D232 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x18019D23E (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$1 @ 0x1801A5026 (_StartLayout--AddSchemaToCollection_--_1_--dtor$1.c)
 *     _StartLayout::AddSchemaToCollection_::_1_::dtor$4 @ 0x1801A504A (_StartLayout--AddSchemaToCollection_--_1_--dtor$4.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$6 @ 0x1801A50B6 (_StartLayout--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x1801A5164 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$1.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1801A5174 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$2.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1801A5184 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$3.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1801A5194 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$4.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1801A51A4 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$5.c)
 *     _StartLayout::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1801A51B4 (_StartLayout--SelectionDataParser--SelectionDataParser_--_1_--dtor$6.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
