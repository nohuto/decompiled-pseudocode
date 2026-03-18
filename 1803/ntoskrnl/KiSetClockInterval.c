/*
 * XREFs of KiSetClockInterval @ 0x140005980
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x140005770 (ExpUpdateTimerConfigurationWorker.c)
 *     KiCheckForTimerExpiration @ 0x14010D920 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140248F50 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140005A68 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140005B80 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned int v8; // esi

  v3 = a3;
  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, a3);
  *(_DWORD *)(v3 + 28) = a1;
  v6 = KiClockIntervalRequests;
  if ( (qword_1403E4B50 & 1) != 0 && KiClockIntervalRequests )
    v6 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
  LOBYTE(a3) = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(v6 + 28) )
      {
        v7 = *(_QWORD *)v6;
        if ( (qword_1403E4B50 & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_18;
          v7 ^= v6;
        }
        if ( !v7 )
        {
LABEL_18:
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( (qword_1403E4B50 & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_12;
          v7 ^= v6;
        }
        if ( !v7 )
        {
LABEL_12:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v6 = v7;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, v6, a3, v3);
  *(_BYTE *)(v3 + 24) = 1;
  v8 = KiSetClockIntervalToMinimumRequested();
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  if ( *(_DWORD *)(v3 + 32) )
    PoTraceSystemTimerResolutionKernel(a1);
  return v8;
}
