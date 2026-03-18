/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C00597D0
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0010FE0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0055020 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0055838 (Controller_ConfigureS0IdleSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *); // rax
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+28h] [rbp-40h]
  _DWORD v10[10]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x24uLL);
  v4 = *a1;
  v10[0] = 36;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368);
  v10[5] = 2;
  v10[6] = 2;
  v10[8] = 2;
  v10[1] = 2;
  v10[2] = 5;
  v10[4] = 2;
  v10[3] = a2;
  v10[7] = 2;
  v6 = v5(WdfDriverGlobals, v4, v10);
  if ( v6 >= 0 )
  {
    *((_DWORD *)a1 + 104) = a2;
    v9 = a2;
    return WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0x1Fu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v9);
  }
  else
  {
    v8 = v6;
    result = WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0x1Eu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v8);
    *((_DWORD *)a1 + 98) = 2;
  }
  return result;
}
