/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C002C09C (RaAdapterProtocolCommandIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaidBuildMdlForXrb @ 0x1C0006174 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidPauseAdapterQueue @ 0x1C0010E08 (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0030614 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C0030CC8 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0040BB0 (StorSetIoGatewayEmptyEvent.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0042AF0 (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 v4; // rsi
  _IRP *MasterIrp; // r12
  char v7; // r8
  unsigned int Length; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  _BYTE *v12; // r15
  _BYTE *Srb; // rdi
  __int64 v14; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  void *v18; // rbx
  int v19; // r14d
  int Flink_high; // eax
  int v21; // ecx
  char v22; // r14
  int v23; // edx
  unsigned int LowPart; // eax
  __int64 v25; // rbx
  int Blink; // eax
  int v27; // eax
  int v28; // eax
  KIRQL v29; // bl
  unsigned __int64 v30; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  void *v34; // [rsp+98h] [rbp+10h]
  char v35; // [rsp+A0h] [rbp+18h]

  v35 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = *(_BYTE *)(a1 + 402);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = (*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options > Length )
    Length = CurrentStackLocation->Parameters.Create.Options;
  Timeout.LowPart = Length;
  Srb = RaidAllocateSrb(v11, 9u, v7, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v10 + 1072, v14, (_QWORD *)a1);
  v34 = (void *)ContiguousIoResources;
  v18 = (void *)ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v4 = ContiguousIoResources + 16;
    RaidZeroXrb(ContiguousIoResources + 16, v16, 0, 0LL);
    v19 = RaidBuildMdlForXrb(v4, MasterIrp, Length);
    if ( v19 >= 0 )
    {
      Flink_high = HIDWORD(MasterIrp->ThreadListEntry.Flink);
      v21 = 129;
      v22 = v35;
      if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
        v21 = 1;
      MasterIrp->Flags = 255;
      v23 = v21 | 0x40;
      if ( !Flink_high )
        v23 = v21;
      if ( !v22 )
      {
        v23 |= 0x102u;
        if ( Srb[2] == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          Srb[9] = 32;
      }
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        LowPart = Timeout.LowPart;
        v25 = *((unsigned int *)Srb + 13);
        v12 = Srb;
        *((_DWORD *)Srb + 8) = -1;
        *((_DWORD *)Srb + 15) = LowPart;
        *((_DWORD *)Srb + 5) = 9;
        *((_DWORD *)Srb + 6) = v23;
        *((_QWORD *)Srb + 8) = MasterIrp;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        Blink = (int)MasterIrp->ThreadListEntry.Blink;
        if ( !Blink )
          Blink = *(_DWORD *)(a1 + 4204);
        *((_DWORD *)Srb + 10) = Blink;
        *((_QWORD *)Srb + 12) = v4;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)&Srb[v25 + 8] = 0;
        Srb[v25 + 10] = 0;
        v18 = v34;
        *(_QWORD *)(v4 + 168) = Srb;
        *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 8);
        *(_QWORD *)(v4 + 176) = *((_QWORD *)Srb + 12);
      }
      else
      {
        Srb[2] = 9;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 4) = Timeout.LowPart;
        *((_DWORD *)Srb + 3) = v23;
        Srb[8] = -1;
        *((_QWORD *)Srb + 3) = MasterIrp;
        v27 = (int)MasterIrp->ThreadListEntry.Blink;
        if ( !v27 )
          v27 = *(_DWORD *)(a1 + 4204);
        *((_DWORD *)Srb + 5) = v27;
        *((_QWORD *)Srb + 6) = v4;
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        *(_QWORD *)(v4 + 168) = Srb;
        *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 3);
        *(_QWORD *)(v4 + 176) = a2;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v18 + 1072);
      if ( v22 )
        *(_BYTE *)(v4 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
      *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
      if ( v22
        && (Timeout.QuadPart = 0LL,
            RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 768, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
        v19 = -1073741823;
      }
      else
      {
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
              &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
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
            &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
            v4,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v4);
        else
          v28 = RaidAdapterExecuteXrb(a1, (_QWORD *)v4, v17);
        v19 = v28;
        if ( v28 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
          v19 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v35 )
        {
          v29 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v29);
          v18 = v34;
        }
        if ( (*(_BYTE *)(v4 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v4 + 748));
          *(_BYTE *)(v4 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v19 >= 0 )
        {
          if ( MasterIrp->Flags == 255 )
            v19 = -1073741637;
          if ( v19 >= 0 )
          {
            if ( *(_BYTE *)(a1 + 402) == 1 )
              v30 = *((unsigned int *)v12 + 15);
            else
              v30 = *((unsigned int *)Srb + 4);
            a2->IoStatus.Information = v30;
          }
        }
      }
    }
  }
  else
  {
    v19 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v17) = v35;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v17);
  }
  if ( v18 )
  {
    RaidXrbDeallocateResources(v4, 0, v17);
    MmFreeContiguousMemory(v18);
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
  return (unsigned int)v19;
}
