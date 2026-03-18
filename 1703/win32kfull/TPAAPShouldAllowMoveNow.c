/*
 * XREFs of TPAAPShouldAllowMoveNow @ 0x1C01B1018
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01AE4BC (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     TPAAPGetLevel @ 0x1C01B0FA0 (TPAAPGetLevel.c)
 *     TPAAPShouldAllowNow @ 0x1C01B116C (TPAAPShouldAllowNow.c)
 */

__int64 __fastcall TPAAPShouldAllowMoveNow(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  int v7; // esi
  BOOL v8; // ebp
  int v9; // eax
  int v10; // r14d
  LARGE_INTEGER PerformanceCounter; // rax
  signed __int64 v13; // r9
  signed __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r11
  BOOL v17; // ecx

  v3 = *(_DWORD *)(a2 + 264);
  v7 = -__CFSHR__(v3, 12);
  v8 = !__CFSHR__(v3, 12) && (v3 & 0x80u) != 0;
  v9 = TPAAPShouldAllowNow(32LL, 0LL, 0LL);
  v10 = v9;
  if ( *(_DWORD *)(a1 + 1664) == 2 )
  {
    if ( v8 && !v9 )
    {
      *a3 = 1;
      goto LABEL_21;
    }
  }
  else
  {
    if ( v8 && (*(_DWORD *)(a2 + 264) & 0x1000) != 0 )
      return 0LL;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = gAapState[0];
    if ( (__int64)((unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *(_QWORD *)(a2 + 56))) / gliQpcFreq) < LODWORD(gAapState[9]) )
      return 0LL;
    v14 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 2088))) / gliQpcFreq;
    v17 = 0;
    if ( v7 )
    {
      v15 = TPAAPGetLevel(a1);
      if ( v16 >= *(unsigned int *)(v13 + 4LL * v15 + 44) )
        v17 = 1;
    }
    if ( (!v7 || v14 > *(unsigned int *)(v13 + 64)) && !v17 && !v10 )
    {
LABEL_21:
      *(_DWORD *)(a2 + 264) |= 0x1000u;
      return 0LL;
    }
  }
  return 1LL;
}
