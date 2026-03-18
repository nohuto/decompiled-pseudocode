/*
 * XREFs of ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AAE00
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01ACC8C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01AE4BC (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FilterMoveForStableContact(struct tagPOINT a1, struct tagTPSTATE *a2, LARGE_INTEGER *a3)
{
  LONG x; // ebx
  LARGE_INTEGER PerformanceCounter; // rbp
  DWORD LowPart; // ecx
  int v8; // edx
  DWORD v9; // r9d
  DWORD v10; // edx
  LONG y; // [rsp+34h] [rbp+Ch]

  y = a1.y;
  x = a1.x;
  if ( (gTPThresholds[28] & 0x80u) == 0 )
    return 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !x && !y )
  {
    LowPart = a3[33].LowPart;
    if ( (LowPart & 0x1000000) == 0 )
    {
      a3[33].LowPart = LowPart | 0x1000000;
      a3[12] = KeQueryPerformanceCounter(0LL);
    }
  }
  v8 = -__CFSHR__(a3[33].LowPart, 25);
  if ( x || y )
    a3[33].LowPart &= ~0x1000000u;
  if ( *((int *)a2 + 480) < 0
    && v8
    && (x || y)
    && PerformanceCounter.QuadPart - a3[12].QuadPart >= (unsigned __int64)(gliQpcFreq
                                                                         * (unsigned int)gTPThresholds[40]
                                                                         / 1000LL) )
  {
    a3[33].LowPart &= ~0x2000000u;
    goto LABEL_17;
  }
  v9 = a3[33].LowPart;
  if ( (v9 & 0x2000000) == 0
    || PerformanceCounter.QuadPart - a3[11].QuadPart >= (unsigned __int64)(gliQpcFreq
                                                                         * (unsigned int)gTPThresholds[39]
                                                                         / 1000LL) )
  {
    a3[33].LowPart = v9 & 0xFDFFFFFF;
    return 0LL;
  }
LABEL_17:
  v10 = a3[33].LowPart;
  if ( (v10 & 0x2000000) == 0 )
  {
    a3[2] = a3[1];
    a3[3] = *(LARGE_INTEGER *)gptCursorAsync;
    a3[33].LowPart = v10 | 0x2000000;
    a3[11] = PerformanceCounter;
  }
  return 1LL;
}
