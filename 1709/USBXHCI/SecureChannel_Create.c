/*
 * XREFs of SecureChannel_Create @ 0x1C0060408
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall SecureChannel_Create(union _LARGE_INTEGER a1, union _LARGE_INTEGER **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  union _LARGE_INTEGER *v6; // rbx
  _QWORD v8[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF

  memset(v8, 0, 0x38uLL);
  v8[3] = 0x100000001LL;
  v8[6] = off_1C004E2A0;
  LODWORD(v8[0]) = 56;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v8,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (union _LARGE_INTEGER *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v9,
                                   off_1C004E2A0);
    v6->QuadPart = v9;
    v6[1] = a1;
    KeQueryPerformanceCounter(v6 + 2);
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a1.QuadPart + 16),
      4u,
      0x13u,
      0xBu,
      (__int64)&WPP_d3b706e0f10d373cc7042ef29394172c_Traceguids,
      v9);
    *a2 = v6;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1.QuadPart + 16),
      2u,
      0x13u,
      0xAu,
      (__int64)&WPP_d3b706e0f10d373cc7042ef29394172c_Traceguids,
      v4);
  }
  return v5;
}
