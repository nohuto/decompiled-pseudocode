/*
 * XREFs of ACPIBusIrpSurpriseRemoval @ 0x1C0046510
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C004E39C (ACPIFanStopDevice.c)
 *     ACPIInternalIsReportedMissing @ 0x1C0050340 (ACPIInternalIsReportedMissing.c)
 *     ACPIThermalStopZone @ 0x1C00585CC (ACPIThermalStopZone.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C00941E8 (IsPciBus.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009FB40 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  __int64 v10; // rsi
  bool v11; // bp
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  const char *v16; // rcx
  const char *v17; // rdx
  __int64 v18; // rax

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
        v8 = *(_QWORD *)(v5 + 744);
        if ( v8 )
        {
          v9 = *(struct _DEVICE_OBJECT **)(v8 + 736);
          if ( v9 )
            IoInvalidateDeviceRelations(v9, BusRelations);
        }
      }
      v10 = *(_QWORD *)(v5 + 952) & 0x8000LL;
      v11 = (*(_QWORD *)(v5 + 952) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v10 )
      {
        LOBYTE(v13) = v11;
        EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v13);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else if ( (*(_QWORD *)(v5 + 952) & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      v14 = *(_DWORD *)(v5 + 952);
      *(_DWORD *)(v5 + 320) = 5;
      if ( (*(_QWORD *)&v14 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
      LOBYTE(v12) = 1;
      ACPIInitStopDevice(v5, v12);
      ACPIBuildSurpriseRemovedExtension(v5);
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
      v15 = *(_QWORD *)(v5 + 8);
      v16 = byte_1C0066CD0;
      v17 = byte_1C0066CD0;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v16 = *(const char **)(v5 + 560);
        if ( (v15 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(v5 + 568);
      }
      v18 = MinorFunction;
      if ( MinorFunction >= 0x1Au )
        v18 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0x3Fu,
        (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
        (char)a2,
        ACPIDispatchPnpTableNames[v18],
        0,
        v5,
        v16,
        v17);
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else if ( (*(_QWORD *)(v5 + 952) & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      *(_DWORD *)(v5 + 320) = 0;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      LOBYTE(v7) = 1;
      ACPIInitStopDevice(v5, v7);
    }
    return 0LL;
  }
}
