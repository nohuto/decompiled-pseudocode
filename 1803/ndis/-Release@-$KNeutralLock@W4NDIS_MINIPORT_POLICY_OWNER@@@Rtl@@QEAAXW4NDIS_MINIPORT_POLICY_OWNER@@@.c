/*
 * XREFs of ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00BFB6C
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C000FF30 (ndisRequestedDevicePowerIrpComplete.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E5C1C (ndisIMInitializeDeviceInstance_ea_1C00E5C1C.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EE3E8 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(__int64 a1)
{
  __int64 v1; // rbx
  KLockHolder v3; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 8;
  v3.m_Lock = (KPushLockBase *)(a1 + 8);
  KeEnterCriticalRegion();
  v3.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  *(_DWORD *)a1 = 0;
  v3.m_State = Exclusive;
  KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
  KLockHolder::~KLockHolder(&v3);
}
