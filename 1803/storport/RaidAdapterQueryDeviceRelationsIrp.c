/*
 * XREFs of RaidAdapterQueryDeviceRelationsIrp @ 0x1C001274C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007C70 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0007C9C (RaidAdapterAcquireStartIoLock.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C00104D0 (RaForwardIrp.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00128E0 (RaidpBuildAdapterBusRelations.c)
 *     RaidAdapterRescanBus @ 0x1C0012B98 (RaidAdapterRescanBus.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq @ 0x1C0023FBC (McTemplateK0pq.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     RaidNtStatusToStorStatus @ 0x1C00399A8 (RaidNtStatusToStorStatus.c)
 */

NTSTATUS __fastcall RaidAdapterQueryDeviceRelationsIrp(__int64 a1, IRP *a2)
{
  unsigned __int16 v3; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed int v6; // esi
  __int64 v7; // rcx
  _IO_STACK_LOCATION *v8; // rax
  int v9; // eax
  int v10; // esi
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  __int64 v14; // r13
  void (__fastcall *v15)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  int v16; // eax
  _BYTE v17[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-18h] BYREF

  v18 = 0;
  v3 = 0;
  v17[0] = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids, a1, a2);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v19 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( StorEtwLoggingEnabled )
    {
      v21[0] = 0LL;
      v21[1] = 0LL;
      IoGetActivityIdIrp(a2, v21);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        McTemplateK0pq(v12, &EventPnpRequestComplete, v21, a2, a2->IoStatus.Status);
    }
    return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0
      && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4344)) > 300000000 )
    {
      *(_BYTE *)(a1 + 106) = 1;
    }
    v6 = RaidAdapterRescanBus(a1, &v18, v17);
    if ( v6 >= 0 )
    {
      v6 = RaidpBuildAdapterBusRelations(a1, &v19);
      v18 = v6;
    }
    if ( v17[0] )
    {
      v13 = *(unsigned __int16 **)(a1 + 4936);
      *(_BYTE *)(a1 + 104) &= ~0x40u;
      *(_QWORD *)(a1 + 4936) = 0LL;
      if ( v13 )
        v3 = *v13;
      v14 = *(_QWORD *)(a1 + 4952);
      *(_QWORD *)(a1 + 4952) = 0LL;
      v15 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4944);
      *(_QWORD *)(a1 + 4944) = 0LL;
      *(_QWORD *)(a1 + 4924) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 4920), 0);
      if ( v15 )
      {
        RaidAdapterAcquireStartIoLock(a1, &v20);
        v16 = RaidNtStatusToStorStatus(v18);
        v15(*(_QWORD *)(a1 + 536) + 16LL, v14, v3, v13, v16);
        RaidAdapterReleaseStartIoLock(a1, &v20);
      }
    }
    a2->IoStatus.Information = v19;
    a2->IoStatus.Status = v6;
    if ( v6 < 0 )
    {
      v9 = RaidCompleteRequestEx(a2, 0, v6);
    }
    else
    {
      if ( StorEtwLoggingEnabled )
      {
        v22[0] = 0LL;
        v22[1] = 0LL;
        IoGetActivityIdIrp(a2, v22);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          McTemplateK0pq(v7, &EventPnpRequestComplete, v22, a2, v6);
      }
      v8 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
      *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
      v8[-1].FileObject = v8->FileObject;
      v8[-1].Control = 0;
      v9 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v10 = v9;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids, a1, a2, v9);
    }
    return v10;
  }
}
