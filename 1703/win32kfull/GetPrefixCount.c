/*
 * XREFs of GetPrefixCount @ 0x1C000EAF0
 * Callers:
 *     xxxPSMGetTextExtent @ 0x1C000CBA8 (xxxPSMGetTextExtent.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0215328 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C0239ED0 (DT_GetExtentMinusPrefixes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrefixCount(__int16 *a1, int a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  int v5; // esi
  int v6; // ebx
  int v7; // r10d
  __int64 v8; // r11
  __int16 v9; // r9
  int v10; // eax

  v4 = -1;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  if ( a3 )
    v5 = a4;
  v8 = 0LL;
  if ( a2 > 0 )
  {
    while ( 1 )
    {
      v9 = *a1;
      --a2;
      if ( !*a1 )
        goto LABEL_12;
      v10 = v5--;
      if ( v10 <= 0 )
        goto LABEL_12;
      ++a1;
      if ( v9 == 38 )
        break;
      if ( v9 == 30 )
      {
        ++v7;
LABEL_16:
        v4 = v6;
        goto LABEL_11;
      }
      if ( v9 == 31 )
      {
        ++v7;
        if ( !a2 )
          goto LABEL_12;
        ++v7;
        ++a1;
        --a2;
      }
      else
      {
        ++v6;
        if ( a3 )
          *(_WORD *)(a3 + 2 * v8++) = v9;
      }
LABEL_11:
      if ( a2 <= 0 )
        goto LABEL_12;
    }
    ++v7;
    if ( *a1 == 38 )
    {
      if ( a3 )
        *(_WORD *)(a3 + 2 * v8++) = 38;
      --a2;
      ++a1;
      ++v6;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
LABEL_12:
  if ( a3 )
    *(_WORD *)(a3 + 2 * v8) = 0;
  return v4 | ((unsigned __int16)v7 << 16);
}
