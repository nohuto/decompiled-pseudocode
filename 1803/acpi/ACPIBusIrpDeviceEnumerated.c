/*
 * XREFs of ACPIBusIrpDeviceEnumerated @ 0x1C0076550
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001340 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0071008 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0078CF4 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C007F52C (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008BEA0 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIBusIrpDeviceEnumerated(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  char v6; // di
  const char *v7; // r14
  ULONG_PTR v8; // rbx
  int v9; // esi
  __int64 v10; // rcx
  char *v11; // rax
  const char *v12; // r8
  char *IrpText; // rax
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  const char *v21; // r10
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  PVOID P; // [rsp+68h] [rbp-30h]

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v6 = 0;
  v7 = byte_1C005B1F0;
  v8 = DeviceExtension;
  if ( DeviceExtension )
  {
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
    if ( (*(_QWORD *)(v8 + 8) & 0x8000000000000LL) == 0 )
    {
      v22 = 0LL;
      P = 0LL;
      if ( (int)ACPIQueryDeviceBiosName(*(_QWORD *)(v8 + 720), &v22) >= 0 )
      {
        if ( P )
        {
          IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v8 + 736),
            &DEVPKEY_Device_BiosDeviceName,
            0,
            0,
            0x12u,
            (unsigned __int16)v22 + 2,
            P);
          ExFreePoolWithTag(P, 0x53706341u);
        }
      }
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 && (int)AcpiQueryPciDeviceChassisLabel(v8) < 0 )
    {
      IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), 0x19u);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Au,
        (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
        (char)Irp,
        IrpText,
        v16,
        v8,
        v17,
        v15);
    }
    if ( *(_QWORD *)(v8 + 744) == RootDeviceExtension )
    {
      v9 = ACPIQueryCacheCoherencyAttribute(v8);
      if ( v9 < 0 )
      {
        if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
          v18 = 0x400000000000LL;
        v19 = ACPIDebugGetIrpText(v18, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Bu,
          (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
          (char)Irp,
          v19,
          v9,
          v8,
          v21,
          v20);
      }
    }
    else
    {
      v9 = 0;
    }
    if ( (*(_BYTE *)(v8 + 8) & 0x50) != 0 )
      return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    v9 = -1073741823;
  }
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  if ( v8 )
  {
    v6 = v8;
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v8 + 560);
      v10 = 0x400000000000LL;
    }
  }
  v11 = ACPIDebugGetIrpText(v10, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Cu,
    (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
    (char)Irp,
    v11,
    v9,
    v6,
    v7,
    v12);
  return (unsigned int)v9;
}
