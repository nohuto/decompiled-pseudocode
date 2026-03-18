/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C0105040
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  int v4; // edx
  DeadzonePalmTelemetry **v5; // rcx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+40h] [rbp+8h]

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    41,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v6 = -1073741811;
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      18,
      42,
      (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  }
  else if ( v2 < 5 && (v5 = *(DeadzonePalmTelemetry ***)(a1 + 8LL * v2 + 408)) != 0LL )
  {
    RIMDeadzone::Release(v5);
    Win32FreePool(*(_QWORD *)(a1 + 8LL * v2 + 408));
    *(_QWORD *)(a1 + 8LL * v2 + 408) = 0LL;
    --*(_DWORD *)(a1 + 448);
    v6 = v9;
  }
  else
  {
    v6 = -1073741811;
  }
  v8 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Bu,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
    v8);
  return v6;
}
