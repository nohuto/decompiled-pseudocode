/*
 * XREFs of ?CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x18001608C
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z @ 0x18001529C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z @ 0x180021364 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z.c)
 *     ?Create@DWMNullInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1800226D8 (-Create@DWMNullInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 */

__int64 __fastcall GestureTargetingTarget::CreateRoutingTarget(
        GestureTargetingTarget *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3,
        struct IInputTarget **a4)
{
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  if ( !a3 || (v5 = DWMInputTarget::Create(a2, a3, 0, 0, a4), v5 < 0) )
  {
    v6 = DWMNullInputTarget::Create(a4);
    v5 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 4, 726, v6);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return (unsigned int)v5;
}
