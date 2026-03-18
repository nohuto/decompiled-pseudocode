/*
 * XREFs of ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AE0C4
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01B000C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     TraceLoggingPTPWarpBack @ 0x1C01A3C00 (TraceLoggingPTPWarpBack.c)
 *     ?CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01ADDBC (-CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
 */

void __fastcall DoTPButtonWarpBack(struct tagTPSTATE *a1, int a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagTPSTATE *v4; // rdx

  if ( a2 == 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (struct tagTPSTATE *)((char *)a1 + 1632);
    while ( a1 != v4 )
    {
      if ( (*((_DWORD *)a1 + 66) & 1) != 0 )
      {
        if ( PerformanceCounter.QuadPart - *((_QWORD *)a1 + 11) < (unsigned __int64)(gliQpcFreq
                                                                                   * (unsigned int)gTPThresholds[54]
                                                                                   / 1000LL)
          && !CrossedTPButtonWarpBackThreshold(a1, *(struct tagPOINT *)((char *)a1 + 8)) )
        {
          if ( gliQpcFreq )
            TraceLoggingPTPWarpBack(13);
          zzzInternalSetCursorPos(*((_DWORD *)a1 + 6), *((_DWORD *)a1 + 7), 2, 0);
        }
        return;
      }
      a1 = (struct tagTPSTATE *)((char *)a1 + 272);
    }
  }
}
