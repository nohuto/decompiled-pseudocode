/*
 * XREFs of ACPIBusIrpQueryResources @ 0x1C00781C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInitDosDeviceName @ 0x1C0028768 (ACPIInitDosDeviceName.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C002A024 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C00371EC (ACPIRangeFilterPICInterrupt.c)
 *     ACPIRangeValidatePciResources @ 0x1C00374D0 (ACPIRangeValidatePciResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0082F34 (PnpBiosGetDeviceResourceList.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0083C28 (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall ACPIBusIrpQueryResources(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // si
  unsigned __int8 MinorFunction; // r13
  _QWORD *DeviceExtension; // rbx
  const char *v8; // r12
  int Status; // edi
  __int64 v10; // rax
  const char *v11; // rdx
  const char *v12; // rcx
  int DeviceResourceList; // eax
  unsigned __int64 v14; // r8
  _DWORD *v15; // r14
  __int64 v16; // rax
  _DWORD *v17; // rcx
  unsigned int i; // r9d
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  const char *v23; // rdx
  const char *v24; // rcx
  unsigned __int16 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  char *IrpText; // rax
  const char *v30; // r8
  __int64 *v32; // [rsp+60h] [rbp-20h] BYREF
  char v33[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v34; // [rsp+70h] [rbp-10h] BYREF
  int v35; // [rsp+78h] [rbp-8h]
  int v36; // [rsp+C8h] [rbp+48h] BYREF
  PVOID P; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v38; // [rsp+D8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v38 = 0LL;
  P = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  ACPIInitDosDeviceName((__int64)DeviceExtension);
  v8 = byte_1C005B1F0;
  Status = ACPIGet((__int64)DeviceExtension, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)v33, 0LL);
  if ( Status < 0 )
    goto LABEL_42;
  v10 = DeviceExtension[1];
  if ( (v10 & 0x40000000000000LL) == 0 )
  {
    v11 = byte_1C005B1F0;
    v12 = byte_1C005B1F0;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)DeviceExtension[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = (const char *)DeviceExtension[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x2Du,
      (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
      (char)a2,
      (char)DeviceExtension,
      v11,
      v12);
    Status = -1073741436;
    goto LABEL_43;
  }
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 0LL, &P);
  v15 = P;
  Status = DeviceResourceList;
  if ( P )
  {
    if ( (DeviceExtension[1] & 0x2000000) == 0 )
    {
      v34 = DeviceExtension[89];
      v35 = 8;
      v32 = &v34;
      if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_SWALLOW_OBJECT_CRS, &v32, 1LL, &v36) >= 0 && v36 == 2 )
      {
        ExFreePoolWithTag(v15, 0);
        v15 = 0LL;
      }
    }
    if ( v15 )
    {
      v16 = DeviceExtension[1];
      if ( (v16 & 0x2000000) != 0 )
      {
        ACPIRangeValidatePciResources((ULONG_PTR)DeviceExtension, (ULONG_PTR)v15, v14);
      }
      else if ( (v16 & 0x200000000LL) != 0 )
      {
        Status = ACPIRangeFilterPICInterrupt((__int64)v15);
        if ( Status < 0 )
        {
          v26 = DeviceExtension[1];
          v23 = byte_1C005B1F0;
          v24 = byte_1C005B1F0;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v23 = (const char *)DeviceExtension[70];
            if ( (v26 & 0x400000000000LL) != 0 )
              v24 = (const char *)DeviceExtension[71];
          }
          v25 = 46;
          goto LABEL_34;
        }
      }
      if ( (DeviceExtension[1] & 0x8000LL) != 0 )
      {
        v17 = v15 + 8;
        for ( i = 0; i < v15[7]; v17 += 8 * v19 + 2 )
        {
          v19 = v17[1];
          v20 = (unsigned __int64)(v17 + 2);
          v21 = (unsigned __int64)&v17[8 * v19 + 2];
          if ( (unsigned __int64)(v17 + 2) < v21 )
          {
            do
            {
              if ( *(_BYTE *)(v20 + 1) == 2 )
                *(_WORD *)(v20 + 4) |= 8u;
              v20 += 32LL;
            }
            while ( v20 < v21 );
            v19 = v17[1];
          }
          ++i;
        }
      }
      Status = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList((__int64)DeviceExtension, (__int64)v15);
      if ( Status >= 0 )
      {
        Status = PnpIoResourceListToCmResourceList(v15, &v38);
        goto LABEL_35;
      }
      v22 = DeviceExtension[1];
      v23 = byte_1C005B1F0;
      v24 = byte_1C005B1F0;
      if ( (v22 & 0x200000000000LL) != 0 )
      {
        v23 = (const char *)DeviceExtension[70];
        if ( (v22 & 0x400000000000LL) != 0 )
          v24 = (const char *)DeviceExtension[71];
      }
      v25 = 47;
LABEL_34:
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        v25,
        (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
        (char)a2,
        Status,
        (char)DeviceExtension,
        v23,
        v24);
LABEL_35:
      ExFreePoolWithTag(v15, 0);
      goto LABEL_41;
    }
  }
  if ( Status < 0 )
    goto LABEL_42;
  if ( (DeviceExtension[1] & 0x2000000) == 0 )
  {
    Status = a2->IoStatus.Status;
LABEL_41:
    if ( Status >= 0 )
      goto LABEL_45;
LABEL_42:
    if ( Status == -1073741670 )
      goto LABEL_45;
    goto LABEL_43;
  }
  Status = -1073741823;
LABEL_43:
  if ( (DeviceExtension[1] & 0x2000000) != 0 )
    KeBugCheckEx(0xA5u, 2uLL, (ULONG_PTR)DeviceExtension, 0LL, (ULONG_PTR)a2);
LABEL_45:
  a2->IoStatus.Status = Status;
  v27 = 0LL;
  if ( Status >= 0 )
    v27 = v38;
  a2->IoStatus.Information = v27;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v28 = 0x200000000000LL;
    v3 = (char)DeviceExtension;
    if ( (DeviceExtension[1] & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)DeviceExtension[70];
      v28 = 0x400000000000LL;
    }
  }
  IrpText = ACPIDebugGetIrpText(v28, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x30u,
    (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
    (char)a2,
    IrpText,
    Status,
    v3,
    v8,
    v30);
  return (unsigned int)Status;
}
