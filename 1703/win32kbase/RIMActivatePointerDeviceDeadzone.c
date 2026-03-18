/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C0104DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C0116080 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // edx
  __int64 v7; // rax
  int v8; // ecx
  bool v9; // cf
  RIMDeadzone *v10; // rcx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+28h] [rbp-10h]

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    35,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v11 = -1073741811;
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      36,
      (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  }
  else if ( v4 < 5 && (_mm_lfence(), (v7 = *(_QWORD *)(a1 + 8LL * v4 + 408)) != 0) )
  {
    v8 = *(_DWORD *)(v7 + 16);
    if ( v8 )
      *(_DWORD *)(v7 + 40) = a3;
    v9 = v8 != 0;
    v10 = *(RIMDeadzone **)(a1 + 8LL * v4 + 408);
    v11 = v9 ? 0 : 0xC0000001;
    RIMDeadzone::ActivateTelemetrySession(v10, a3);
  }
  else
  {
    v11 = -1073741811;
  }
  v13 = v11;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x25u,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
    v13);
  return v11;
}
