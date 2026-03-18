/*
 * XREFs of TPAAPShouldAllowNow @ 0x1C01B4574
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     EditionLegacyTouchPadMouseAllowTap @ 0x1C01B3F50 (EditionLegacyTouchPadMouseAllowTap.c)
 *     TPAAPShouldAllowMoveNow @ 0x1C01B4420 (TPAAPShouldAllowMoveNow.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     TPAAPGetLevel @ 0x1C01B43A8 (TPAAPGetLevel.c)
 */

__int64 __fastcall TPAAPShouldAllowNow(int a1, int a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  int v7; // r14d
  LARGE_INTEGER PerformanceCounter; // r13
  signed __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r11
  int v14; // r8d
  unsigned int v15; // r9d
  signed __int64 v16; // rax
  union _LARGE_INTEGER v17; // rcx
  LONGLONG v18; // r10
  bool v19; // zf
  union _LARGE_INTEGER v21[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(v21);
  v11 = 0LL;
  v12 = TPAAPGetLevel(a4);
  if ( !v12 || v12 == 4 && a2 )
  {
    a1 = 0;
    LOBYTE(v6) = v12 == 4;
LABEL_21:
    v17 = v21[0];
    goto LABEL_22;
  }
  if ( (a1 & 2) != 0 )
  {
    v7 = 1;
    if ( a4 )
    {
      if ( (*(_DWORD *)(a4 + 1920) & 0x2000) != 0 )
      {
        v6 = 1;
        a1 &= 2u;
      }
    }
  }
  v14 = a1 & 0x6C;
  if ( v6 || (a1 & 0x6C) == 0 )
    goto LABEL_21;
  v7 = 1;
  if ( v14 == 32 )
  {
    v15 = *((_DWORD *)&gAapState[5] + v12 + 1);
  }
  else
  {
    v15 = *((_DWORD *)gAapState + v12);
    if ( v14 == 64 )
      v15 = *((_DWORD *)&gAapState[9] + v12 + 1);
  }
  v13 = _InterlockedCompareExchange64(&gAapState[12], 0LL, 0LL);
  v16 = _InterlockedCompareExchange64(&gAapState[13], 0LL, 0LL);
  v11 = v16;
  if ( v13 <= 0 )
    goto LABEL_21;
  v17 = v21[0];
  if ( v16 <= v13 )
  {
    v18 = 1000 * (PerformanceCounter.QuadPart - v13) / v21[0].QuadPart;
    v15 = gAapState[5];
  }
  else
  {
    v18 = 1000 * (PerformanceCounter.QuadPart - v16) / v21[0].QuadPart;
  }
  if ( v18 < v15 )
  {
    v6 = 1;
    a1 &= 0x6Cu;
  }
LABEL_22:
  EtwTraceTouchPadAAP(
    1000 * v13 / v17.QuadPart,
    (unsigned int)(1000 * v11 / v17.QuadPart),
    1000 * PerformanceCounter.QuadPart / v17.QuadPart,
    v6,
    a1);
  if ( !a3 || !v7 )
    goto LABEL_26;
  WinSqmIncrementDWORD(0LL, 11611LL, 1LL);
  v19 = v6 == 0;
  if ( v6 )
  {
    WinSqmIncrementDWORD(0LL, 11610LL, 1LL);
LABEL_26:
    v19 = v6 == 0;
  }
  LOBYTE(v5) = v19;
  return v5;
}
