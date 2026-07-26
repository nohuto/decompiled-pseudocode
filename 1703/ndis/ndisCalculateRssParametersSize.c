/*
 * XREFs of ndisCalculateRssParametersSize @ 0x1C001676C
 * Callers:
 *     ndisSetMiniportRSSParameters @ 0x1C002150C (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0021618 (ndisSetOpenRSSParameters.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0049A90 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0049BE4 (ndisQueryOpenRSSParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssParametersSize(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a1 + 12);
  *a2 = 0;
  v4 = v2 + v3;
  if ( v4 >= v2 )
  {
    v7 = v4;
    v8 = *(_DWORD *)(a1 + 24);
    v9 = v8 + *(unsigned __int16 *)(a1 + 20);
    if ( v9 >= v8 )
    {
      v10 = v9;
      if ( v7 > v9 )
        v10 = v7;
      if ( *(_BYTE *)(a1 + 1) < 2u )
        goto LABEL_10;
      v11 = *(unsigned int *)(a1 + 32) * (unsigned __int64)*(unsigned int *)(a1 + 36);
      if ( v11 <= 0xFFFFFFFF )
      {
        v12 = *(_DWORD *)(a1 + 28);
        if ( (unsigned int)v11 + v12 >= v12 )
        {
          if ( v10 <= (unsigned int)v11 + v12 )
            v10 = v11 + v12;
LABEL_10:
          *a2 = v10;
          return 0LL;
        }
      }
    }
  }
  return 3221291029LL;
}
