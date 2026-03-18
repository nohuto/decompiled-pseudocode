/*
 * XREFs of ACPIBusIrpQueryPower @ 0x1C00143D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDockIsDockDevice @ 0x1C00087E4 (ACPIDockIsDockDevice.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0021200 (ACPIDispatchPowerIrpSuccess.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIBusIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 DeviceExtension; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_15;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) == 0 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 712);
    if ( !ACPIDockIsDockDevice() )
    {
      switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
      {
        case 2u:
          v7 = 826951007LL;
          break;
        case 3u:
          v7 = 843728223LL;
          break;
        case 4u:
          v7 = 860505439LL;
          break;
        case 5u:
          v7 = 877282655LL;
          break;
        default:
          goto LABEL_4;
      }
      if ( !(unsigned __int8)AMLIIsNamedChildPresent(v6, v7) )
        goto LABEL_4;
    }
LABEL_15:
    ACPIDispatchPowerIrpSuccess(a1, a2);
    return 259LL;
  }
LABEL_4:
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
