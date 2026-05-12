/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C002B3AC (RaAdapterProtocolCommandIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidPauseAdapterQueue @ 0x1C0011DCC (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002F784 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C0030650 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0040320 (StorSetIoGatewayEmptyEvent.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0041C6C (StorEtwProtocolCommandCompletion.c)
 *     RaidBuildMdlForXrb @ 0x1C005D704 (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 v4; // rsi
  _IRP *MasterIrp; // r12
  int v7; // ebx
  char v8; // r8
  unsigned int Length; // r14d
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _BYTE *v13; // r15
  _BYTE *Srb; // rdi
  __int64 v15; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  void *v19; // rbx
  int v20; // r14d
  int Flink_high; // eax
  int v22; // ecx
  char v23; // r14
  int v24; // edx
  unsigned int LowPart; // eax
  __int64 v26; // rbx
  int Blink; // eax
  int v28; // eax
  int v29; // eax
  KIRQL v30; // bl
  unsigned __int64 v31; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  void *v35; // [rsp+98h] [rbp+10h]
  char v36; // [rsp+A0h] [rbp+18h]

  v36 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = *(_DWORD *)(a1 + 444) + 7;
  v8 = *(_BYTE *)(a1 + 402);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = v7 & 0xFFFFFFF8;
  v13 = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options > Length )
    Length = CurrentStackLocation->Parameters.Create.Options;
  Timeout.LowPart = Length;
  Srb = RaidAllocateSrb(v11, 9u, v8, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1072, v15, (_QWORD *)a1);
  v35 = (void *)ContiguousIoResources;
  v19 = (void *)ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v4 = ContiguousIoResources + 16;
    RaidZeroXrb(ContiguousIoResources + 16, v17, 0, 0LL);
    v20 = RaidBuildMdlForXrb(v4, MasterIrp, Length);
    if ( v20 >= 0 )
    {
      Flink_high = HIDWORD(MasterIrp->ThreadListEntry.Flink);
      v22 = 129;
      v23 = v36;
      if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
        v22 = 1;
      MasterIrp->Flags = 255;
      v24 = v22 | 0x40;
      if ( !Flink_high )
        v24 = v22;
      if ( !v23 )
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
        v13 = Srb;
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
        v19 = v35;
        *(_QWORD *)(v4 + 168) = Srb;
        *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 8);
        *(_QWORD *)(v4 + 176) = *((_QWORD *)Srb + 12);
      }
      else
      {
        Srb[2] = 9;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 4) = Timeout.LowPart;
        *((_DWORD *)Srb + 3) = v24;
        Srb[8] = -1;
        *((_QWORD *)Srb + 3) = MasterIrp;
        v28 = (int)MasterIrp->ThreadListEntry.Blink;
        if ( !v28 )
          v28 = *(_DWORD *)(a1 + 4204);
        *((_DWORD *)Srb + 5) = v28;
        *((_QWORD *)Srb + 6) = v4;
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        *(_QWORD *)(v4 + 168) = Srb;
        *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 3);
        *(_QWORD *)(v4 + 176) = a2;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v19 + 1072);
      if ( v23 )
        *(_BYTE *)(v4 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
      *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
      if ( v23
        && (Timeout.QuadPart = 0LL,
            RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 768, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
        v20 = -1073741823;
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
              &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
              v4,
              v13,
              *((_QWORD *)v13 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            66LL,
            &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
            v4,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v29 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v4);
        else
          v29 = RaidAdapterExecuteXrb(a1, (_QWORD *)v4, v18);
        v20 = v29;
        if ( v29 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
          v20 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v36 )
        {
          v30 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v30);
          v19 = v35;
        }
        if ( (*(_BYTE *)(v4 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v4 + 748));
          *(_BYTE *)(v4 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v20 >= 0 )
        {
          if ( MasterIrp->Flags == 255 )
            v20 = -1073741637;
          if ( v20 >= 0 )
          {
            if ( *(_BYTE *)(a1 + 402) == 1 )
              v31 = *((unsigned int *)v13 + 15);
            else
              v31 = *((unsigned int *)Srb + 4);
            a2->IoStatus.Information = v31;
          }
        }
      }
    }
  }
  else
  {
    v20 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v18) = v36;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v18);
  }
  if ( v19 )
  {
    RaidXrbDeallocateResources(v4, 0, v18);
    MmFreeContiguousMemory(v19);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      if ( !v13 )
        v13 = Srb;
      *((_QWORD *)v13 + 10) = 0LL;
      *((_QWORD *)v13 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v20;
}
