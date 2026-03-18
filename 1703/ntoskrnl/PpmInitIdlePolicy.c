/*
 * XREFs of PpmInitIdlePolicy @ 0x1408208A4
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 */

unsigned __int64 PpmInitIdlePolicy()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx

  v0 = PopQpcFrequency;
  dword_140349290 = 50000;
  dword_140349808 = 50000;
  result = 2 * PopQpcFrequency;
  word_14034928C = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  word_140349804 = 0;
  word_140349294 = 15400;
  word_14034980C = 15400;
  if ( !KdPitchDebugger )
    result = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = result;
  v2 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v3 = 26LL;
  do
  {
    v4 = v2[1];
    if ( v4 != -1LL )
    {
      result = PpmConvertTime(v4, 0x989680uLL, v0);
      *v2 = result;
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  return result;
}
