/*
 * XREFs of StartLayout::ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___ @ 0x1802FC998
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x1802FCF40 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z @ 0x18014AA48 (-AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z.c)
 */

void __fastcall StartLayout::ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___(
        const WCHAR *a1,
        StartLayout::SelectionData *a2)
{
  wchar_t *i; // rcx
  wchar_t *v4; // rax
  LPWSTR ppwsz; // [rsp+40h] [rbp+18h] BYREF
  wchar_t *Context; // [rsp+48h] [rbp+20h] BYREF

  ppwsz = 0LL;
  if ( SHStrDupW(a1, &ppwsz) >= 0 )
  {
    Context = 0LL;
    for ( i = ppwsz; ; i = 0LL )
    {
      v4 = wcstok_s(i, L"|", &Context);
      if ( !v4 )
        break;
      StartLayout::SelectionData::AddRegionCode(a2, v4);
    }
    CoTaskMemFree(ppwsz);
  }
}
