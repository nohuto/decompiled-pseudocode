/*
 * XREFs of RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C0104FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceDeadzoneOrigin(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x26u,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v8 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x27u,
      (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  }
  else if ( a2 < 5 && (_mm_lfence(), (v6 = *(_QWORD *)(a1 + 8LL * a2 + 408)) != 0) )
  {
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 )
      *(_QWORD *)(v6 + 44) = a3;
    v8 = v7 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v8 = -1073741811;
  }
  v10 = v8;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x28u,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
    v10);
  return v8;
}
