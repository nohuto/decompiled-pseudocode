/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001E1E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C0019D90 (ACPIDeviceCompletePhase3Common.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  char v4; // al
  const char *v5; // rcx
  const char *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (_QWORD *)(a1 + 216);
  v4 = 0;
  v5 = (const char *)&unk_1C005B1F0;
  v6 = (const char *)&unk_1C005B1F0;
  if ( v1 )
  {
    v7 = v1[1];
    v4 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v1[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x4Fu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v4,
    v5,
    v6);
  *(_DWORD *)(a1 + 212) = 8;
  v8 = v2[2];
  if ( (v8 & 9) == 9 && ((v8 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    memset(v2, 0, 0x28uLL);
    ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 2);
  }
  return 0LL;
}
