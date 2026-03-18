/*
 * XREFs of ACPIBusIrpQueryId @ 0x1C0086AD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001AD8 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C0004ED8 (WPP_RECORDER_SF_qsdLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C00288EC (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C00596A4 (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008D524 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0093D74 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00940AC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00955FC (ACPIBusIrpQueryInstanceId.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C00A7848 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIBusIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // si
  int Status; // r15d
  _WORD *v6; // r14
  __int64 DeviceExtension; // rax
  unsigned int Length; // ebx
  const char *v9; // r12
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  char *v13; // rax
  const char *v14; // r8
  char *IrpText; // rax
  __int64 v17; // rdx
  const char *v18; // r8
  char v19; // r10
  const char *v20; // r11
  _QWORD v21[2]; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 MinorFunction; // [rsp+B8h] [rbp+48h]
  int v23; // [rsp+C0h] [rbp+50h] BYREF
  PVOID P; // [rsp+C8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Status = a2->IoStatus.Status;
  v21[0] = 0LL;
  v6 = 0LL;
  P = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1C0067B08;
  v10 = (_QWORD *)DeviceExtension;
  if ( Length )
  {
    switch ( Length )
    {
      case 1u:
        v11 = ACPIBusIrpQueryHardwareId(&P, v21, DeviceExtension, 0x400000000000LL);
        break;
      case 2u:
        v11 = ACPIBusIrpQueryCompatibleId(&P, v21, DeviceExtension, 0x400000000000LL);
        break;
      case 3u:
        v11 = ACPIBusIrpQueryInstanceId(&P, v21, DeviceExtension, 0x400000000000LL);
        break;
      default:
        IrpText = ACPIDebugGetIrpText(Length - 2, MinorFunction);
        WPP_RECORDER_SF_qsdqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v17,
          (__int64)v18,
          0x29u,
          (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
          (char)a2,
          IrpText,
          Length,
          v19,
          v20,
          v18);
        goto LABEL_8;
    }
  }
  else
  {
    v11 = ACPIBusIrpQueryDeviceId(&P, v21, DeviceExtension, 0x400000000000LL);
  }
  v6 = P;
  Status = v11;
LABEL_8:
  if ( (AcpiOverrideAttributes & 0x100000) != 0
    && Length - 1 <= 1
    && Status >= 0
    && v6
    && (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(Length, v6, &v23) >= 0
    && v23 == 2 )
  {
    ACPIInternalSetFlags(v10 + 119, 0x800000uLL);
  }
  if ( (AcpiOverrideAttributes & 0x200000) != 0 && Length - 1 <= 1 )
  {
    if ( Status < 0 )
      goto LABEL_16;
    if ( v6 && (int)ACPIEmQueryFailDeviceResetOnOpenHandles(Length, v6) >= 0 && v23 == 2 )
      ACPIInternalSetFlags(v10 + 119, 0x40000000uLL);
  }
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = (unsigned __int64)v6;
    goto LABEL_12;
  }
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
LABEL_12:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( v10 )
  {
    v12 = 0x200000000000LL;
    v3 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v10[70];
      v12 = 0x400000000000LL;
    }
  }
  v13 = ACPIDebugGetIrpText(v12, MinorFunction);
  WPP_RECORDER_SF_qsdLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    (__int64)v14,
    0x2Au,
    (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
    (char)a2,
    v13,
    Length,
    Status,
    v3,
    v9,
    v14);
  return (unsigned int)Status;
}
