/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1C006147C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000E228 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B554 (RaidFreeSrb.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001B568 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_DD @ 0x1C0031680 (WPP_SF_DD.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0039F48 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageDataSetManagementIoctl(__int64 a1, IRP *a2, __int64 Flags)
{
  __int64 v3; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _BYTE *Srb; // rbx
  __int64 v8; // rsi
  _IRP *MasterIrp; // rcx
  _DWORD *v10; // r15
  int v11; // r12d
  unsigned int Options; // eax
  __int64 IrpCount; // r9
  unsigned int v14; // eax
  int v15; // edi
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rdx
  void *ContiguousIoResources; // rax
  __int64 v21; // rdx
  int v22; // eax
  PVOID v23; // r14
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  _BYTE *v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-18h]
  int v29; // [rsp+80h] [rbp+48h] BYREF
  _DWORD *v30; // [rsp+88h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+58h]
  __int64 v32; // [rsp+98h] [rbp+60h]

  v3 = *(_QWORD *)(a1 + 24);
  v30 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Srb = 0LL;
  v29 = 0;
  v8 = 0LL;
  v32 = v3;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v10 = 0LL;
  v11 = 0;
  if ( !MasterIrp
    || (Options = CurrentStackLocation->Parameters.Create.Options, Options < 0x1C)
    || (IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
        Options < IrpCount + (unsigned __int64)*(&MasterIrp->Flags + 1))
    || (Flags = MasterIrp->Flags, Options < Flags + (unsigned __int64)HIDWORD(MasterIrp->MdlAddress))
    || Options < (unsigned __int64)(Flags + IrpCount + 28) )
  {
    v15 = -1073741811;
    v23 = 0LL;
    goto LABEL_33;
  }
  v14 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v14 == -2147483646 )
  {
    v11 = 1;
    v17 = RaUnitBuildDsmNotifyBufferForMiniport(a1, (__int64)a2, &v30, &v29);
LABEL_17:
    v10 = v30;
    v15 = v17;
    goto LABEL_11;
  }
  if ( v14 == 1 || v14 == -2147483636 )
  {
    if ( ExtendedDSMCommandsSupported )
    {
LABEL_41:
      v11 = 60;
      v17 = RaUnitBuildDsmGeneralBufferForMiniport(a1, (__int64)a2, &v30, &v29);
      goto LABEL_17;
    }
  }
  else if ( v14 > 0x8000000D && v14 <= 0x8000000F )
  {
    goto LABEL_41;
  }
  v15 = -1073741637;
LABEL_11:
  if ( v15 < 0 )
    goto LABEL_12;
  v18 = v32;
  v10[3] = v11;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v18 + 402), 0);
  if ( !Srb
    || (ContiguousIoResources = (void *)StorAllocateContiguousIoResources(
                                          ((*(_DWORD *)(v18 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                          v19,
                                          (_QWORD *)v18),
        (BaseAddress = ContiguousIoResources) == 0LL) )
  {
    v15 = -1073741670;
    goto LABEL_12;
  }
  v8 = (__int64)ContiguousIoResources + 16;
  RaidZeroXrb((__int64)ContiguousIoResources + 16, v21, 0, 0LL);
  v22 = v29;
  *(_QWORD *)(v8 + 176) = a2;
  *(_QWORD *)(v8 + 184) = v10;
  *(_QWORD *)(v8 + 168) = Srb;
  *(_QWORD *)(v8 + 224) = a1;
  if ( *(_BYTE *)(v18 + 402) == 1 )
  {
    v26 = *((unsigned int *)Srb + 13);
    *((_QWORD *)Srb + 12) = v8;
    v27 = &Srb[v26];
    *((_QWORD *)Srb + 10) = a2;
    *((_QWORD *)Srb + 8) = v10;
    *((_DWORD *)Srb + 15) = v22;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = v11;
    *((_WORD *)v27 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
    v27[8] = *(_BYTE *)(a1 + 88);
    v27[9] = *(_BYTE *)(a1 + 89);
    v27[10] = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_DWORD *)Srb + 4) = v22;
    *(_WORD *)Srb = 88;
    *((_QWORD *)Srb + 6) = v8;
    Srb[2] = 2;
    *((_QWORD *)Srb + 3) = v10;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = v11;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    Srb[7] = *(_BYTE *)(a1 + 90);
  }
  v23 = BaseAddress;
  RaSrbSetMiniportContext(v18, (__int64)Srb, (__int64)BaseAddress + 1072);
  KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x28u,
      (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
      v8,
      Srb);
  }
  if ( *(_BYTE *)(v18 + 4450) )
    v25 = RaidAdapterRaiseIrqlAndExecuteXrb(v18, v8);
  else
    v25 = RaidAdapterExecuteXrb(v18, (_QWORD *)v8, v24);
  v15 = v25;
  if ( v25 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
    if ( ExtendedDSMCommandsSupported )
      v15 = v10[5];
    if ( v15 >= 0 )
      v15 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    LODWORD(v28) = (unsigned __int8)Srb[3];
    WPP_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x29u,
      (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
      v15,
      v28);
  }
LABEL_33:
  if ( v23 )
  {
    RaidXrbDeallocateResources(v8, 0, Flags);
    MmFreeContiguousMemory(v23);
  }
LABEL_12:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v32 + 402) == 1 )
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
  return RaidCompleteRequestEx(a2, 0, v15);
}
