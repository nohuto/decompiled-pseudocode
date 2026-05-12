/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1C0063844
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000E488 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B194 (RaidFreeSrb.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001B1B0 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C003BC98 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageDataSetManagementIoctl(__int64 a1, IRP *a2, __int64 Flags)
{
  __int64 v3; // rax
  _IRP *MasterIrp; // rcx
  _BYTE *Srb; // rbx
  __int64 v8; // rsi
  _DWORD *v9; // r15
  int v10; // r12d
  unsigned __int64 Options; // rdx
  __int64 IrpCount; // r9
  unsigned int v13; // eax
  int v14; // edi
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdx
  void *ContiguousIoResources; // rax
  __int64 v20; // rdx
  int v21; // eax
  PVOID v22; // r14
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  _BYTE *v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-18h]
  int v28; // [rsp+80h] [rbp+48h] BYREF
  _DWORD *v29; // [rsp+88h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+58h]
  __int64 v31; // [rsp+98h] [rbp+60h]

  v3 = *(_QWORD *)(a1 + 24);
  v29 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v28 = 0;
  Srb = 0LL;
  v31 = v3;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( !MasterIrp
    || (Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options, (unsigned int)Options < 0x1C)
    || (IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
        Options < IrpCount + (unsigned __int64)*(&MasterIrp->Flags + 1))
    || (Flags = MasterIrp->Flags, Options < Flags + (unsigned __int64)HIDWORD(MasterIrp->MdlAddress))
    || Options < Flags + IrpCount + 28 )
  {
    v14 = -1073741811;
    v22 = 0LL;
    goto LABEL_33;
  }
  v13 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v13 == -2147483646 )
  {
    v10 = 1;
    v16 = RaUnitBuildDsmNotifyBufferForMiniport(a1, (__int64)a2, &v29, &v28);
LABEL_17:
    v9 = v29;
    v14 = v16;
    goto LABEL_11;
  }
  if ( v13 == 1 || v13 == -2147483636 )
  {
    if ( ExtendedDSMCommandsSupported )
    {
LABEL_41:
      v10 = 60;
      v16 = RaUnitBuildDsmGeneralBufferForMiniport(a1, (__int64)a2, &v29, &v28);
      goto LABEL_17;
    }
  }
  else if ( v13 > 0x8000000D && v13 <= 0x8000000F )
  {
    goto LABEL_41;
  }
  v14 = -1073741637;
LABEL_11:
  if ( v14 < 0 )
    goto LABEL_12;
  v17 = v31;
  v9[3] = v10;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v17 + 402), 0);
  if ( !Srb
    || (ContiguousIoResources = (void *)StorAllocateContiguousIoResources(
                                          ((*(_DWORD *)(v17 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                          v18,
                                          (_QWORD *)v17),
        (BaseAddress = ContiguousIoResources) == 0LL) )
  {
    v14 = -1073741670;
    goto LABEL_12;
  }
  v8 = (__int64)ContiguousIoResources + 16;
  RaidZeroXrb((__int64)ContiguousIoResources + 16, v20, 0, 0LL);
  v21 = v28;
  *(_QWORD *)(v8 + 176) = a2;
  *(_QWORD *)(v8 + 184) = v9;
  *(_QWORD *)(v8 + 168) = Srb;
  *(_QWORD *)(v8 + 224) = a1;
  if ( *(_BYTE *)(v17 + 402) == 1 )
  {
    v25 = *((unsigned int *)Srb + 13);
    *((_QWORD *)Srb + 12) = v8;
    v26 = &Srb[v25];
    *((_QWORD *)Srb + 10) = a2;
    *((_QWORD *)Srb + 8) = v9;
    *((_DWORD *)Srb + 15) = v21;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = v10;
    *((_WORD *)v26 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
    v26[8] = *(_BYTE *)(a1 + 88);
    v26[9] = *(_BYTE *)(a1 + 89);
    v26[10] = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_DWORD *)Srb + 4) = v21;
    *(_WORD *)Srb = 88;
    *((_QWORD *)Srb + 6) = v8;
    Srb[2] = 2;
    *((_QWORD *)Srb + 3) = v9;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = v10;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    Srb[7] = *(_BYTE *)(a1 + 90);
  }
  v22 = BaseAddress;
  RaSrbSetMiniportContext(v17, (__int64)Srb, (__int64)BaseAddress + 1072);
  KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x28u,
      (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      v8,
      Srb);
  }
  if ( *(_BYTE *)(v17 + 4450) )
    v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v17, v8);
  else
    v24 = RaidAdapterExecuteXrb(v17, (_QWORD *)v8, v23);
  v14 = v24;
  if ( v24 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
    if ( ExtendedDSMCommandsSupported )
      v14 = v9[5];
    if ( v14 >= 0 )
      v14 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    LODWORD(v27) = (unsigned __int8)Srb[3];
    WPP_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x29u,
      (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      v14,
      v27);
  }
LABEL_33:
  if ( v22 )
  {
    RaidXrbDeallocateResources(v8, 0, Flags);
    MmFreeContiguousMemory(v22);
  }
LABEL_12:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v31 + 402) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v14);
}
