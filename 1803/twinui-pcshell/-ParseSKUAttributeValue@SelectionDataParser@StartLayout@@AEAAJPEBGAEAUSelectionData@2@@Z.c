/*
 * XREFs of ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x1802FCD2C
 * Callers:
 *     StartLayout::ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___ @ 0x1802FC918 (StartLayout--ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18014A27C (--$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@V-$allo.c)
 */

__int64 __fastcall StartLayout::SelectionDataParser::ParseSKUAttributeValue(
        StartLayout::SelectionDataParser *this,
        const unsigned __int16 *a2,
        struct StartLayout::SelectionData *a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  StartLayout::SelectionDataParser *v7; // [rsp+50h] [rbp+20h] BYREF

  v7 = this;
  if ( CompareStringOrdinal(a2, -1, L"DesktopEnterprise", -1, 1) == 2 )
  {
    LODWORD(v7) = 3;
LABEL_21:
    std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
      (__int64)a3 + 32,
      &v7);
    result = 0LL;
    *((_BYTE *)a3 + 3) = 1;
    return result;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopEnterpriseN", -1, 1) == 2 )
  {
    LODWORD(v7) = 5;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"Desktop", -1, 1) == 2 )
  {
    LODWORD(v7) = 2;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopN", -1, 1) == 2 )
  {
    LODWORD(v7) = 4;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopARM", -1, 1) == 2 )
  {
    LODWORD(v7) = 1;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"Mobile", -1, 1) == 2 )
  {
    LODWORD(v7) = 8;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"Server", -1, 1) == 2 )
  {
    LODWORD(v7) = 6;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"ServerSolution", -1, 1) == 2 )
  {
    LODWORD(v7) = 7;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"PPI", -1, 1) == 2 )
  {
    LODWORD(v7) = 9;
    goto LABEL_21;
  }
  if ( CompareStringOrdinal(a2, -1, L"LongTermServicingBranch", -1, 1) == 2 )
  {
    LODWORD(v7) = 10;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
    (const char *)0xC00CE225LL);
  return 3222069797LL;
}
