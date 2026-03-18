/*
 * XREFs of ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AAD10
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01ACC8C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     TraceLoggingPTPWarpBack @ 0x1C0198060 (TraceLoggingPTPWarpBack.c)
 *     ?CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01AAA08 (-CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
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
          zzzInternalSetCursorPos(*((_DWORD *)a1 + 6), *((_DWORD *)a1 + 7), 2);
        }
        return;
      }
      a1 = (struct tagTPSTATE *)((char *)a1 + 272);
    }
  }
}
