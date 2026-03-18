/*
 * XREFs of GetPrefixCount @ 0x1C023BD70
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C021CF78 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B60C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C023D948 (xxxPSMGetTextExtent.c)
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
  while ( a2 > 0 )
  {
    v9 = *a1;
    --a2;
    if ( !*a1 )
      break;
    v10 = v5--;
    if ( v10 <= 0 )
      break;
    ++a1;
    if ( v9 == 38 )
    {
      ++v7;
      if ( *a1 == 38 )
      {
        if ( a3 )
          *(_WORD *)(a3 + 2 * v8++) = 38;
        --a2;
        ++a1;
        ++v6;
        continue;
      }
    }
    else
    {
      if ( v9 != 30 )
      {
        if ( v9 == 31 )
        {
          ++v7;
          if ( !a2 )
            break;
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
        continue;
      }
      ++v7;
    }
    v4 = v6;
  }
  if ( a3 )
    *(_WORD *)(a3 + 2 * v8) = 0;
  return v4 | ((unsigned __int16)v7 << 16);
}
