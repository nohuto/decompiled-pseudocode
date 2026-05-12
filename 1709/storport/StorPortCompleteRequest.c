/*
 * XREFs of StorPortCompleteRequest @ 0x1C0033A90
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1C006B140 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C0001F3C (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C00020C0 (RaidResumeUnitQueue.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     RaidResumeAdapterQueue @ 0x1C00106A4 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0010E08 (RaidPauseAdapterQueue.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 */

char __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 v5; // r14
  __int64 *v7; // rax
  __int64 v10; // rbx
  __int64 Unit; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v16; // [rsp+60h] [rbp+8h]

  v5 = 0LL;
  HIBYTE(v16) = 0;
  v7 = *(__int64 **)(a1 - 16);
  v10 = *v7;
  if ( !*v7 )
    return (char)v7;
  if ( (qword_1C0056210 & 0x40) != 0 )
    DbgLogRequest(
      v10,
      12,
      v10,
      a4 | (int)(*(_DWORD *)(v10 + 56) << 24) | (unsigned __int64)((a3 | (a2 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( a2 == 0xFF || a3 == 0xFF || a4 == 0xFF )
  {
    RaidPauseAdapterQueue(v10);
  }
  else
  {
    LOBYTE(v16) = a2;
    BYTE1(v16) = a3;
    BYTE2(v16) = a4;
    Unit = RaidAdapterFindUnit(v10, v16);
    v5 = Unit;
    if ( !Unit )
    {
      v7 = (__int64 *)&WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v7) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v7 & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          LODWORD(v14) = a4;
          LODWORD(v13) = a3;
          LOBYTE(v7) = WPP_SF_ddd(
                         (__int64)WPP_GLOBAL_Control->AttachedDevice,
                         0x19u,
                         (__int64)&WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids,
                         a2,
                         v13,
                         v14);
        }
      }
      return (char)v7;
    }
    RaidPauseUnitQueue(Unit);
  }
  LOBYTE(v7) = KeInsertQueueDpc(
                 (PRKDPC)(v10 + 1928),
                 (PVOID)(a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8)),
                 (PVOID)a5);
  if ( !(_BYTE)v7 )
  {
    if ( a2 == 0xFF || a3 == 0xFF || a4 == 0xFF )
      LOBYTE(v7) = RaidResumeAdapterQueue(v10);
    else
      LOBYTE(v7) = RaidResumeUnitQueue(v5);
  }
  return (char)v7;
}
