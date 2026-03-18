/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C0056760
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0008240 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00526FC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0056864 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *); // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+28h] [rbp-40h]
  _DWORD v11[10]; // [rsp+30h] [rbp-38h] BYREF

  memset(v11, 0, 0x24uLL);
  v4 = *a1;
  v11[0] = 36;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01023 + 368);
  v11[5] = 2;
  v11[6] = 2;
  v11[8] = 2;
  v11[1] = 2;
  v11[2] = 5;
  v11[4] = 2;
  v11[3] = a2;
  v11[7] = 2;
  v6 = v5(WdfDriverGlobals, v4, v11);
  v7 = a1[9];
  if ( v6 >= 0 )
  {
    *((_DWORD *)a1 + 104) = a2;
    v10 = a2;
    return WPP_RECORDER_SF_d(v7, 4u, 4u, 0x1Fu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v10);
  }
  else
  {
    v9 = v6;
    result = WPP_RECORDER_SF_d(v7, 4u, 4u, 0x1Eu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v9);
    *((_DWORD *)a1 + 98) = 2;
  }
  return result;
}
