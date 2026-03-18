/*
 * XREFs of ACPIBusIrpSetSystemPower @ 0x1C00462EC
 * Callers:
 *     ACPIBusIrpSetPower @ 0x1C00292A0 (ACPIBusIrpSetPower.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C0047830 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000DB90 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0049594 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C004BE80 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIBusIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, PIRP *Irp, __int64 a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  POWER_STATE v10; // r14d
  PIRP v11; // rax
  __int64 v12; // rdx
  const char *v13; // rcx
  const char *v14; // r10
  __int64 result; // rax
  const char *v16; // rcx
  const char *v17; // r8
  PIRP v18; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v7 = *(int *)(a3 + 24);
  v8 = DeviceExtension;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  v10.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * v7 + 460);
  if ( (v9 & 0x2000000) != 0 && (_DWORD)v7 == 1 )
    *(_DWORD *)(DeviceExtension + 244) = *(_WORD *)(a3 + 10) & 0xF;
  if ( *(_DWORD *)(a3 + 32) == 7 )
  {
    v11 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v11->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 680));
    v12 = *(_QWORD *)(v8 + 8);
    v13 = byte_1C0066CD0;
    v14 = byte_1C0066CD0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(v8 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(v8 + 568);
    }
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      0xCu,
      0x39u,
      (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
      (char)Irp,
      v7 - 1,
      v8,
      v13,
      v14);
    result = ACPIDeviceIrpWarmEjectRequest(v8, Irp, ACPIDeviceIrpCompleteRequest, 0LL);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( (v9 & 0x20000) == 0
         || (*(_DWORD *)(DeviceExtension + 952) & 0x400LL) != 0
         || *(_DWORD *)(DeviceExtension + 336) == v10.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess(DeviceObject, Irp);
  }
  else
  {
    v16 = byte_1C0066CD0;
    v17 = byte_1C0066CD0;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v16 = *(const char **)(DeviceExtension + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v17 = *(const char **)(DeviceExtension + 568);
    }
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      0xAu,
      0x3Au,
      (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
      (char)Irp,
      LOBYTE(v10.SystemState) - 1,
      DeviceExtension,
      v16,
      v17);
    v18 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v18->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 680));
    PoRequestPowerIrp(DeviceObject, 2u, v10, (PREQUEST_POWER_COMPLETE)ACPIBusIrpSetSystemPowerComplete, Irp, 0LL);
    return 259LL;
  }
  return result;
}
