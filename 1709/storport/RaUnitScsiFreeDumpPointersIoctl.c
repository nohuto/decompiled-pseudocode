/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C001C838 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, IRP *a2)
{
  _DWORD *v4; // r14
  char *v5; // r12
  __int64 v6; // rsi
  _BYTE *Srb; // rbx
  _BYTE *v8; // r13
  __int64 v9; // rbp
  _IRP *MasterIrp; // rax
  __int64 v11; // rcx
  void (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // r8
  unsigned int v14; // edi
  _DWORD *Pool; // rax
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // zf
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  char v27; // [rsp+70h] [rbp+8h]
  __int64 p_Process; // [rsp+78h] [rbp+10h]
  _IRP *v29; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  Srb = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v27 = 0;
  if ( a2->RequestorMode )
  {
    v14 = -1073741790;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
  {
    v14 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v29 = MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 4 )
  {
    v14 = -1073741735;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
  p_Process = (__int64)&MasterIrp->MdlAddress->Process;
  if ( *(_BYTE *)(a1 + 1477) != 1 || !v9 )
    goto LABEL_5;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v4 = Pool;
  if ( !Pool )
  {
    v14 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
  memset(Pool, 0, 0x70uLL);
  *v4 = 7340288;
  v4[14] = v29->AssociatedIrp.IrpCount;
  v4[18] = *(_DWORD *)(p_Process + 4);
  v4[19] = *(_DWORD *)(p_Process + 8);
  v4[20] = *(_DWORD *)(p_Process + 24);
  v4[21] = *(_DWORD *)(p_Process + 28);
  v4[22] = *(_DWORD *)(p_Process + 48);
  v4[23] = *(_DWORD *)(p_Process + 52);
  *((_QWORD *)v4 + 12) = *(_QWORD *)(p_Process + 56);
  *((_BYTE *)v4 + 104) = *(_BYTE *)(p_Process + 72);
  *((_BYTE *)v4 + 105) = *(_BYTE *)(p_Process + 82);
  *((_BYTE *)v4 + 106) = *(_BYTE *)(p_Process + 89);
  *((_BYTE *)v4 + 107) = *(_BYTE *)(p_Process + 97);
  *((_QWORD *)v4 + 8) = *(_QWORD *)(p_Process + 64);
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x27u, *(_BYTE *)(p_Process + 98), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v9 + 444) + 7) & 0xFFFFFFF8) + 1072,
                              v17,
                              (_QWORD *)v9);
    v5 = (char *)ContiguousIoResources;
    if ( !ContiguousIoResources )
    {
      v14 = -1073741670;
LABEL_10:
      if ( Srb )
      {
        if ( v27 == 1 )
        {
          if ( !v8 )
            v8 = Srb;
          *((_QWORD *)v8 + 10) = 0LL;
          *((_QWORD *)v8 + 13) = 0LL;
        }
        else
        {
          *((_QWORD *)Srb + 6) = 0LL;
          *((_QWORD *)Srb + 7) = 0LL;
        }
        ExFreePoolWithTag(Srb, 0x72536152u);
      }
      goto LABEL_11;
    }
    v6 = ContiguousIoResources + 16;
    RaidZeroXrb(ContiguousIoResources + 16, v19, 0, 0LL);
    *(_QWORD *)(v6 + 176) = a2;
    *(_QWORD *)(v6 + 184) = v4;
    *(_QWORD *)(v6 + 168) = Srb;
    if ( *(_BYTE *)(p_Process + 98) == 1 )
    {
      *((_DWORD *)Srb + 6) = 256;
      v8 = Srb;
      v25 = *((_DWORD *)Srb + 6);
      *((_DWORD *)Srb + 5) = 39;
      *((_QWORD *)Srb + 8) = v4;
      *((_DWORD *)Srb + 15) = 112;
      v21 = *(_BYTE *)(v9 + 4450) == 0;
      *((_DWORD *)Srb + 10) = 10;
      if ( v21 )
        v25 = 128;
      *((_QWORD *)Srb + 10) = a2;
      v26 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 6) = v25;
      *((_QWORD *)Srb + 13) = v5 + 1072;
      *((_QWORD *)Srb + 12) = v6;
      Srb[v26 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v26 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v26 + 10] = *(_BYTE *)(a1 + 90);
      v27 = 1;
    }
    else
    {
      *((_DWORD *)Srb + 3) = 256;
      *(_WORD *)Srb = 88;
      v20 = *((_DWORD *)Srb + 3);
      Srb[2] = 39;
      *((_QWORD *)Srb + 3) = v4;
      *((_DWORD *)Srb + 4) = 112;
      v21 = *(_BYTE *)(v9 + 4450) == 0;
      *((_DWORD *)Srb + 5) = 10;
      if ( v21 )
        v20 = 128;
      *((_DWORD *)Srb + 3) = v20;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
      *((_QWORD *)Srb + 7) = v5 + 1072;
      *((_QWORD *)Srb + 6) = v6;
    }
    KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
    *(_QWORD *)(v6 + 656) = RaidXrbSignalCompletion;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 38LL, &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids, v6, Srb);
    }
    if ( *(_BYTE *)(v9 + 4450) )
      v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v9, v6);
    else
      v23 = RaidAdapterExecuteXrb(v9, (_QWORD *)v6, v22);
    v24 = (unsigned int)v23;
    if ( v23 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
      v24 = (unsigned int)RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        39LL,
        &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        v24,
        (unsigned __int8)Srb[3]);
    }
LABEL_5:
    v11 = *(_QWORD *)(a1 + 24);
    if ( *(_WORD *)(v11 + 5154) )
    {
      v12 = *(void (__fastcall **)(_QWORD))(v11 + 5176);
      if ( v12 )
        v12(*(_QWORD *)(v11 + 5160));
    }
    StorPortReleaseAdditionalCrashDumpArea(v11, p_Process);
    ExFreePoolWithTag(v29->MdlAddress, 0x44436152u);
    memset(v29, 0, 0x68uLL);
    a2->IoStatus.Information = 0LL;
    v14 = 0;
    if ( v5 )
    {
      RaidXrbDeallocateResources(v6, 0, v13);
      MmFreeContiguousMemory(v5);
    }
    goto LABEL_10;
  }
  v14 = -1073741670;
LABEL_11:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  return RaidCompleteRequestEx(a2, 0, v14);
}
