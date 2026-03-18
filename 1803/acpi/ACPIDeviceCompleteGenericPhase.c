/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0
 * Callers:
 *     ACPIDeviceCompleteInterpreterRequest @ 0x1C0019D70 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001C3C0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001C510 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C001C5F0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001C6B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C001C920 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C001CAC0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C001D110 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C001D1A0 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C001D980 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001DBA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001E0A0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001E1E0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C001E400 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C001E500 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C001E760 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C001E920 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C001EB40 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C001ECE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x1C0041BD0 (ACPIWakeRestoreEnablesCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C0019D90 (ACPIDeviceCompletePhase3Common.c)
 */

__int64 __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  char v6; // r10
  const char *v7; // rdx
  const char *v8; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx

  v4 = *(_QWORD **)(a4 + 40);
  v6 = 0;
  v7 = (const char *)&unk_1C005B1F0;
  v8 = (const char *)&unk_1C005B1F0;
  if ( v4 )
  {
    v10 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v4[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[71];
    }
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0xEu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a2,
    v6,
    v7,
    v8);
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 >= 0 )
  {
    v11 = *(unsigned int *)(a4 + 212);
  }
  else
  {
    *(_DWORD *)(a4 + 256) = a2;
    v11 = 2LL;
  }
  return ACPIDeviceCompletePhase3Common(a4 + 208, v11);
}
