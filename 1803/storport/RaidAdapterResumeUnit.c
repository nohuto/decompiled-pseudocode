/*
 * XREFs of RaidAdapterResumeUnit @ 0x1C0003820
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0003A94 (RaidResumeUnitQueue.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 */

char __fastcall RaidAdapterResumeUnit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 v6; // rdi
  PDEVICE_OBJECT *v7; // rax
  int v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2, a3, a4);
  v6 = Unit;
  if ( Unit )
  {
    LOBYTE(v7) = KeCancelTimer((PKTIMER)(Unit + 824));
    if ( (_BYTE)v7 )
    {
      LODWORD(v7) = RaidResumeUnitQueue(v6);
      if ( (_DWORD)v7 )
        LOBYTE(v7) = RaidRestartIoQueue(v6);
    }
  }
  else
  {
    v7 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      LODWORD(v7) = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( ((unsigned __int8)v7 & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        LOBYTE(v7) = WPP_SF_ddd(
                       WPP_GLOBAL_Control->AttachedDevice,
                       53LL,
                       &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
                       v4,
                       BYTE1(v9),
                       BYTE2(v9));
    }
  }
  return (char)v7;
}
