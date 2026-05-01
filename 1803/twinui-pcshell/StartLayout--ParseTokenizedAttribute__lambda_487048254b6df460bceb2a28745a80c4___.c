/*
 * XREFs of StartLayout::ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___ @ 0x1802FC918
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x1802FCF40 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x1802FCD2C (-ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z.c)
 */

void __fastcall StartLayout::ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___(
        const WCHAR *a1,
        __int64 a2)
{
  wchar_t *i; // rcx
  int v4; // eax
  wchar_t *v5; // rax
  StartLayout::SelectionDataParser *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPWSTR ppwsz; // [rsp+40h] [rbp+18h] BYREF
  wchar_t *Context; // [rsp+48h] [rbp+20h] BYREF

  ppwsz = 0LL;
  if ( SHStrDupW(a1, &ppwsz) >= 0 )
  {
    Context = 0LL;
    for ( i = ppwsz; ; i = 0LL )
    {
      v5 = wcstok_s(i, L"|", &Context);
      if ( !v5 )
        break;
      v4 = StartLayout::SelectionDataParser::ParseSKUAttributeValue(
             v6,
             v5,
             *(struct StartLayout::SelectionData **)(a2 + 8));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          73LL,
          (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
          (const char *)(unsigned int)v4);
    }
    CoTaskMemFree(ppwsz);
  }
}
