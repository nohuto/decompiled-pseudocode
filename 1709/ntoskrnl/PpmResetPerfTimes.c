/*
 * XREFs of PpmResetPerfTimes @ 0x1401530A8
 * Callers:
 *     PpmCheckReset @ 0x140153090 (PpmCheckReset.c)
 *     PpmResetPerfEngineForProcessor @ 0x140240AEC (PpmResetPerfEngineForProcessor.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x140095B50 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x140153148 (PpmResetPerformanceAccumulation.c)
 */

__int64 __fastcall PpmResetPerfTimes(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // rdi
  __int64 result; // rax

  v1 = a1[3021];
  if ( v1.QuadPart )
  {
    PpmResetPerformanceAccumulation();
    PpmSnapPerformanceAccumulation(a1, 1u, 0, 0, (LARGE_INTEGER *)(v1.QuadPart + 24));
    *(_OWORD *)(v1.QuadPart + 184) = *(_OWORD *)(v1.QuadPart + 24);
    *(_OWORD *)(v1.QuadPart + 200) = *(_OWORD *)(v1.QuadPart + 40);
    *(_OWORD *)(v1.QuadPart + 216) = *(_OWORD *)(v1.QuadPart + 56);
    *(_OWORD *)(v1.QuadPart + 232) = *(_OWORD *)(v1.QuadPart + 72);
    *(_OWORD *)(v1.QuadPart + 248) = *(_OWORD *)(v1.QuadPart + 88);
    *(_QWORD *)(v1.QuadPart + 8) = *(_QWORD *)(v1.QuadPart + 24);
    *(_QWORD *)v1.QuadPart = *(_QWORD *)(v1.QuadPart + 32);
    result = *(_QWORD *)(v1.QuadPart + 40);
    *(_QWORD *)(v1.QuadPart + 16) = result;
  }
  return result;
}
