/*
 * XREFs of ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C023B9A0
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B204 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x1C023B368 (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B60C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 */

__int64 __fastcall NeedsEndEllipsis(
        HDC a1,
        WCHAR *a2,
        int *a3,
        struct DRAWTEXTDATA *a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  int v6; // esi
  int v7; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // ebp
  signed int v15; // ebx
  int ExtentMinusPrefixes; // eax
  unsigned int v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+20h] [rbp-48h]
  struct tagSIZE v19; // [rsp+80h] [rbp+18h] BYREF

  v6 = *a3;
  v7 = 0;
  if ( !*a3 )
    return 0LL;
  v12 = *((_DWORD *)a4 + 8);
  v13 = *((_DWORD *)a4 + 14);
  if ( (int)DT_GetExtentMinusPrefixes(a1, a2, (unsigned int)v6, a5, v17, a6, -1) <= v12
    || !(unsigned int)GreGetTextExtentW(a1, L"...", 3u, &v19, 1) )
  {
    return 0LL;
  }
  v14 = v13 - v19.cx + v12;
  v15 = 1;
  if ( v14 > 0 )
  {
    v15 = v6;
    if ( v6 > 0 )
    {
      do
      {
        ExtentMinusPrefixes = DT_GetExtentMinusPrefixes(a1, a2, (unsigned int)((v7 + v15 + 1) / 2), a5, v18, a6, -1);
        if ( ExtentMinusPrefixes >= v14 )
        {
          if ( ExtentMinusPrefixes <= v14 )
          {
            v15 = (v7 + v15 + 1) / 2;
            break;
          }
          v15 = (v7 + v15 + 1) / 2 - 1;
        }
        else
        {
          v7 = (v7 + v15 + 1) / 2;
        }
      }
      while ( v7 < v15 );
    }
    if ( v15 < 1 )
      v15 = 1;
  }
  *a3 = DT_AdjustBreakForSurrogatesAndVariationSelectors(a2, v15, v6);
  return 1LL;
}
