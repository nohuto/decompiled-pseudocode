/*
 * XREFs of PpmInitIdlePolicy @ 0x140852008
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 */

unsigned __int64 PpmInitIdlePolicy()
{
  unsigned __int64 result; // rax
  unsigned __int64 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx

  dword_140362E70 = 50000;
  dword_1403638F0 = 50000;
  result = 2 * PopQpcFrequency;
  word_140362E6C = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  word_1403638EC = 0;
  word_140362E74 = 15400;
  word_1403638F4 = 15400;
  if ( !KdPitchDebugger )
    result = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = result;
  v1 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
    {
      result = PpmConvertTime(v3, 0x989680uLL, PopQpcFrequency);
      *v1 = result;
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  return result;
}
