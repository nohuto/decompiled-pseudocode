/*
 * XREFs of _ForceEnableNumpadTranslation @ 0x1C011C4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ForceEnableNumpadTranslation(int a1)
{
  unsigned __int64 v1; // rax

  v1 = (unsigned __int64)*(unsigned int *)(gptiCurrent + 1096LL) >> 23;
  *(_DWORD *)(gptiCurrent + 1096LL) ^= (*(_DWORD *)(gptiCurrent + 1096LL) ^ (a1 << 23)) & 0x800000;
  return v1 & 1;
}
