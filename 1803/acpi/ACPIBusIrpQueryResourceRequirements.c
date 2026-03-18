/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1C0077CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C002A024 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C00371EC (ACPIRangeFilterPICInterrupt.c)
 *     ACPIRangeValidatePciResources @ 0x1C00374D0 (ACPIRangeValidatePciResources.c)
 *     ACPIInternalSetProximityDomain @ 0x1C007DC08 (ACPIInternalSetProximityDomain.c)
 *     ACPIInternalSetSpare @ 0x1C007DCB0 (ACPIInternalSetSpare.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0082F34 (PnpBiosGetDeviceResourceList.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  char v2; // si
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rdi
  const char *v7; // r14
  int DeviceResourceList; // ebx
  __int64 v9; // rcx
  char *IrpText; // rax
  const char *v11; // r8
  char v12; // r10
  const char *v13; // r11
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  _DWORD *v16; // rbp
  int v17; // eax
  __int64 v18; // rcx
  const char *v19; // r8
  const char *v20; // rdx
  __int64 v21; // rax
  _DWORD *v22; // r8
  unsigned int v23; // r9d
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 i; // rax
  _DWORD *v28; // rcx
  unsigned int j; // r9d
  unsigned int v30; // r8d
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  const char *v34; // rdx
  const char *v35; // rcx
  __int64 v36; // rax
  char *v37; // rax
  const char *v38; // r8
  __int64 v39; // rcx
  char *v40; // rax
  const char *v41; // r8
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  v7 = byte_1C005B1F0;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1LL, &P);
  IrpText = ACPIDebugGetIrpText(v9, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x31u,
    (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
    (char)a2,
    IrpText,
    DeviceResourceList,
    v12,
    v13,
    v11);
  if ( DeviceResourceList < 0 )
    goto LABEL_55;
  v14 = *(_QWORD *)(DeviceExtension + 8);
  v16 = P;
  if ( P )
  {
    if ( (v14 & 0x2000000) != 0 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, v15);
    }
    else if ( (v14 & 0x200000000LL) != 0 )
    {
      v17 = ACPIRangeFilterPICInterrupt((__int64)P);
      if ( v17 < 0 )
      {
        v18 = *(_QWORD *)(DeviceExtension + 8);
        v19 = byte_1C005B1F0;
        v20 = byte_1C005B1F0;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v19 = *(const char **)(DeviceExtension + 560);
          if ( (v18 & 0x400000000000LL) != 0 )
            v20 = *(const char **)(DeviceExtension + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x32u,
          (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
          (char)a2,
          v17,
          DeviceExtension,
          v19,
          v20);
        ExFreePoolWithTag(v16, 0);
        v16 = 0LL;
      }
    }
    v21 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v21 & 0x2000000000LL) != 0 )
    {
      if ( *(_BYTE *)(DeviceExtension + 184) )
      {
        v22 = v16 + 8;
        v23 = 0;
        if ( v16[7] )
        {
          do
          {
            v24 = (unsigned int)v22[1];
            v25 = (unsigned __int64)(v22 + 2);
            v26 = (unsigned __int64)&v22[8 * v24 + 2];
            if ( (unsigned __int64)(v22 + 2) < v26 )
            {
              do
              {
                if ( ((*(_BYTE *)(v25 + 1) - 3) & 0xFB) == 0 )
                {
                  for ( i = v25 + 32; i < v26 && *(_BYTE *)(i + 1) == 0x81; i += 32LL )
                  {
                    if ( *(_WORD *)(i + 4) == 1 )
                    {
                      *(_WORD *)(v25 + 4) |= 0x100u;
                      break;
                    }
                  }
                }
                v25 += 32LL;
              }
              while ( v25 < v26 );
              v24 = (unsigned int)v22[1];
            }
            v22 += 8 * v24 + 2;
            ++v23;
          }
          while ( v23 < v16[7] );
          v21 = *(_QWORD *)(DeviceExtension + 8);
        }
      }
    }
    if ( (v21 & 0x8000) != 0 )
    {
      v28 = v16 + 8;
      for ( j = 0; j < v16[7]; v28 += 8 * v30 + 2 )
      {
        v30 = v28[1];
        v31 = (unsigned __int64)(v28 + 2);
        v32 = (unsigned __int64)&v28[8 * v30 + 2];
        if ( (unsigned __int64)(v28 + 2) < v32 )
        {
          do
          {
            if ( *(_BYTE *)(v31 + 1) == 2 )
              *(_WORD *)(v31 + 4) |= 8u;
            v31 += 32LL;
          }
          while ( v31 < v32 );
          v30 = v28[1];
        }
        ++j;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v16);
    if ( DeviceResourceList >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)v16;
    }
    else
    {
      v33 = *(_QWORD *)(DeviceExtension + 8);
      v34 = byte_1C005B1F0;
      v35 = byte_1C005B1F0;
      if ( (v33 & 0x200000000000LL) != 0 )
      {
        v34 = *(const char **)(DeviceExtension + 560);
        if ( (v33 & 0x400000000000LL) != 0 )
          v35 = *(const char **)(DeviceExtension + 568);
      }
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x33u,
        (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
        (char)a2,
        DeviceResourceList,
        DeviceExtension,
        v34,
        v35);
      ExFreePoolWithTag(v16, 0);
    }
  }
  else if ( (v14 & 0x2000000) != 0 )
  {
    DeviceResourceList = -1073741823;
  }
  if ( DeviceResourceList < 0 )
  {
LABEL_55:
    if ( DeviceResourceList != -1073741670 )
    {
      v36 = *(_QWORD *)(DeviceExtension + 8);
      if ( (v36 & 0x2000000) != 0 )
      {
        if ( (v36 & 0x200000000000LL) != 0 )
          v7 = *(const char **)(DeviceExtension + 560);
        v37 = ACPIDebugGetIrpText(v14, MinorFunction);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x34u,
          (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
          (char)a2,
          v37,
          DeviceResourceList,
          DeviceExtension,
          v7,
          v38);
        KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
      }
    }
  }
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v2 = DeviceExtension;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(DeviceExtension + 560);
      v39 = 0x400000000000LL;
    }
  }
  v40 = ACPIDebugGetIrpText(v39, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x35u,
    (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
    (char)a2,
    v40,
    DeviceResourceList,
    v2,
    v7,
    v41);
  return (unsigned int)DeviceResourceList;
}
