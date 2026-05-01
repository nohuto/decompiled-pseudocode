/*
 * XREFs of ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003C5C4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetGameEntryFromAppId(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        struct KnownGameList::IGameEntry **a3)
{
  unsigned int GameEntryByIdentifier; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    GameEntryByIdentifier = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return GameEntryByIdentifier;
  }
  *a3 = 0LL;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, a2, 0, a3);
  result = 2147943568LL;
  if ( GameEntryByIdentifier != -2147023728 )
  {
    if ( (GameEntryByIdentifier & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x145,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)GameEntryByIdentifier);
      return GameEntryByIdentifier;
    }
    return 0LL;
  }
  return result;
}
