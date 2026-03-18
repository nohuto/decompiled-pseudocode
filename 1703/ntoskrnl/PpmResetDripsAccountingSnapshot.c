/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x140229208
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 PpmResetDripsAccountingSnapshot()
{
  __int64 result; // rax
  _QWORD *v1; // rdx
  __int64 *v2; // r8
  __int64 v3; // rcx

  result = (unsigned int)dword_14036E240;
  if ( PpmPlatformStates && dword_14036E240 != -1 )
  {
    v1 = &PpmDripsAccountingSnapshot;
    v2 = (__int64 *)(1008LL * (unsigned int)dword_14036E240 + 200 + *(_QWORD *)(PpmPlatformStates + 48));
    v3 = 26LL;
    do
    {
      result = *v2;
      v2 += 4;
      *v1++ = result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
