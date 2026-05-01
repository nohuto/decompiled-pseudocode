/*
 * XREFs of ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x18004073C
 * Callers:
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DD60 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E6FC (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003ECE0 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KnownGameList::StrCmpInsensitive(
        KnownGameList *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r14d
  __int64 v6; // rsi
  unsigned int v8; // ebp
  int v10; // ebx
  wint_t v11; // ax

  v4 = 0;
  v5 = (unsigned int)a4;
  v6 = 0LL;
  v8 = (unsigned int)a2;
  do
  {
    if ( (unsigned int)v6 >= v8 )
      break;
    if ( (unsigned int)v6 >= v5 )
      break;
    v10 = _towlower_l(*((_WORD *)this + v6), g_InvariantLocale);
    v11 = _towlower_l(*(_WORD *)(a3 + 2 * v6), g_InvariantLocale);
    v6 = (unsigned int)(v6 + 1);
    v4 = v10 - v11;
  }
  while ( v10 == v11 );
  if ( !v4 )
  {
    if ( (_DWORD)v6 == v8 )
    {
      if ( (_DWORD)v6 != v5 )
        return (unsigned int)-1;
    }
    else
    {
      return 1;
    }
  }
  return v4;
}
