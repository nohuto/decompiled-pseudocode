/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C0015834
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C0015550 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0015698 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C003B288 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003B844 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003B98C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BB54 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0002C50 (RaSendIrpSynchronous.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00041A0 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0015A04 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0015A3C (StorBuildSynchronousScsiRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
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
  _BYTE *Srb; // rax
  __int64 v14; // r8
  _BYTE *v15; // rbx
  int v16; // edx
  IRP *v17; // rax
  IRP *v18; // rsi
  int Status; // edi
  __int64 v21; // rcx
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v22[0] = 0LL;
  v22[1] = 0LL;
  v12 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v7 + 402), 0);
  v15 = Srb;
  if ( Srb )
  {
    v16 = a7 | 0x102;
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    if ( *(_BYTE *)(v7 + 402) == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v12 = Srb;
      v21 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = v16;
      *((_QWORD *)Srb + 8) = a3;
      *((_DWORD *)Srb + 15) = a4;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1032);
      Srb[v21 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v21 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v21 + 10] = *(_BYTE *)(a1 + 90);
    }
    else
    {
      Srb[2] = 2;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 3) = v16;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a3;
      *((_DWORD *)Srb + 4) = a4;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1032);
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
    }
    v17 = (IRP *)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, _QWORD *))StorBuildSynchronousScsiRequest)(
                   *(_QWORD *)(a1 + 8),
                   Srb,
                   v14,
                   v22);
    v18 = v17;
    if ( v17 )
    {
      if ( *(_BYTE *)(v7 + 402) == 1 )
      {
        v12 = v15;
        *((_QWORD *)v15 + 10) = v17;
      }
      else
      {
        *((_QWORD *)v15 + 6) = v17;
      }
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v17);
      if ( Status >= 0 )
      {
        Status = v18->IoStatus.Status;
        if ( Status >= 0 )
        {
          if ( a5 )
            Status = a5(*(unsigned int *)(a3 + 20));
          if ( Status >= 0 )
            Status = PortSrbTranslateSrbToNtStatus(v15[3]);
        }
      }
      StorFreeSynchronousScsiRequest(v18);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v7 + 402) == 1 )
    {
      if ( !v12 )
        v12 = v15;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v15 + 6) = 0LL;
      *((_QWORD *)v15 + 7) = 0LL;
    }
    ExFreePoolWithTag(v15, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
