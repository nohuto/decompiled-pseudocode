/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01B5638
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall ClrWFNoDwmNotify(_DWORD *a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
