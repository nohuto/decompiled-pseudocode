/*
 * XREFs of ??$?0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z @ 0x180116FEC
 * Callers:
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x180114810 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString)
{
  unsigned __int64 v2; // rax
  UINT32 v5; // edx
  HRESULT StringReference; // eax

  v2 = -1LL;
  do
    ++v2;
  while ( sourceString[v2] );
  if ( v2 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v5 = v2;
  if ( (unsigned int)v2 < (int)v2 + 1 )
    v5 = v2;
  StringReference = WindowsCreateStringReference(sourceString, v5, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    JUMPOUT(0x180117070LL);
  }
  return hstringHeader;
}
