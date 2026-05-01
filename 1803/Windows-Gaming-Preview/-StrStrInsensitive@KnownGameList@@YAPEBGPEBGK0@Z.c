/*
 * XREFs of ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1800407E4
 * Callers:
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DD60 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E6FC (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall KnownGameList::StrStrInsensitive(
        KnownGameList *this,
        const unsigned __int16 *a2,
        _WORD *a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v9; // rsi
  bool v10; // cl
  unsigned int v11; // r15d
  wint_t v12; // bx
  wint_t v13; // ax

  v4 = -1LL;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  do
    ++v4;
  while ( a3[v4] );
  LODWORD(v9) = 0;
  if ( *a3 )
  {
    while ( (int)v4 - (int)v9 >= v7 )
    {
      v10 = 1;
      v11 = 0;
      do
      {
        if ( v11 >= v7 )
          break;
        v12 = _towlower_l(a3[v11 + (unsigned int)v9], g_InvariantLocale);
        v13 = _towlower_l(*((_WORD *)this + v11), g_InvariantLocale);
        v10 = v12 == v13;
        ++v11;
      }
      while ( v12 == v13 );
      if ( v10 )
        return &a3[(unsigned int)v9];
      v9 = (unsigned int)(v9 + 1);
      if ( !a3[v9] )
        return (const unsigned __int16 *)v6;
    }
  }
  return (const unsigned __int16 *)v6;
}
