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

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  BOOLEAN v6; // r8
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v8; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  v6 = 0;
  Root = KiClockIntervalRequests.Root;
  if ( KiClockIntervalRequests.Root )
  {
    while ( 1 )
    {
      if ( a1 >= HIDWORD(Root[1].Left) )
      {
        v8 = Root->Children[1];
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
          {
LABEL_13:
            v6 = 1;
            break;
          }
          v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
        }
        if ( !v8 )
          goto LABEL_13;
      }
      else
      {
        v8 = Root->Children[0];
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
          {
LABEL_7:
            v6 = 0;
            break;
          }
          v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
        }
        if ( !v8 )
          goto LABEL_7;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, Root, v6, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  result = KiSetClockIntervalToMinimumRequested();
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  return result;
}
