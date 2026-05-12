/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C00040B4 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C00248DC (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C0024A04 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C00263E4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C00264D8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0026618 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0026E58 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0028B48 (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C002A22C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002A438 (RaidGetStorageAdapterTemperatureProperty.c)
 * Callees:
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00041A0 (PortSrbTranslateSrbToNtStatus.c)
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
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002BB14 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C002C39C (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C003FD7C (StorSetIoGatewayEmptyEvent.c)
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
  __int64 v7; // r12
  __int64 v11; // rsi
  unsigned int *v12; // r15
  unsigned int v13; // ebx
  unsigned int *Srb; // rdi
  __int64 v15; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // r14d
  char v20; // r12
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  IRP *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  KIRQL v27; // bl
  __int64 v29; // [rsp+30h] [rbp-58h]
  struct _KEVENT Event; // [rsp+38h] [rbp-50h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h]
  unsigned int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v7 = a3;
  LOBYTE(a3) = *(_BYTE *)(a1 + 402);
  v11 = 0LL;
  v12 = 0LL;
  v13 = (*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8;
  Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2LL, a3, 0LL);
  ContiguousIoResources = StorAllocateContiguousIoResources(v13 + 1088, v15, a1);
  v29 = ContiguousIoResources;
  v18 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v11 = ContiguousIoResources + 32;
    RaidZeroXrb(ContiguousIoResources + 32, v17, 0LL, 0LL);
    v19 = RaidBuildMdlForXrb(v11, v7, a4);
    if ( v19 >= 0 )
    {
      v20 = a6;
      v21 = a7;
      if ( !a6 )
      {
        v21 = a7 | 0x102;
        if ( *((_BYTE *)Srb + 2) == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
      }
      v22 = v21 | 1;
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        Srb[8] = -1;
        v23 = Srb[13];
        v12 = Srb;
        Srb[6] = v22;
        *((_QWORD *)Srb + 8) = v32;
        Srb[15] = v33;
        Srb[5] = 2;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        Srb[10] = *(_DWORD *)(a1 + 4204);
        *((_QWORD *)Srb + 12) = v11;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)((char *)Srb + v23 + 8) = 0;
        *((_BYTE *)Srb + v23 + 10) = 0;
        v18 = v29;
        *(_QWORD *)(v11 + 168) = Srb;
        *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 8);
        v24 = (IRP *)*((_QWORD *)Srb + 12);
      }
      else
      {
        Srb[3] = v22;
        *((_QWORD *)Srb + 3) = v32;
        Srb[4] = v33;
        *(_WORD *)Srb = 88;
        *((_BYTE *)Srb + 2) = 2;
        *((_BYTE *)Srb + 8) = -1;
        Srb[5] = *(_DWORD *)(a1 + 4204);
        *((_QWORD *)Srb + 6) = v11;
        *(_WORD *)((char *)Srb + 5) = 0;
        *((_BYTE *)Srb + 7) = 0;
        *(_QWORD *)(v11 + 168) = Srb;
        *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 3);
        v24 = a2;
      }
      *(_QWORD *)(v11 + 176) = v24;
      RaSrbSetMiniportContext(a1, Srb, v18 + 1088);
      if ( v20 )
        *(_BYTE *)(v11 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v11 + 664), NotificationEvent, 0);
      *(_QWORD *)(v11 + 656) = RaidXrbSignalCompletion;
      if ( v20
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
              63LL,
              &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
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
            &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
            v11,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v25 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v11);
        else
          v25 = RaidAdapterExecuteXrb(a1, v11);
        v19 = v25;
        if ( v25 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v11 + 664), Executive, 0, 0, 0LL);
          LOBYTE(v26) = *((_BYTE *)Srb + 3);
          v19 = RaidSrbStatusToNtStatus(v26);
        }
        if ( v20 )
        {
          v27 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v27);
          v18 = v29;
        }
        if ( (*(_BYTE *)(v11 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v11 + 748));
          *(_BYTE *)(v11 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v19 >= 0 )
        {
          if ( a5 )
            v19 = a5(*(unsigned int *)(v32 + 20));
          if ( v19 >= 0 )
            v19 = PortSrbTranslateSrbToNtStatus(*((_BYTE *)Srb + 3));
        }
      }
    }
  }
  else
  {
    v19 = -1073741801;
  }
  if ( v18 )
  {
    RaidXrbDeallocateResources(v11, 0LL);
    StorFreeContiguousIoResources(a1, v18);
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
