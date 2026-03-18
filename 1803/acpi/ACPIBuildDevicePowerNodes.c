/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C000A5D4
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000E1F0 (ACPIBuildProcessDevicePhasePrx.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C0013150 (WPP_RECORDER_SF_sLqss.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0013850 (WPP_RECORDER_SF_sqss.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00286A0 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemovePowerNodes @ 0x1C0028C88 (ACPIInitRemovePowerNodes.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLIIsEqualHandle @ 0x1C0043D88 (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r13
  unsigned int v9; // r15d
  unsigned int v10; // esi
  PVOID PoolWithTag; // rax
  PVOID v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  void *v16; // r8

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v9 = 0;
  v10 = *v4;
  if ( !a4 )
  {
    if ( v10 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, BugCheckParameter2, BugCheckParameter3, *v4);
    v9 = 2;
    v10 -= 2;
  }
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v10, 0x50706341u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 56LL * v10);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      *(_QWORD *)(BugCheckParameter2 + 8 * v6 + 360) = v12;
      v13 = 5LL * v9;
      v14 = *(_QWORD *)(a3 + 32);
      if ( (int)AMLIGetNameSpaceObject(*(void **)(v14 + 8 * v13 + 40)) >= 0 )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, v15, 10, 14);
        KeBugCheckEx(0xA5u, 0x12uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v14 + 8 * v13 + 40));
      }
      v16 = &unk_1C005B1F0;
      if ( BugCheckParameter2 )
      {
        v15 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( (v15 & 0x200000000000LL) != 0 && (v15 & 0x400000000000LL) != 0 )
          v16 = *(void **)(BugCheckParameter2 + 568);
      }
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v15, (_DWORD)v16, 13);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v14 + 8 * v13 + 40));
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
