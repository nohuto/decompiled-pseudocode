/*
 * XREFs of vDefFace @ 0x1C0237640
 * Callers:
 *     bConvertFontRes @ 0x1C02358DC (bConvertFontRes.c)
 * Callees:
 *     fsSelectionFlags @ 0x1C0235E3C (fsSelectionFlags.c)
 */

__int16 __fastcall vDefFace(__int64 a1, _BYTE **a2)
{
  __int16 result; // ax
  __int64 v3; // r11

  result = fsSelectionFlags(*a2);
  if ( (result & 0x21) != 0 )
  {
    switch ( result & 0x21 )
    {
      case 1:
        *(_DWORD *)(v3 + 68) = 2;
        break;
      case 32:
        *(_DWORD *)(v3 + 68) = 1;
        break;
      case 33:
        *(_DWORD *)(v3 + 68) = 3;
        break;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 68) = 0;
  }
  return result;
}
