/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028680
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C002484C (RaAdapterProtocolCommandIoctl.c)
 * Callees:
 *     RaidBuildMdlForXrb @ 0x1C0006B9C (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006F5C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C00073D0 (StorFreeContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00073F8 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     RaidPauseAdapterQueue @ 0x1C000F520 (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002BB14 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C002C39C (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C003FD7C (StorSetIoGatewayEmptyEvent.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0041E44 (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v4; // rsi
  _IRP *MasterIrp; // r12
  int v7; // ebx
  char v8; // r8
  unsigned int Options; // r14d
  unsigned int Length; // eax
  _BYTE *v12; // r15
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _BYTE *Srb; // rdi
  int v16; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  int v21; // r14d
  char v22; // r14
  int v23; // ecx
  int v24; // edx
  unsigned int LowPart; // eax
  __int64 v26; // rbx
  int Blink; // eax
  IRP *v28; // rax
  int v29; // eax
  int v30; // eax
  KIRQL v31; // bl
  unsigned __int64 v32; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h]
  char v37; // [rsp+A0h] [rbp+18h]

  v37 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = *(_DWORD *)(a1 + 444) + 7;
  v8 = *(_BYTE *)(a1 + 402);
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v12 = 0LL;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v7 & 0xFFFFFFF8;
  if ( Options <= Length )
    Options = Length;
  Timeout.LowPart = Options;
  Srb = RaidAllocateSrb(v13, 9u, v8, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v14 + 1088, v16, a1);
  v36 = ContiguousIoResources;
  v20 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v4 = ContiguousIoResources + 32;
    RaidZeroXrb(ContiguousIoResources + 32, v18, 0, 0LL);
    v21 = RaidBuildMdlForXrb(v4, MasterIrp, Options);
    if ( v21 < 0 )
      goto LABEL_27;
    v22 = v37;
    v23 = 129;
    if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
      v23 = 1;
    MasterIrp->Flags = 255;
    v24 = v23 | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v24 = v23;
    if ( !v22 )
    {
      v24 |= 0x102u;
      if ( Srb[2] == 40 )
        *((_WORD *)Srb + 19) = 32;
      else
        Srb[9] = 32;
    }
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      LowPart = Timeout.LowPart;
      v26 = *((unsigned int *)Srb + 13);
      v12 = Srb;
      *((_DWORD *)Srb + 8) = -1;
      *((_DWORD *)Srb + 15) = LowPart;
      *((_DWORD *)Srb + 5) = 9;
      *((_DWORD *)Srb + 6) = v24;
      *((_QWORD *)Srb + 8) = MasterIrp;
      *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
      Blink = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 4204);
      *((_DWORD *)Srb + 10) = Blink;
      *((_QWORD *)Srb + 12) = v4;
      *((_QWORD *)Srb + 10) = a2;
      *(_WORD *)&Srb[v26 + 8] = 0;
      Srb[v26 + 10] = 0;
      v20 = v36;
      *(_QWORD *)(v4 + 168) = Srb;
      *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 8);
      v28 = (IRP *)*((_QWORD *)Srb + 12);
    }
    else
    {
      Srb[2] = 9;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 4) = Timeout.LowPart;
      *((_DWORD *)Srb + 3) = v24;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = MasterIrp;
      v29 = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !v29 )
        v29 = *(_DWORD *)(a1 + 4204);
      *((_DWORD *)Srb + 5) = v29;
      *((_QWORD *)Srb + 6) = v4;
      *(_WORD *)(Srb + 5) = 0;
      Srb[7] = 0;
      *(_QWORD *)(v4 + 168) = Srb;
      *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 3);
      v28 = a2;
    }
    *(_QWORD *)(v4 + 176) = v28;
    RaSrbSetMiniportContext(a1, (__int64)Srb, v20 + 1088);
    if ( v22 )
      *(_BYTE *)(v4 + 17) |= 8u;
    KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
    *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
    if ( v22 )
    {
      Timeout.QuadPart = 0LL;
      RaidPauseAdapterQueue(a1);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      StorSetIoGatewayEmptyEvent(a1 + 768, &Event);
      Timeout.QuadPart = -1200000000LL;
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
      {
        a2->IoStatus.Information = 0LL;
        v21 = -1073741823;
LABEL_26:
        v20 = v36;
        goto LABEL_27;
      }
    }
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
          65LL,
          &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
          v4,
          v12,
          *((_QWORD *)v12 + 13));
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        66LL,
        &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
        v4,
        Srb,
        *((_QWORD *)Srb + 7));
    }
    if ( *(_BYTE *)(a1 + 4450) )
      v30 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v4);
    else
      v30 = RaidAdapterExecuteXrb(a1, (_QWORD *)v4, v19);
    v21 = v30;
    if ( v30 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
      v21 = RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( v37 )
    {
      v31 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1);
      KeLowerIrql(v31);
    }
    if ( (*(_BYTE *)(v4 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v4 + 748));
      *(_BYTE *)(v4 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    if ( v21 < 0 )
      goto LABEL_26;
    if ( MasterIrp->Flags == 255 )
      v21 = -1073741637;
    if ( v21 < 0 )
      goto LABEL_26;
    v20 = v36;
    if ( *(_BYTE *)(a1 + 402) == 1 )
      v32 = *((unsigned int *)v12 + 15);
    else
      v32 = *((unsigned int *)Srb + 4);
    a2->IoStatus.Information = v32;
  }
  else
  {
    v21 = -1073741801;
  }
LABEL_27:
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v19) = v37;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v19);
  }
  if ( v20 )
  {
    RaidXrbDeallocateResources(v4, 0);
    StorFreeContiguousIoResources(a1, v20);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
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
  return (unsigned int)v21;
}
