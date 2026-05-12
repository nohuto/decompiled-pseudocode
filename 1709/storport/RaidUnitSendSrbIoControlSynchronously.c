/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C001A9FC
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001A84C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003CC68 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003D218 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003D360 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003D528 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C003D6B8 (RaUnitStreamsIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0001FDC (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C000C860 (PortSrbTranslateSrbToNtStatus.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001AB60 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001AB98 (StorBuildSynchronousScsiRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidUnitSendSrbIoControlSynchronously(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        __int64 a6,
        int a7)
{
  __int64 v7; // r14
  _BYTE *v12; // rbp
  _BYTE *Srb; // rbx
  __int64 v14; // r8
  int v15; // eax
  IRP *v16; // rax
  IRP *v17; // rsi
  int Status; // edi
  __int64 v20; // rcx
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v21[0] = 0LL;
  v21[1] = 0LL;
  v12 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v7 + 402), 0);
  if ( Srb )
  {
    v15 = a7 | 0x102;
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    if ( *(_BYTE *)(v7 + 402) == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v12 = Srb;
      v20 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = v15;
      *((_QWORD *)Srb + 8) = a3;
      *((_DWORD *)Srb + 15) = a4;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1032);
      Srb[v20 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v20 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v20 + 10] = *(_BYTE *)(a1 + 90);
    }
    else
    {
      Srb[2] = 2;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 3) = v15;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a3;
      *((_DWORD *)Srb + 4) = a4;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1032);
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
    }
    v16 = (IRP *)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, _QWORD *))StorBuildSynchronousScsiRequest)(
                   *(_QWORD *)(a1 + 8),
                   Srb,
                   v14,
                   v21);
    v17 = v16;
    if ( v16 )
    {
      if ( *(_BYTE *)(v7 + 402) == 1 )
      {
        v12 = Srb;
        *((_QWORD *)Srb + 10) = v16;
      }
      else
      {
        *((_QWORD *)Srb + 6) = v16;
      }
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v16);
      if ( Status >= 0 )
      {
        Status = v17->IoStatus.Status;
        if ( Status >= 0 )
        {
          if ( a5 )
            Status = a5(*(unsigned int *)(a3 + 20));
          if ( Status >= 0 )
            Status = PortSrbTranslateSrbToNtStatus(Srb[3]);
        }
      }
      StorFreeSynchronousScsiRequest(v17);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v7 + 402) == 1 )
    {
      if ( !v12 )
        v12 = Srb;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
