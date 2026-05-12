/*
 * XREFs of RaidPnPPassToMiniPort @ 0x1C001AFBC
 * Callers:
 *     RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C001BC90 (RaidAdapterQueryCapabilitiesIrpCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0060E30 (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C00640B0 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0064338 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0004738 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0004BA0 (RaidUnitPoFxIdleComponent.c)
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002F848 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C003036C (WPP_SF_ddd.c)
 *     WPP_SF_qDD @ 0x1C0030460 (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x1C0030650 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  _BYTE *v6; // rbp
  _BYTE *v7; // r12
  _BYTE *v8; // r14
  __int64 ContiguousIoResources; // rax
  _BYTE *Srb; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rbp
  _BYTE *v17; // r13
  char v18; // r9
  char v19; // al
  __int64 v20; // r8
  PDEVICE_OBJECT v21; // r10
  int v22; // eax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // r9
  unsigned int v26; // ebp
  int v27; // eax
  __int64 v28; // rdx
  _BYTE *v29; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-68h]
  _BYTE *v32; // [rsp+38h] [rbp-60h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-58h] BYREF
  int v35; // [rsp+A8h] [rbp+10h]
  char v36; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v32 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)v5 == 1 )
  {
    v8 = *(_BYTE **)(a1 + 64);
    v5 = *(_QWORD *)(v5 + 24);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !*(_QWORD *)(v5 + 528) || !*(_QWORD *)(v5 + 536) )
    return 0LL;
  ContiguousIoResources = 0LL;
  Interval.QuadPart = -1000LL;
  Srb = 0LL;
  BaseAddress = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = (*(_DWORD *)(v5 + 444) + 7) & 0xFFFFFFF8;
  while ( 1 )
  {
    if ( !Srb )
    {
      Srb = RaidAllocateSrb(*(_QWORD *)(v5 + 8), 0x25u, *(_BYTE *)(v5 + 402), 0);
      ContiguousIoResources = (__int64)BaseAddress;
    }
    if ( !ContiguousIoResources )
    {
      ContiguousIoResources = StorAllocateContiguousIoResources(v13 + 1072, a2, (_QWORD *)v5);
      BaseAddress = (PVOID)ContiguousIoResources;
    }
    if ( Srb && ContiguousIoResources )
      break;
    v14 = v12++;
    if ( v14 >= 3 )
    {
      v26 = -1073741801;
      goto LABEL_64;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    ContiguousIoResources = (__int64)BaseAddress;
  }
  v11 = ContiguousIoResources + 16;
  RaidZeroXrb(ContiguousIoResources + 16, a2, 0, 0LL);
  v15 = v37;
  *(_QWORD *)(v11 + 168) = Srb;
  *(_QWORD *)(v11 + 176) = *((_QWORD *)Srb + 6);
  if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    v16 = *((unsigned int *)Srb + 13);
    v17 = Srb;
    *((_DWORD *)Srb + 15) = a5;
    v6 = &Srb[v16];
    *((_QWORD *)Srb + 8) = v15;
    *((_QWORD *)Srb + 12) = v11;
    *((_DWORD *)Srb + 5) = 37;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = 10;
    v7 = &Srb[*((unsigned int *)Srb + 30)];
    v32 = Srb;
    *(_DWORD *)v7 = 98;
    *((_DWORD *)v7 + 1) = 16;
    *((_DWORD *)v7 + 3) = v35;
    v7[8] = 0;
    *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 8);
  }
  else
  {
    v17 = 0LL;
    *((_DWORD *)Srb + 4) = a5;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 2) = v35;
    *((_QWORD *)Srb + 6) = v11;
    Srb[2] = 37;
    *((_QWORD *)Srb + 3) = v15;
    Srb[4] = 0;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = 10;
    *(_QWORD *)(v11 + 184) = v15;
  }
  RaSrbSetMiniportContext(v5, (__int64)Srb, (__int64)BaseAddress + 1072);
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    v19 = v8[88];
    if ( *(_BYTE *)(v5 + 402) == 1 )
    {
      v6[8] = v19;
      v6[9] = v8[89];
      v6[10] = v8[90];
    }
    else
    {
      Srb[5] = v19;
      Srb[6] = v8[89];
      Srb[7] = v8[90];
    }
  }
  else if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    *((_DWORD *)v7 + 4) = 1;
    *((_WORD *)v6 + 4) = 0;
    v6[10] = v18;
  }
  else
  {
    *(_WORD *)(Srb + 5) = 0;
    *((_DWORD *)Srb + 16) = 1;
    Srb[7] = v18;
  }
  KeInitializeEvent((PRKEVENT)(v11 + 664), NotificationEvent, 0);
  *(_QWORD *)(v11 + 656) = RaidXrbSignalCompletion;
  if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          58LL,
          &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
          v11,
          v17,
          *((_QWORD *)v17 + 13));
        v21 = WPP_GLOBAL_Control;
      }
      if ( v21 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v21->Timer) & 2) != 0 && BYTE1(v21->Timer) >= 4u )
      {
        v22 = (unsigned __int8)v6[10];
        v23 = 59LL;
        v24 = (unsigned __int8)v6[9];
        v25 = (unsigned __int8)v6[8];
LABEL_42:
        WPP_SF_ddd(v21->AttachedDevice, v23, &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids, v25, v24, v22);
      }
    }
  }
  else
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          60LL,
          &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids,
          v11,
          Srb,
          *((_QWORD *)Srb + 7));
        v21 = WPP_GLOBAL_Control;
      }
      if ( v21 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v21->Timer) & 2) != 0 && BYTE1(v21->Timer) >= 4u )
      {
        v22 = (unsigned __int8)Srb[7];
        v23 = 61LL;
        v24 = (unsigned __int8)Srb[6];
        v25 = (unsigned __int8)Srb[5];
        goto LABEL_42;
      }
    }
  }
  v26 = 0;
  if ( v8 )
  {
    RaidUnitPoFxActivateComponent((__int64)v8, 0, 1u, &v36);
  }
  else if ( *(_QWORD *)(v5 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v5, 0LL);
  }
  if ( *(_BYTE *)(v5 + 4450) )
    v27 = RaidAdapterRaiseIrqlAndExecuteXrb(v5, v11);
  else
    v27 = RaidAdapterExecuteXrb(v5, (_QWORD *)v11, v20);
  if ( v27 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v11 + 664), Executive, 0, 0, 0LL);
    v26 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( (*(_BYTE *)(v11 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(v11 + 748));
    *(_BYTE *)(v11 + 17) &= ~1u;
  }
  if ( v8 )
  {
    RaidUnitPoFxIdleComponent((__int64)v8, 0, 0, &v36);
    if ( (*(_BYTE *)(v11 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v11 + 748));
      *(_BYTE *)(v11 + 17) &= ~2u;
    }
  }
  else if ( *(_QWORD *)(v5 + 5088) )
  {
    RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v28, a3, v5);
  }
LABEL_64:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v11, 0, a3);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v5 + 402) == 1 )
    {
      v29 = v32;
      if ( !v32 )
        v29 = Srb;
      *((_QWORD *)v29 + 10) = 0LL;
      *((_QWORD *)v29 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v26;
}
