/*
 * XREFs of RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C0105180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceDeadzoneOrigin(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+28h] [rbp-10h]

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    38,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v9 = -1073741811;
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      39,
      (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  }
  else if ( v4 < 5 && (_mm_lfence(), (v7 = *(_QWORD *)(a1 + 8LL * v4 + 408)) != 0) )
  {
    v8 = *(_DWORD *)(v7 + 16);
    if ( v8 )
      *(_QWORD *)(v7 + 44) = a3;
    v9 = v8 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v9 = -1073741811;
  }
  v11 = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x28u,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
    v11);
  return v9;
}
