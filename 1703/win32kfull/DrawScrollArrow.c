/*
 * XREFs of DrawScrollArrow @ 0x1C010A398
 * Callers:
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrawScrollArrow(HDC a1, _DWORD *a2, __int16 a3)
{
  unsigned __int16 v3; // r9

  v3 = (a3 & 2) != 0 ? 52 : 54;
  if ( (a3 & 1) == 0 )
    v3 = (a3 & 2) != 0 ? 51 : 53;
  return DrawIt(a1, a2, a3, v3);
}
