/*
 * XREFs of RaidAdapterResumeUnit @ 0x1C000CDC8
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C000CC80 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000D1B0 (RaidResumeUnitQueue.c)
 *     WPP_SF_ddd @ 0x1C003036C (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterResumeUnit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 v6; // rdi
  int v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2, a3, a4);
  v6 = Unit;
  if ( Unit )
  {
    if ( KeCancelTimer((PKTIMER)(Unit + 792)) )
    {
      if ( (unsigned int)RaidResumeUnitQueue(v6) )
        RaidRestartIoQueue(v6);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      53LL,
      &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
      v4,
      BYTE1(v7),
      BYTE2(v7));
  }
}
