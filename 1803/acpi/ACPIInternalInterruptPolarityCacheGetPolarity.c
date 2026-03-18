/*
 * XREFs of ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0029EF4
 * Callers:
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C0086C34 (PnpiCmResourceToBiosExtendedIrq.c)
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00910D4 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C0029D4C (ACPIInternalFindDeviceExtensionNoLock.c)
 *     WPP_RECORDER_SF_Dqqss @ 0x1C002A6F8 (WPP_RECORDER_SF_Dqqss.c)
 */

char __fastcall ACPIInternalInterruptPolarityCacheGetPolarity(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // di
  KIRQL v8; // bp
  _QWORD *DeviceExtensionNoLock; // rbx
  int v10; // r9d
  __int64 *i; // rax
  __int64 v12; // rax
  void *v13; // rdx
  void *v14; // rcx
  int v15; // edx
  int v16; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceExtensionNoLock = (_QWORD *)ACPIInternalFindDeviceExtensionNoLock(a1, RootDeviceExtension);
LABEL_4:
  if ( DeviceExtensionNoLock )
  {
    for ( i = (__int64 *)DeviceExtensionNoLock[83]; ; i = (__int64 *)*i )
    {
      if ( i == DeviceExtensionNoLock + 83 )
      {
        v12 = DeviceExtensionNoLock[1];
        if ( (v12 & 0x20) != 0 )
        {
          v13 = &unk_1C005B1F0;
          v14 = &unk_1C005B1F0;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v13 = (void *)DeviceExtensionNoLock[70];
            if ( (v12 & 0x400000000000LL) != 0 )
              v14 = (void *)DeviceExtensionNoLock[71];
          }
          WPP_RECORDER_SF_Dqqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v13,
            0,
            v10,
            v16,
            a2,
            (char)DeviceExtensionNoLock,
            (char)DeviceExtensionNoLock,
            (__int64)v13,
            (__int64)v14);
        }
        DeviceExtensionNoLock = (_QWORD *)DeviceExtensionNoLock[93];
        goto LABEL_4;
      }
      if ( a2 == *((_DWORD *)i + 4) )
        break;
    }
    v15 = *((_DWORD *)i + 5);
    if ( v15 != -1 )
    {
      *a3 = v15;
      v3 = 1;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  return v3;
}
