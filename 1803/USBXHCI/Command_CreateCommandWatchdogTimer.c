/*
 * XREFs of Command_CreateCommandWatchdogTimer @ 0x1C0052194
 * Callers:
 *     Command_Create @ 0x1C0052008 (Command_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Command_CreateCommandWatchdogTimer(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[5]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v7[7]; // [rsp+58h] [rbp+1Fh] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = a1[1];
  LODWORD(v7[0]) = 56;
  v7[3] = 0x100000001LL;
  if ( Controller_IsSecureDevice(v2) )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[2]) = 0;
    LODWORD(v7[3]) = 2;
  }
  else
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[2]) = 1000;
  }
  v6[1] = Command_WdfEvtWatchdogTimerFunction;
  v7[4] = *a1;
  BYTE4(v6[2]) = 1;
  LODWORD(v6[0]) = 40;
  LODWORD(v6[3]) = 500;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, _QWORD *))(WdfFunctions_01023 + 2544))(
         WdfDriverGlobals,
         v6,
         v7,
         a1 + 3);
  v4 = v3;
  if ( v3 < 0 )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      7u,
      0xCu,
      (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
      v3);
  return v4;
}
