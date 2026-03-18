/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C0104C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C0114BF0 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  int v7; // ecx
  bool v8; // cf
  RIMDeadzone *v9; // rcx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x23u,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v10 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x24u,
      (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  }
  else if ( a2 < 5 && (_mm_lfence(), (v6 = *(_QWORD *)(a1 + 8LL * a2 + 408)) != 0) )
  {
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 )
      *(_DWORD *)(v6 + 40) = a3;
    v8 = v7 != 0;
    v9 = *(RIMDeadzone **)(a1 + 8LL * a2 + 408);
    v10 = v8 ? 0 : 0xC0000001;
    RIMDeadzone::ActivateTelemetrySession(v9, a3);
  }
  else
  {
    v10 = -1073741811;
  }
  v12 = v10;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x25u,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
    v12);
  return v10;
}
