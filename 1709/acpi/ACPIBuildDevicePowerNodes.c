/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C0014E10
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0014680 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0014940 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001CDC0 (ACPIBuildProcessDevicePhasePrx.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0011088 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0027C54 (WPP_RECORDER_SF_sqss.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C00450B4 (WPP_RECORDER_SF_sLqss.c)
 *     ACPIInitRemovePowerNodes @ 0x1C004F474 (ACPIInitRemovePowerNodes.c)
 *     AMLIIsEqualHandle @ 0x1C005B7B8 (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v8; // r13d
  unsigned int v9; // esi
  PVOID PoolWithTag; // rax
  PVOID v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  void *v15; // r8

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v8 = 0;
  v9 = *v4;
  if ( !a4 )
  {
    if ( v9 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, BugCheckParameter2, BugCheckParameter3, *v4);
    v9 -= 2;
    v8 = 2;
  }
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v9, 0x50706341u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 56LL * v9);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      *(_QWORD *)(BugCheckParameter2 + 8 * v6 + 360) = v12;
      v13 = *(_QWORD *)(a3 + 32);
      if ( (int)AMLIGetNameSpaceObject(*(void **)(v13 + 40LL * v8 + 40)) >= 0 )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, v14, 10, 14);
        KeBugCheckEx(0xA5u, 0x12uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v13 + 40LL * v8 + 40));
      }
      v15 = &unk_1C0067B08;
      if ( BugCheckParameter2 )
      {
        v14 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( (v14 & 0x200000000000LL) != 0 && (v14 & 0x400000000000LL) != 0 )
          v15 = *(void **)(BugCheckParameter2 + 568);
      }
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v14, (_DWORD)v15, 13);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v13 + 40LL * v8 + 40));
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
