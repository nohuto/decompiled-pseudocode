/*
 * XREFs of Command_Create @ 0x1C0052008
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_IsProxyCommandRing @ 0x1C00043E4 (Command_IsProxyCommandRing.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     XilCommand_Create @ 0x1C0005A84 (XilCommand_Create.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     DynamicLock_Create @ 0x1C003E2B0 (DynamicLock_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C0052194 (Command_CreateCommandWatchdogTimer.c)
 */

__int64 __fastcall Command_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // eax
  int CommandWatchdogTimer; // ebx
  __int64 v7; // rdi
  char IsProxyCommandRing; // al
  __int64 v9; // rdx
  __int64 *v10; // r9
  _QWORD v12[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF

  v13 = a1;
  memset(v12, 0, 0x38uLL);
  v12[6] = off_1C004B228;
  v12[4] = *(_QWORD *)(a2 + 8);
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         v12,
         &v13);
  CommandWatchdogTimer = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v13,
           off_1C004B228);
    *(_QWORD *)v7 = v13;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 72),
        5u,
        7u,
        0xBu,
        (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
        v13);
    *(_QWORD *)(v7 + 8) = a2;
    CommandWatchdogTimer = XilCommand_Create(v7);
    if ( CommandWatchdogTimer >= 0 )
    {
      IsProxyCommandRing = Command_IsProxyCommandRing(v7);
      CommandWatchdogTimer = DynamicLock_Create(v13, v9, IsProxyCommandRing != 0, v10);
      if ( CommandWatchdogTimer >= 0 )
      {
        CommandWatchdogTimer = Command_CreateCommandWatchdogTimer(v7);
        if ( CommandWatchdogTimer >= 0 )
        {
          *(_DWORD *)(v7 + 36) = 1;
          *a3 = v7;
        }
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 7u, 0xAu, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids, v5);
  }
  return (unsigned int)CommandWatchdogTimer;
}
