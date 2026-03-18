/*
 * XREFs of ACPIBusIrpQueryPower @ 0x1C0045EA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A900 (AMLIIsNamedChildPresent.c)
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C004BE80 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIBusIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 DeviceExtension; // rax
  __int64 *v6; // rbp
  int v7; // edx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_15;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) == 0 )
  {
    v6 = *(__int64 **)(DeviceExtension + 712);
    if ( !ACPIDockIsDockDevice() )
    {
      switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
      {
        case 2u:
          v7 = 826951007;
          break;
        case 3u:
          v7 = 843728223;
          break;
        case 4u:
          v7 = 860505439;
          break;
        case 5u:
          v7 = 877282655;
          break;
        default:
          goto LABEL_4;
      }
      if ( !AMLIIsNamedChildPresent(v6, v7) )
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
