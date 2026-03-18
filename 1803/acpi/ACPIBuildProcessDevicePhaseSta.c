/*
 * XREFs of ACPIBuildProcessDevicePhaseSta @ 0x1C000E650
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDetectDuplicateHID @ 0x1C0017E78 (ACPIDetectDuplicateHID.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C0035694 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 *     LinkNodeAddLinkNode @ 0x1C0056F08 (LinkNodeAddLinkNode.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSta(__int64 a1)
{
  ULONG_PTR v1; // rbx
  void *v3; // rax
  __int64 v4; // rcx
  void *v5; // rdx
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v1 + 8) & 0x2000LL) != 0 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 184));
    *(_DWORD *)(v1 + 196) = 0;
    ACPIRegisterForDeviceNotificationsByDeviceExtension(v1, ACPICMButtonNotifyByDeviceExtension, v1);
  }
  *(_DWORD *)(a1 + 32) = 14;
  v3 = &unk_1C005B1F0;
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C005B1F0;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v3 = *(void **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v5 = *(void **)(v1 + 568);
  }
  v7 = (__int64)v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v5,
    6,
    48,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v1,
    (__int64)v3,
    v7);
  ACPIDetectDuplicateHID(v1);
  if ( (*(_DWORD *)(v1 + 8) & 0x10000000) != 0 )
    LinkNodeAddLinkNode((PVOID)v1);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
