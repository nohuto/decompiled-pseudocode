/*
 * XREFs of ACPIDockIrpSetSystemPower @ 0x1C00085E4
 * Callers:
 *     ACPIDockIrpSetPower @ 0x1C00085B0 (ACPIDockIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0008814 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C001BA88 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0021200 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIDockIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, PIRP *Irp)
{
  PIRP v2; // rbx
  __int64 DeviceExtension; // rax
  __int64 IrpCount; // rdx
  __int64 v7; // rdi
  __int64 v8; // rbp
  POWER_STATE v9; // r15d
  PIRP v10; // rcx
  __int64 v11; // r8
  void *v12; // rcx
  void *v13; // r10
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rdx
  void *v17; // rcx
  void *v18; // r8
  PIRP v19; // rax

  v2 = Irp[23];
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  IrpCount = v2->AssociatedIrp.IrpCount;
  v7 = DeviceExtension;
  v8 = *(_QWORD *)(DeviceExtension + 184);
  v9.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * IrpCount + 460);
  *(_DWORD *)(v8 + 500) = IrpCount;
  if ( LODWORD(v2->ThreadListEntry.Flink) == 7 )
  {
    v10 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v10->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 680));
    v11 = *(_QWORD *)(DeviceExtension + 8);
    v12 = &unk_1C005B1F0;
    v13 = &unk_1C005B1F0;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(void **)(DeviceExtension + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(void **)(DeviceExtension + 568);
    }
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      IrpCount,
      12,
      33,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)Irp,
      IrpCount - 1,
      DeviceExtension,
      (__int64)v12,
      (__int64)v13);
    LOBYTE(v14) = *(_DWORD *)(v7 + 192) == 4;
    result = ACPIDeviceIrpWarmEjectRequest(v8, Irp, &ACPIDeviceIrpCompleteRequest, v14);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( *(_DWORD *)(DeviceExtension + 336) == v9.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess(DeviceObject, Irp);
  }
  else
  {
    v16 = *(_QWORD *)(DeviceExtension + 8);
    v17 = &unk_1C005B1F0;
    v18 = &unk_1C005B1F0;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v17 = *(void **)(DeviceExtension + 560);
      if ( (v16 & 0x400000000000LL) != 0 )
        v18 = *(void **)(DeviceExtension + 568);
    }
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      12,
      34,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)Irp,
      LOBYTE(v9.SystemState) - 1,
      DeviceExtension,
      (__int64)v17,
      (__int64)v18);
    v19 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v19->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 680));
    PoRequestPowerIrp(DeviceObject, 2u, v9, ACPIBusIrpSetSystemPowerComplete, Irp, 0LL);
    return 259LL;
  }
  return result;
}
