/*
 * XREFs of ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C023BAE0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 */

__int64 __fastcall UserTextOutWInternal(HDC a1, int a2, int a3, unsigned __int16 *a4, unsigned int a5)
{
  return GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, a5, 0LL, 0LL, 0);
}
