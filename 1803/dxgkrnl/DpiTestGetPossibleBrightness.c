/*
 * XREFs of DpiTestGetPossibleBrightness @ 0x1C020ED00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall DpiTestGetPossibleBrightness(__int64 a1, unsigned int a2, _BYTE *a3, void *a4)
{
  unsigned int v4; // r10d
  unsigned __int8 v6; // cl

  v4 = -1073741789;
  if ( !a3 )
    return 3221225485LL;
  v6 = g_NumBrightnessLevels;
  *a3 = g_NumBrightnessLevels;
  if ( !v6 )
    return 0LL;
  if ( a2 >= v6 )
  {
    if ( a4 )
    {
      memmove(a4, &g_BrightnessLevels, v6);
      return 0;
    }
  }
  return v4;
}
