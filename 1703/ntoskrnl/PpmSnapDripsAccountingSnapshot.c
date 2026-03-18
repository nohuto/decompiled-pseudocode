/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x1402294AC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopDiagTraceDripsHistogram @ 0x140230F80 (PopDiagTraceDripsHistogram.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x1406D3854 (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 __fastcall PpmSnapDripsAccountingSnapshot(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[26]; // [rsp+20h] [rbp-108h] BYREF

  result = (unsigned int)dword_14036E240;
  v4 = 0LL;
  if ( PpmPlatformStates && dword_14036E240 != -1 )
  {
    v6 = PopQpcFrequency;
    v7 = 26LL;
    v8 = 0LL;
    v9 = *(_QWORD *)(PpmPlatformStates + 48) + 1008LL * (unsigned int)dword_14036E240;
    do
    {
      v12[v8] = PpmConvertTime(
                  *(_QWORD *)(v4 + v9 + 200) - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v8 * 8),
                  v6,
                  0x989680uLL);
      ++v8;
      v4 += 32LL;
      --v7;
    }
    while ( v7 );
    PpmEventTraceDripsAccountingSnapshot(v10, v12);
    return PopDiagTraceDripsHistogram(a1, a2, v11, v12);
  }
  return result;
}
