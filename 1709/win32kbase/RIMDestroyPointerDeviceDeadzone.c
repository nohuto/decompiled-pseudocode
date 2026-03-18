/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C0104E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0097144 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2)
{
  DeadzonePalmTelemetry **v4; // rcx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+28h] [rbp-10h]
  unsigned int v8; // [rsp+40h] [rbp+8h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x29u,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v5 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x2Au,
      (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  }
  else if ( a2 < 5 && (v4 = *(DeadzonePalmTelemetry ***)(a1 + 8LL * a2 + 408)) != 0LL )
  {
    RIMDeadzone::Release(v4);
    Win32FreePool(*(_QWORD *)(a1 + 8LL * a2 + 408));
    *(_QWORD *)(a1 + 8LL * a2 + 408) = 0LL;
    --*(_DWORD *)(a1 + 448);
    v5 = v8;
  }
  else
  {
    v5 = -1073741811;
  }
  v7 = v5;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Bu,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
    v7);
  return v5;
}
