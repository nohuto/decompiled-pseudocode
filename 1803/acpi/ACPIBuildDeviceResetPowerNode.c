/*
 * XREFs of ACPIBuildDeviceResetPowerNode @ 0x1C000AB04
 * Callers:
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000DA30 (ACPIBuildProcessDevicePhasePrr.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C0013150 (WPP_RECORDER_SF_sLqss.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0013850 (WPP_RECORDER_SF_sqss.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIBuildDeviceResetPowerNode(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  __int64 v8; // r14

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x50706341u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    *(_QWORD *)(BugCheckParameter2 + 400) = v7;
    v8 = *(_QWORD *)(a3 + 32);
    if ( (int)AMLIGetNameSpaceObject(*(void **)(v8 + 40)) < 0 )
    {
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, 0, *(_QWORD *)(BugCheckParameter2 + 8), 15);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v8 + 40));
    }
    WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, 2, 10, 16);
    KeBugCheckEx(0xA5u, 0x12uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v8 + 40));
  }
  return 3221225626LL;
}
