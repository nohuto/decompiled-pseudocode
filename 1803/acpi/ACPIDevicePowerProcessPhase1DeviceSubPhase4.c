/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001CC30
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C0019D90 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001BF64 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // rax
  char v3; // r8
  void *v4; // rbx
  const char *v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // bl

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C005B1F0;
  v3 = 0;
  v4 = (void *)(a1 + 216);
  v6 = (const char *)&unk_1C005B1F0;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x3Du,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v3,
    v2,
    v6);
  dword_1C00677B8 = 0;
  pszDest = 0;
  FreeDataBuffs((__int64)v4, 1u);
  memset(v4, 0, 0x28uLL);
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  ACPIDevicePowerEnumerateAssociatedPowerNodes(
    a1,
    (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes,
    a1);
  *(_DWORD *)(v1 + 496) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 336);
  *(_DWORD *)(v1 + 336) = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 0);
  return 0LL;
}
