/*
 * XREFs of PnpiCmResourceToBiosAddress @ 0x1C00A6458
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C008E6A4 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddress(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  char v6; // al
  unsigned int v7; // r10d
  int v8; // ecx
  char *i; // rdx
  char v10; // r9
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax

  v3 = *(unsigned __int8 *)(a1 + 3);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 3221225473LL;
      v6 = 6;
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 3;
  }
  v7 = *(_DWORD *)(a2 + 16);
  v8 = 0;
  if ( v7 )
  {
    for ( i = (char *)(a2 + 20); ; i += 20 )
    {
      v10 = *i;
      if ( *i == v6 )
        break;
      if ( ++v8 >= v7 )
        return 0LL;
    }
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        if ( v10 != 2 )
        {
LABEL_25:
          *i = 0;
          return 0LL;
        }
        v11 = *((_WORD *)i + 2);
        *(_WORD *)(a1 + 8) = v11;
        *(_WORD *)(a1 + 10) = *((_WORD *)i + 4) + v11 - 1;
        v12 = *((_WORD *)i + 4);
LABEL_24:
        *(_WORD *)(a1 + 14) = v12;
        goto LABEL_25;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 5) = 0;
      *(_BYTE *)(a1 + 5) = (i[2] & 1) == 0;
      v13 = *((_WORD *)i + 1);
      if ( (v13 & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 5) |= 2u;
      }
      else if ( (v13 & 8) != 0 )
      {
        *(_BYTE *)(a1 + 5) |= 4u;
      }
      else if ( (v13 & 4) != 0 )
      {
        *(_BYTE *)(a1 + 5) |= 6u;
      }
    }
    v14 = *((_WORD *)i + 2);
    *(_WORD *)(a1 + 8) = v14;
    *(_WORD *)(a1 + 10) = v14 + *((_WORD *)i + 6) - 1;
    v12 = *((_WORD *)i + 6);
    goto LABEL_24;
  }
  return 0LL;
}
