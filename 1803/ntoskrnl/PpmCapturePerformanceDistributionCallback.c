/*
 * XREFs of PpmCapturePerformanceDistributionCallback @ 0x14027E930
 * Callers:
 *     PpmCapturePerformanceDistribution @ 0x14027E7EC (PpmCapturePerformanceDistribution.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x140109F20 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall PpmCapturePerformanceDistributionCallback(LARGE_INTEGER *a1, __int64 *a2)
{
  unsigned int v2; // r8d
  LARGE_INTEGER v4; // rcx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rbx
  char v12; // cl
  unsigned __int64 v13; // rdx
  LARGE_INTEGER v15[10]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *((_DWORD *)a2 + 3);
  v4 = a1[3023];
  v6 = (v2 + 7) & 0xFFFFFFF8;
  if ( v2 + 7 < v2 )
    v6 = *((_DWORD *)a2 + 3);
  v7 = 0;
  v8 = v4.QuadPart != 0 ? 2 : 0;
  v9 = 16 * v8 + v6 + 8;
  if ( v9 > *((_DWORD *)a2 + 2) )
    goto LABEL_11;
  v10 = *a2;
  v11 = *a2 + v6;
  if ( !v4.QuadPart )
  {
LABEL_10:
    *(_DWORD *)(v10 + 4LL * (unsigned int)(*((_DWORD *)a2 + 4))++ + 4) = v6;
    *(_DWORD *)v11 = KeGetPcr()->Prcb.Number;
    *(_DWORD *)(v11 + 4) = v8;
LABEL_11:
    *((_DWORD *)a2 + 3) = v9;
    return v7;
  }
  memset(v15, 0, sizeof(v15));
  if ( PpmSnapPerformanceAccumulation(a1, 0, a1 != (LARGE_INTEGER *)KeGetCurrentPrcb(), 0, v15) )
  {
    v12 = PpmPerformanceDistributionShift;
    if ( a1[3003].LowPart == 3 )
      v12 = PpmHvPerformanceDistributionShift;
    v13 = (unsigned __int64)(255 * v15[1].QuadPart - v15[3].QuadPart) >> v12;
    *(_QWORD *)(v11 + 24) = (unsigned __int64)v15[3].QuadPart >> v12;
    *(_QWORD *)(v11 + 8) = v13;
    *(_BYTE *)(v11 + 16) = 0;
    *(_BYTE *)(v11 + 32) = -1;
    v10 = *a2;
    goto LABEL_10;
  }
  return (unsigned int)-1073741823;
}
