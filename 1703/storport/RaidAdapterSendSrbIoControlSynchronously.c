/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000D38C (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002B43C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C002B528 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002C448 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002C538 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002C678 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C002F214 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002F420 (RaidGetStorageAdapterTemperatureProperty.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C000D900 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidPauseAdapterQueue @ 0x1C0011DCC (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002F784 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C0030650 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0040320 (StorSetIoGatewayEmptyEvent.c)
 *     RaidBuildMdlForXrb @ 0x1C005D704 (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  __int64 v11; // rsi
  _BYTE *v12; // r15
  unsigned int v13; // ebx
  _BYTE *Srb; // rdi
  __int64 v15; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  void *v19; // rbx
  int v20; // r14d
  char v21; // r12
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  KIRQL v27; // bl
  void *v29; // [rsp+30h] [rbp-58h]
  struct _KEVENT Event; // [rsp+38h] [rbp-50h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h]
  unsigned int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v11 = 0LL;
  v12 = 0LL;
  v13 = (*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 402), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v13 + 1072, v15, (_QWORD *)a1);
  v29 = (void *)ContiguousIoResources;
  v19 = (void *)ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v11 = ContiguousIoResources + 16;
    RaidZeroXrb(ContiguousIoResources + 16, v17, 0, 0LL);
    v20 = RaidBuildMdlForXrb(v11, a3, a4);
    if ( v20 >= 0 )
    {
      v21 = a6;
      v22 = a7;
      if ( !a6 )
      {
        v22 = a7 | 0x102;
        if ( Srb[2] == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          Srb[9] = 32;
      }
      v23 = v22 | 1;
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        *((_DWORD *)Srb + 8) = -1;
        v24 = *((unsigned int *)Srb + 13);
        v12 = Srb;
        *((_DWORD *)Srb + 6) = v23;
        *((_QWORD *)Srb + 8) = v32;
        *((_DWORD *)Srb + 15) = v33;
        *((_DWORD *)Srb + 5) = 2;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
        *((_QWORD *)Srb + 12) = v11;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)&Srb[v24 + 8] = 0;
        Srb[v24 + 10] = 0;
        v19 = v29;
        *(_QWORD *)(v11 + 168) = Srb;
        *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 8);
        *(_QWORD *)(v11 + 176) = *((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v23;
        *((_QWORD *)Srb + 3) = v32;
        *((_DWORD *)Srb + 4) = v33;
        *(_WORD *)Srb = 88;
        Srb[2] = 2;
        Srb[8] = -1;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4204);
        *((_QWORD *)Srb + 6) = v11;
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        *(_QWORD *)(v11 + 168) = Srb;
        *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 3);
        *(_QWORD *)(v11 + 176) = a2;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v19 + 1072);
      if ( v21 )
        *(_BYTE *)(v11 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v11 + 664), NotificationEvent, 0);
      *(_QWORD *)(v11 + 656) = RaidXrbSignalCompletion;
      if ( v21
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
          RaidAdapterPoFxActivateComponent(a1, 0LL);
        if ( *(_BYTE *)(a1 + 402) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              63LL,
              &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
              v11,
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
            64LL,
            &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
            v11,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v25 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v11);
        else
          v25 = RaidAdapterExecuteXrb(a1, (_QWORD *)v11, v18);
        v20 = v25;
        if ( v25 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v11 + 664), Executive, 0, 0, 0LL);
          v20 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v21 )
        {
          v27 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v27);
          v19 = v29;
        }
        if ( (*(_BYTE *)(v11 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v11 + 748));
          *(_BYTE *)(v11 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v20 >= 0 )
        {
          if ( a5 )
            v20 = a5(*(unsigned int *)(v32 + 20));
          if ( v20 >= 0 )
          {
            LOBYTE(v26) = Srb[3];
            v20 = PortSrbTranslateSrbToNtStatus(v26);
          }
        }
      }
    }
  }
  else
  {
    v20 = -1073741801;
  }
  if ( v19 )
  {
    RaidXrbDeallocateResources(v11, 0, v18);
    MmFreeContiguousMemory(v19);
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
  return (unsigned int)v20;
}
