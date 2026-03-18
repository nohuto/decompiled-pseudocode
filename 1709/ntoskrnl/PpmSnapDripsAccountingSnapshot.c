/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x14023C35C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopDiagTraceDripsHistogram @ 0x1402457F8 (PopDiagTraceDripsHistogram.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x140708F24 (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 __fastcall PpmSnapDripsAccountingSnapshot(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  char v6; // r15
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r9d
  _QWORD v14[26]; // [rsp+30h] [rbp-108h] BYREF

  result = (unsigned int)dword_140389CC0;
  v4 = 0LL;
  v6 = PopWnfCsEnterScenarioId;
  if ( PpmPlatformStates && dword_140389CC0 != -1 )
  {
    v8 = 0LL;
    v9 = 26LL;
    v10 = *(_QWORD *)(PpmPlatformStates + 48) + 1008LL * (unsigned int)dword_140389CC0;
    do
    {
      v14[v8] = PpmConvertTime(
                  *(_QWORD *)(v4 + v10 + 200) - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v8 * 8),
                  PopQpcFrequency,
                  0x989680uLL);
      ++v8;
      v4 += 32LL;
      --v9;
    }
    while ( v9 );
    PpmEventTraceDripsAccountingSnapshot(v11, v14);
    LOBYTE(v12) = v6;
    return PopDiagTraceDripsHistogram(v12, a2, a3, v13, (__int64)v14);
  }
  return result;
}
