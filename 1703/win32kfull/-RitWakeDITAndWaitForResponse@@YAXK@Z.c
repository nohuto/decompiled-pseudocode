/*
 * XREFs of ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01B94F8
 * Callers:
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01B8CF4 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01B91C8 (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     DitStopRead @ 0x1C01BA158 (DitStopRead.c)
 *     StartDeviceRead @ 0x1C01BA4BC (StartDeviceRead.c)
 * Callees:
 *     WakeDIT @ 0x1C0104328 (WakeDIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RitWakeDITAndWaitForResponse(unsigned int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  gbRITBlockedOnDIT = 1;
  if ( (unsigned int)WakeDIT(a1) )
  {
    LeaveDeviceInfoListCrit_(v1);
    UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
    KeWaitForSingleObject(gpkeDITResponseEvent, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    EnterDeviceInfoListCrit_(v6);
  }
  gbRITBlockedOnDIT = 0;
}
