/*
 * XREFs of ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C004E00C (ACPIFanStopDevice.c)
 *     ACPIInternalIsReportedMissing @ 0x1C004FC94 (ACPIInternalIsReportedMissing.c)
 *     ACPIThermalStopZone @ 0x1C0059000 (ACPIThermalStopZone.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C0085008 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C0097174 (IsPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  ULONG_PTR v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  __int64 v11; // rsi
  bool v12; // bp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  const char *v18; // rcx
  const char *v19; // rdx
  __int64 v20; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 320) == 4 )
  {
    a2->IoStatus.Status = -1073741810;
    IofCompleteRequest(a2, 0);
    return 3221225486LL;
  }
  else
  {
    if ( (unsigned __int8)ACPIInternalIsReportedMissing(DeviceExtension) )
    {
      if ( (*(_DWORD *)(v5 + 952) & 0x20000000) != 0 )
      {
        v9 = *(_QWORD *)(v5 + 744);
        if ( v9 )
        {
          v10 = *(struct _DEVICE_OBJECT **)(v9 + 736);
          if ( v10 )
            IoInvalidateDeviceRelations(v10, BusRelations);
        }
      }
      v11 = *(_QWORD *)(v5 + 952) & 0x8000LL;
      v12 = (*(_QWORD *)(v5 + 952) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v11 )
      {
        LOBYTE(v14) = v12;
        EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v14);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v15 = *(_QWORD *)(v5 + 952);
        if ( (v15 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v15 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      v16 = *(_DWORD *)(v5 + 952);
      *(_DWORD *)(v5 + 320) = 5;
      if ( (*(_QWORD *)&v16 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
      LOBYTE(v13) = 1;
      ACPIInitStopDevice(v5, v13);
      ACPIBuildSurpriseRemovedExtension(v5);
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
      v17 = *(_QWORD *)(v5 + 8);
      v18 = (const char *)&unk_1C0067B08;
      v19 = (const char *)&unk_1C0067B08;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v18 = *(const char **)(v5 + 560);
        if ( (v17 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(v5 + 568);
      }
      v20 = MinorFunction;
      if ( MinorFunction >= 0x1Au )
        v20 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0x3Fu,
        (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
        (char)a2,
        ACPIDispatchPnpTableNames[v20],
        0,
        v5,
        v18,
        v19);
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 952);
        if ( (v7 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v7 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      *(_DWORD *)(v5 + 320) = 0;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      LOBYTE(v8) = 1;
      ACPIInitStopDevice(v5, v8);
    }
    return 0LL;
  }
}
