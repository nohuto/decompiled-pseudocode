/*
 * XREFs of ACPIBusIrpQueryResources @ 0x1C0094290
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIInitDosDeviceName @ 0x1C00271F8 (ACPIInitDosDeviceName.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C00272D4 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C0027454 (ACPIRangeFilterPICInterrupt.c)
 *     ACPIRangeValidatePciResources @ 0x1C00274C8 (ACPIRangeValidatePciResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008C54C (PnpBiosGetDeviceResourceList.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C00945A4 (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall ACPIBusIrpQueryResources(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // si
  unsigned __int8 MinorFunction; // r13
  __int64 *DeviceExtension; // rbx
  const char *v8; // r12
  int Status; // edi
  __int64 v10; // rax
  int DeviceResourceList; // eax
  unsigned __int64 v12; // r8
  int v13; // r9d
  _DWORD *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char *IrpText; // rax
  const char *v19; // r8
  _DWORD *v21; // rdx
  unsigned int i; // r8d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  const char *v25; // rdx
  const char *v26; // rcx
  __int64 v27; // rax
  const char *v28; // rdx
  const char *v29; // rcx
  unsigned __int16 v30; // r9
  __int64 v31; // rax
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
  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(a1);
  ACPIInitDosDeviceName((__int64)DeviceExtension);
  v8 = byte_1C0067B08;
  Status = ACPIGet(DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)v33, 0LL);
  if ( Status < 0 )
    goto LABEL_25;
  v10 = DeviceExtension[1];
  if ( (v10 & 0x40000000000000LL) != 0 )
  {
    DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 0, &P);
    v14 = P;
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
          ExFreePoolWithTag(v14, 0);
          v14 = 0LL;
        }
      }
      if ( v14 )
      {
        v15 = DeviceExtension[1];
        if ( (v15 & 0x2000000) != 0 )
        {
          ACPIRangeValidatePciResources((ULONG_PTR)DeviceExtension, (ULONG_PTR)v14, v12, v13);
        }
        else if ( (v15 & 0x200000000LL) != 0 )
        {
          Status = ACPIRangeFilterPICInterrupt((__int64)v14);
          if ( Status < 0 )
          {
            v27 = DeviceExtension[1];
            v28 = byte_1C0067B08;
            v29 = byte_1C0067B08;
            if ( (v27 & 0x200000000000LL) != 0 )
            {
              v28 = (const char *)DeviceExtension[70];
              if ( (v27 & 0x400000000000LL) != 0 )
                v29 = (const char *)DeviceExtension[71];
            }
            v30 = 46;
            goto LABEL_48;
          }
        }
        if ( (DeviceExtension[1] & 0x8000) != 0 )
        {
          v21 = v14 + 8;
          for ( i = 0; i < v14[7]; v21 += 8 * (unsigned int)v21[1] + 2 )
          {
            v23 = (unsigned __int64)(v21 + 2);
            v24 = (unsigned __int64)&v21[8 * v21[1] + 2];
            while ( v23 < v24 )
            {
              if ( *(_BYTE *)(v23 + 1) == 2 )
                *(_WORD *)(v23 + 4) |= 8u;
              v23 += 32LL;
            }
            ++i;
          }
        }
        Status = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList((__int64)DeviceExtension, (__int64)v14);
        if ( Status >= 0 )
        {
          Status = PnpIoResourceListToCmResourceList(v14, &v38);
LABEL_14:
          ExFreePoolWithTag(v14, 0);
          goto LABEL_15;
        }
        v31 = DeviceExtension[1];
        v28 = byte_1C0067B08;
        v29 = byte_1C0067B08;
        if ( (v31 & 0x200000000000LL) != 0 )
        {
          v28 = (const char *)DeviceExtension[70];
          if ( (v31 & 0x400000000000LL) != 0 )
            v29 = (const char *)DeviceExtension[71];
        }
        v30 = 47;
LABEL_48:
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          v30,
          (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
          (char)a2,
          Status,
          (char)DeviceExtension,
          v28,
          v29);
        goto LABEL_14;
      }
    }
    if ( Status < 0 )
      goto LABEL_25;
    if ( (DeviceExtension[1] & 0x2000000) == 0 )
    {
      Status = a2->IoStatus.Status;
LABEL_15:
      if ( Status >= 0 )
        goto LABEL_16;
LABEL_25:
      if ( Status == -1073741670 )
        goto LABEL_16;
      goto LABEL_26;
    }
    Status = -1073741823;
  }
  else
  {
    v25 = byte_1C0067B08;
    v26 = byte_1C0067B08;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v25 = (const char *)DeviceExtension[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v26 = (const char *)DeviceExtension[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x2Du,
      (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
      (char)a2,
      (char)DeviceExtension,
      v25,
      v26);
    Status = -1073741436;
  }
LABEL_26:
  if ( (DeviceExtension[1] & 0x2000000) != 0 )
    KeBugCheckEx(0xA5u, 2uLL, (ULONG_PTR)DeviceExtension, 0LL, (ULONG_PTR)a2);
LABEL_16:
  a2->IoStatus.Status = Status;
  v16 = 0LL;
  if ( Status >= 0 )
    v16 = v38;
  a2->IoStatus.Information = v16;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v17 = 0x200000000000LL;
    v3 = (char)DeviceExtension;
    if ( (DeviceExtension[1] & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)DeviceExtension[70];
      v17 = 0x400000000000LL;
    }
  }
  IrpText = ACPIDebugGetIrpText(v17, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x30u,
    (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
    (char)a2,
    IrpText,
    Status,
    v3,
    v8,
    v19);
  return (unsigned int)Status;
}
