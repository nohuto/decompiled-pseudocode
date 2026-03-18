/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x1402736A8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 PpmResetDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 *v2; // rdx
  _QWORD *v3; // rcx

  result = (unsigned int)dword_1403CDB00;
  if ( PpmPlatformStates && dword_1403CDB00 != -1 )
  {
    v1 = 26LL;
    v2 = (__int64 *)(1008LL * (unsigned int)dword_1403CDB00 + 200 + *(_QWORD *)(PpmPlatformStates + 48));
    v3 = &PpmDripsAccountingSnapshot;
    do
    {
      result = *v2;
      v2 += 4;
      *v3++ = result;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
