/*
 * XREFs of PpmCapturePerformanceDistributionCallback @ 0x1402488B0
 * Callers:
 *     PpmCapturePerformanceDistribution @ 0x14024876C (PpmCapturePerformanceDistribution.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x140095B50 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PpmCapturePerformanceDistributionCallback(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned int v2; // ebx
  LARGE_INTEGER v5; // rcx
  unsigned int v6; // ebp
  int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // rsi
  char v10; // cl
  unsigned __int64 v11; // rdx
  LARGE_INTEGER v13[10]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *(_DWORD *)(a2 + 12);
  if ( v2 + 7 >= v2 )
    v2 = (v2 + 7) & 0xFFFFFFF8;
  v5 = a1[3023];
  v6 = 0;
  v7 = v5.QuadPart != 0 ? 2 : 0;
  v8 = v2 + 16 * v7 + 8;
  if ( v8 > *(_DWORD *)(a2 + 8) )
    goto LABEL_11;
  v9 = *(_QWORD *)a2 + v2;
  if ( !v5.QuadPart )
  {
LABEL_10:
    *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 16))++ + 4) = v2;
    *(_DWORD *)v9 = KeGetPcr()->Prcb.Number;
    *(_DWORD *)(v9 + 4) = v7;
LABEL_11:
    *(_DWORD *)(a2 + 12) = v8;
    return v6;
  }
  memset(v13, 0, sizeof(v13));
  if ( PpmSnapPerformanceAccumulation(a1, 0, a1 != (LARGE_INTEGER *)KeGetCurrentPrcb(), 0, v13) )
  {
    v10 = PpmPerformanceDistributionShift;
    if ( a1[3003].LowPart == 3 )
      v10 = PpmHvPerformanceDistributionShift;
    v11 = (unsigned __int64)(255 * v13[1].QuadPart - v13[3].QuadPart) >> v10;
    *(_QWORD *)(v9 + 24) = (unsigned __int64)v13[3].QuadPart >> v10;
    *(_QWORD *)(v9 + 8) = v11;
    *(_BYTE *)(v9 + 16) = 0;
    *(_BYTE *)(v9 + 32) = -1;
    goto LABEL_10;
  }
  return (unsigned int)-1073741823;
}
