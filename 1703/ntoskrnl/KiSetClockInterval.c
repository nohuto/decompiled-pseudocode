/*
 * XREFs of KiSetClockInterval @ 0x140067A94
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14002E950 (ExpUpdateTimerConfigurationWorker.c)
 *     KiCheckForTimerExpiration @ 0x1400F6AF0 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140204AB4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140067EE0 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  bool v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((__int64)&KiClockIntervalRequests, (unsigned __int64 *)a3);
  *(_DWORD *)(a3 + 28) = a1;
  v6 = 0;
  v7 = KiClockIntervalRequests;
  if ( KiClockIntervalRequests )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(v7 + 28) )
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( (qword_140384FB0 & 1) != 0 )
        {
          if ( !v8 )
          {
LABEL_13:
            v6 = 1;
            break;
          }
          v8 ^= v7;
        }
        if ( !v8 )
          goto LABEL_13;
      }
      else
      {
        v8 = *(_QWORD *)v7;
        if ( (qword_140384FB0 & 1) != 0 )
        {
          if ( !v8 )
          {
LABEL_7:
            v6 = 0;
            break;
          }
          v8 ^= v7;
        }
        if ( !v8 )
          goto LABEL_7;
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx((__int64)&KiClockIntervalRequests, v7, v6, a3);
  *(_BYTE *)(a3 + 24) = 1;
  result = KiSetClockIntervalToMinimumRequested();
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  return result;
}
