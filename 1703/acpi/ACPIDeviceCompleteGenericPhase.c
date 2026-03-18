/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x1C000BD60
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0009EA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0009FE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000A270 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000A4D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A7B0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000AD90 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0020B40 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002A120 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x1C0048CC0 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0049730 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049900 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C0049B90 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0049C20 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0049D10 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0049E10 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0049ED0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A070 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C004A230 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A450 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004A5F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x1C005A090 (ACPIWakeRestoreEnablesCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C002A71C (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  char v6; // r10
  void *v7; // rdx
  void *v8; // r8
  __int64 v10; // rcx
  KIRQL v11; // bl
  int v12; // edx
  __int64 v13; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD **)(a4 + 40);
  v6 = 0;
  v7 = &unk_1C0066CD0;
  v8 = &unk_1C0066CD0;
  if ( v4 )
  {
    v10 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)v4[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (void *)v4[71];
    }
  }
  v13 = (__int64)v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v7,
    10,
    14,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a2,
    v6,
    v13,
    (__int64)v8);
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 < 0 )
  {
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceCompletePhase3Common(a4 + 208, 2LL);
  }
  else
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212), 1);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v12 = AcpiPowerDpcFlags | 2;
    AcpiPowerDpcFlags = v12;
    if ( (v12 & 1) == 0 )
    {
      AcpiPowerDpcFlags = v12 | 1;
      KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v11);
  }
}
