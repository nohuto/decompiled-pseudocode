/*
 * XREFs of KiSetClockInterval @ 0x14010F168
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140098BB0 (KiCheckForTimerExpiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14010F010 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14020ACEC (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14010F228 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  bool v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((__int64)&KiClockIntervalRequests, a3);
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
        if ( (qword_1403A0CF0 & 1) != 0 )
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
        if ( (qword_1403A0CF0 & 1) != 0 )
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
