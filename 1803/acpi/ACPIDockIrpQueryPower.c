/*
 * XREFs of ACPIDockIrpQueryPower @ 0x1C0008210
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0021200 (ACPIDispatchPowerIrpSuccess.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIDockIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  void *v8; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v11; // rdx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v5 = DeviceExtension[23];
  if ( !v5 )
  {
    v6 = DeviceExtension[1];
    v7 = &unk_1C005B1F0;
    v8 = &unk_1C005B1F0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)DeviceExtension[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (void *)DeviceExtension[71];
    }
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      25,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      (char)DeviceExtension,
      (__int64)v7,
      (__int64)v8);
    goto LABEL_6;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options && CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    switch ( (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF )
    {
      case 2u:
        v11 = 826951007LL;
        break;
      case 3u:
        v11 = 843728223LL;
        break;
      case 4u:
        v11 = 860505439LL;
        break;
      case 5u:
        v11 = 877282655LL;
        break;
      default:
        goto LABEL_6;
    }
    if ( !(unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v5 + 712), v11) )
    {
      a2->IoStatus.Status = -1073741823;
      IofCompleteRequest(a2, 0);
      return 259LL;
    }
  }
LABEL_6:
  ACPIDispatchPowerIrpSuccess(a1, a2);
  return 259LL;
}
