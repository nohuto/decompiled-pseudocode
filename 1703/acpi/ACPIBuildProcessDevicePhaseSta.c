/*
 * XREFs of ACPIBuildProcessDevicePhaseSta @ 0x1C000ED90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildScheduleDpc @ 0x1C000DFA8 (ACPIBuildScheduleDpc.c)
 *     ACPIDetectDuplicateHID @ 0x1C001341C (ACPIDetectDuplicateHID.c)
 *     LinkNodeAddLinkNode @ 0x1C002A37C (LinkNodeAddLinkNode.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C0054DBC (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSta(__int64 a1)
{
  ULONG_PTR v1; // rbx
  const char *v3; // rax
  __int64 v4; // rcx
  const char *v5; // rdx
  signed __int32 v6; // ecx
  KIRQL v7; // bl

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v1 + 8) & 0x2000LL) != 0 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 184));
    *(_DWORD *)(v1 + 196) = 0;
    ACPIRegisterForDeviceNotificationsByDeviceExtension(v1, ACPICMButtonNotifyByDeviceExtension, v1);
  }
  *(_DWORD *)(a1 + 32) = 14;
  v3 = (const char *)&unk_1C0066CD0;
  v4 = *(_QWORD *)(v1 + 8);
  v5 = (const char *)&unk_1C0066CD0;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v3 = *(const char **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v5 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x30u,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    0,
    v1,
    v3,
    v5);
  ACPIDetectDuplicateHID(v1);
  if ( (*(_DWORD *)(v1 + 8) & 0x10000000) != 0 )
    LinkNodeAddLinkNode((PVOID)v1);
  v6 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v6, 1);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  ACPIBuildScheduleDpc();
  KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
  return 0LL;
}
