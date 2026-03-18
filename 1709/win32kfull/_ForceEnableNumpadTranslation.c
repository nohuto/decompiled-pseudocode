/*
 * XREFs of _ForceEnableNumpadTranslation @ 0x1C01262A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForceEnableNumpadTranslation(int a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(gptiCurrent + 1184LL) >> 23) & 1;
  *(_DWORD *)(gptiCurrent + 1184LL) ^= (*(_DWORD *)(gptiCurrent + 1184LL) ^ (a1 << 23)) & 0x800000;
  return result;
}
