/*
 * XREFs of RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18
 * Callers:
 *     RaidAdapterRpmbRequest @ 0x1C002E458 (RaidAdapterRpmbRequest.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaidBuildMdlForXrb @ 0x1C0006174 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqq @ 0x1C0030CC8 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidAdapterSendRPMBCommandSynchronously(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  ULONG v7; // r13d
  unsigned int v8; // ebx
  _BYTE *v9; // r15
  __int64 v10; // rbp
  void *v11; // r12
  _BYTE *Srb; // rdi
  __int64 v13; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r14d
  char v18; // r14
  int v19; // ebx
  int v20; // ebx
  PVOID Pool; // rax
  void *v22; // r13
  _BYTE *v23; // r14
  IRP *v24; // rbx
  $232F7186587B4AFBA3B8AD48EAFB0E82 *p_AssociatedIrp; // rcx
  __int64 v26; // rax
  __int16 v27; // ax
  __int64 v28; // r8
  int v29; // eax
  PVOID BaseAddress; // [rsp+80h] [rbp+8h]

  v7 = a5 << 9;
  v8 = (*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(a1 + 402), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v8 + 1072, v13, (_QWORD *)a1);
  BaseAddress = (PVOID)ContiguousIoResources;
  if ( !Srb || !ContiguousIoResources )
  {
    v22 = (void *)ContiguousIoResources;
    goto LABEL_42;
  }
  v10 = ContiguousIoResources + 16;
  RaidZeroXrb(ContiguousIoResources + 16, v15, 0, 0LL);
  v17 = RaidBuildMdlForXrb(v10, a4, v7);
  if ( v17 < 0 )
  {
    v22 = BaseAddress;
LABEL_43:
    v24 = a2;
    goto LABEL_44;
  }
  v18 = a3;
  if ( a3 == -94 )
  {
    v19 = 64;
  }
  else
  {
    v19 = 0;
    if ( a3 == -75 )
      v19 = 128;
  }
  v20 = v19 | 0x102;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
  v11 = Pool;
  if ( !Pool )
  {
    v22 = BaseAddress;
LABEL_42:
    v17 = -1073741801;
    goto LABEL_43;
  }
  memset(Pool, 0, 0xFFuLL);
  if ( *(_BYTE *)(a1 + 402) == 1 )
  {
    v9 = Srb;
    v23 = &Srb[*((unsigned int *)Srb + 13)];
    *((_DWORD *)Srb + 5) = 0;
    *((_DWORD *)Srb + 8) = -1;
    *((_DWORD *)Srb + 6) = v20;
    *((_QWORD *)Srb + 8) = a4;
    *((_DWORD *)Srb + 15) = v7;
    *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
    *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
    *((_QWORD *)Srb + 10) = a2;
    *((_QWORD *)Srb + 12) = v10;
    if ( *(_WORD *)(a1 + 5656) == 1 )
    {
      v23[8] = *(_BYTE *)(a1 + 5664);
      v23[9] = *(_BYTE *)(a1 + 5665);
      v23[10] = *(_BYTE *)(a1 + 5666);
    }
    v18 = a3;
    *(_QWORD *)(v10 + 168) = Srb;
    *(_QWORD *)(v10 + 184) = *((_QWORD *)Srb + 8);
    *(_QWORD *)(v10 + 176) = *((_QWORD *)Srb + 12);
    v24 = (IRP *)&Srb[*((unsigned int *)Srb + 30)];
    *(_DWORD *)&v24->Type = 64;
    p_AssociatedIrp = &v24->AssociatedIrp;
    *(_DWORD *)(&v24->Size + 1) = 32;
    *(_WORD *)((char *)&v24->MdlAddress + 1) = 3327;
    *(_QWORD *)&v24->Flags = v11;
  }
  else
  {
    Srb[2] = 0;
    *(_WORD *)Srb = 88;
    *((_QWORD *)Srb + 3) = a4;
    *((_DWORD *)Srb + 3) = v20;
    Srb[8] = -1;
    *((_DWORD *)Srb + 4) = v7;
    *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4204);
    Srb[11] = -1;
    *((_QWORD *)Srb + 4) = v11;
    *((_QWORD *)Srb + 6) = v10;
    if ( *(_WORD *)(a1 + 5656) == 1 )
    {
      Srb[5] = *(_BYTE *)(a1 + 5664);
      Srb[6] = *(_BYTE *)(a1 + 5665);
      Srb[7] = *(_BYTE *)(a1 + 5666);
    }
    p_AssociatedIrp = ($232F7186587B4AFBA3B8AD48EAFB0E82 *)(Srb + 72);
    *(_QWORD *)(v10 + 168) = Srb;
    v26 = *((_QWORD *)Srb + 3);
    *(_QWORD *)(v10 + 176) = a2;
    v24 = a2;
    *(_QWORD *)(v10 + 184) = v26;
    Srb[10] = 12;
  }
  if ( Srb[2] == 40 )
    *((_WORD *)Srb + 19) = 32;
  else
    Srb[9] = 32;
  LOBYTE(p_AssociatedIrp->MasterIrp) = v18;
  BYTE1(p_AssociatedIrp->MasterIrp) = *(_BYTE *)(a1 + 5648);
  v27 = *(_WORD *)(a1 + 5650);
  *(_DWORD *)((char *)&p_AssociatedIrp->SystemBuffer + 6) = _byteswap_ulong(v7);
  v22 = BaseAddress;
  HIWORD(p_AssociatedIrp->IrpCount) = __ROR2__(v27, 8);
  RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)BaseAddress + 1072);
  KeInitializeEvent((PRKEVENT)(v10 + 664), NotificationEvent, 0);
  *(_QWORD *)(v10 + 656) = RaidXrbSignalCompletion;
  if ( *(_QWORD *)(a1 + 5088) )
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 402) == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        68LL,
        &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
        v10,
        v9,
        *((_QWORD *)v9 + 13));
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      69LL,
      &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
      v10,
      Srb,
      *((_QWORD *)Srb + 7));
  }
  if ( *(_BYTE *)(a1 + 4450) )
    v29 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v10);
  else
    v29 = RaidAdapterExecuteXrb(a1, (_QWORD *)v10, v28);
  v17 = v29;
  if ( v29 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 664), Executive, 0, 0, 0LL);
    v17 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( (*(_BYTE *)(v10 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v10 + 748));
    *(_BYTE *)(v10 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 5088) )
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
LABEL_44:
  if ( v22 )
  {
    RaidXrbDeallocateResources(v10, 0, v16);
    MmFreeContiguousMemory(v22);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4E536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      if ( !v9 )
        v9 = Srb;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
      if ( v24 )
        *(_QWORD *)&v24->Flags = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v17;
}
