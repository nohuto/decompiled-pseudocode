/*
 * XREFs of RaidAdapterSendRPMBCommandSynchronously @ 0x1C00281D4
 * Callers:
 *     RaidAdapterRpmbRequest @ 0x1C0027B28 (RaidAdapterRpmbRequest.c)
 * Callees:
 *     RaidBuildMdlForXrb @ 0x1C0006B9C (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006F5C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C00073D0 (StorFreeContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00073F8 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqq @ 0x1C002C39C (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidAdapterSendRPMBCommandSynchronously(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  ULONG v7; // r13d
  unsigned int v8; // ebx
  _BYTE *v9; // r15
  __int64 v10; // rbp
  void *v11; // r12
  _BYTE *Srb; // rdi
  int v13; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  int v16; // r14d
  char v17; // r14
  int v18; // ebx
  int v19; // ebx
  PVOID Pool; // rax
  __int64 v21; // r13
  _BYTE *v22; // r14
  IRP *v23; // rbx
  $232F7186587B4AFBA3B8AD48EAFB0E82 *p_AssociatedIrp; // rcx
  __int64 v25; // rax
  __int16 v26; // ax
  __int64 v27; // r8
  int v28; // eax
  __int64 v30; // [rsp+80h] [rbp+8h]

  v7 = a5 << 9;
  v8 = (*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(a1 + 402), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v8 + 1088, v13, a1);
  v30 = ContiguousIoResources;
  if ( !Srb || !ContiguousIoResources )
  {
    v21 = ContiguousIoResources;
    goto LABEL_42;
  }
  v10 = ContiguousIoResources + 32;
  RaidZeroXrb(ContiguousIoResources + 32, v15, 0, 0LL);
  v16 = RaidBuildMdlForXrb(v10, a4, v7);
  if ( v16 < 0 )
  {
    v21 = v30;
LABEL_43:
    v23 = a2;
    goto LABEL_44;
  }
  v17 = a3;
  if ( a3 == -94 )
  {
    v18 = 64;
  }
  else
  {
    v18 = 0;
    if ( a3 == -75 )
      v18 = 128;
  }
  v19 = v18 | 0x102;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
  v11 = Pool;
  if ( !Pool )
  {
    v21 = v30;
LABEL_42:
    v16 = -1073741801;
    goto LABEL_43;
  }
  memset(Pool, 0, 0xFFuLL);
  if ( *(_BYTE *)(a1 + 402) == 1 )
  {
    v9 = Srb;
    v22 = &Srb[*((unsigned int *)Srb + 13)];
    *((_DWORD *)Srb + 5) = 0;
    *((_DWORD *)Srb + 8) = -1;
    *((_DWORD *)Srb + 6) = v19;
    *((_QWORD *)Srb + 8) = a4;
    *((_DWORD *)Srb + 15) = v7;
    *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
    *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
    *((_QWORD *)Srb + 10) = a2;
    *((_QWORD *)Srb + 12) = v10;
    if ( *(_WORD *)(a1 + 5656) == 1 )
    {
      v22[8] = *(_BYTE *)(a1 + 5664);
      v22[9] = *(_BYTE *)(a1 + 5665);
      v22[10] = *(_BYTE *)(a1 + 5666);
    }
    v17 = a3;
    *(_QWORD *)(v10 + 168) = Srb;
    *(_QWORD *)(v10 + 184) = *((_QWORD *)Srb + 8);
    *(_QWORD *)(v10 + 176) = *((_QWORD *)Srb + 12);
    v23 = (IRP *)&Srb[*((unsigned int *)Srb + 30)];
    *(_DWORD *)&v23->Type = 64;
    p_AssociatedIrp = &v23->AssociatedIrp;
    *(_DWORD *)(&v23->Size + 1) = 32;
    *(_WORD *)((char *)&v23->MdlAddress + 1) = 3327;
    *(_QWORD *)&v23->Flags = v11;
  }
  else
  {
    Srb[2] = 0;
    *(_WORD *)Srb = 88;
    *((_QWORD *)Srb + 3) = a4;
    *((_DWORD *)Srb + 3) = v19;
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
    v25 = *((_QWORD *)Srb + 3);
    *(_QWORD *)(v10 + 176) = a2;
    v23 = a2;
    *(_QWORD *)(v10 + 184) = v25;
    Srb[10] = 12;
  }
  if ( Srb[2] == 40 )
    *((_WORD *)Srb + 19) = 32;
  else
    Srb[9] = 32;
  LOBYTE(p_AssociatedIrp->MasterIrp) = v17;
  BYTE1(p_AssociatedIrp->MasterIrp) = *(_BYTE *)(a1 + 5648);
  v26 = *(_WORD *)(a1 + 5650);
  *(_DWORD *)((char *)&p_AssociatedIrp->SystemBuffer + 6) = _byteswap_ulong(v7);
  v21 = v30;
  HIWORD(p_AssociatedIrp->IrpCount) = __ROR2__(v26, 8);
  RaSrbSetMiniportContext(a1, (__int64)Srb, v30 + 1088);
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
        &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
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
      &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
      v10,
      Srb,
      *((_QWORD *)Srb + 7));
  }
  if ( *(_BYTE *)(a1 + 4450) )
    v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v10);
  else
    v28 = RaidAdapterExecuteXrb(a1, (_QWORD *)v10, v27);
  v16 = v28;
  if ( v28 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 664), Executive, 0, 0, 0LL);
    v16 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( (*(_BYTE *)(v10 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v10 + 748));
    *(_BYTE *)(v10 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 5088) )
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
LABEL_44:
  if ( v21 )
  {
    RaidXrbDeallocateResources(v10, 0);
    StorFreeContiguousIoResources(a1, v21);
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
      if ( v23 )
        *(_QWORD *)&v23->Flags = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v16;
}
