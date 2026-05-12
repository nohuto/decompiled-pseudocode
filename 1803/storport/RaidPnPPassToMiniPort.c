/*
 * XREFs of RaidPnPPassToMiniPort @ 0x1C0011C6C
 * Callers:
 *     RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C0011B80 (RaidAdapterQueryCapabilitiesIrpCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005EA94 (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C0064554 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00647E0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006534 (RaidUnitPoFxActivateComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C0006F5C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C00073D0 (StorFreeContiguousIoResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00073F8 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0007D98 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002BBD8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 *     WPP_SF_qDD @ 0x1C002C1B0 (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x1C002C39C (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  _BYTE *v6; // rbp
  _BYTE *v7; // r13
  __int64 v8; // rdi
  __int64 ContiguousIoResources; // rax
  _BYTE *Srb; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rsi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r12
  char v18; // r9
  char v19; // cl
  char v20; // al
  __int64 v21; // r8
  unsigned int v22; // ebp
  int v23; // eax
  _BYTE *v24; // rax
  __int64 v26; // [rsp+30h] [rbp-68h]
  _BYTE *v27; // [rsp+38h] [rbp-60h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-58h] BYREF
  int v30; // [rsp+A8h] [rbp+10h]
  char v31; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)v5 == 1 )
    v8 = *(_QWORD *)(v5 + 24);
  else
    v8 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v5 != 1 )
    v5 = 0LL;
  if ( !*(_QWORD *)(v8 + 528) || !*(_QWORD *)(v8 + 536) )
    return 0LL;
  Interval.QuadPart = -1000LL;
  ContiguousIoResources = 0LL;
  Srb = 0LL;
  v26 = 0LL;
  v11 = (*(_DWORD *)(v8 + 444) + 7) & 0xFFFFFFF8;
  v12 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    if ( !Srb )
    {
      Srb = RaidAllocateSrb(*(_QWORD *)(v8 + 8), 0x25u, *(_BYTE *)(v8 + 402), 0);
      ContiguousIoResources = v26;
    }
    if ( !ContiguousIoResources )
    {
      ContiguousIoResources = StorAllocateContiguousIoResources(v11 + 1088, a2, v8);
      v26 = ContiguousIoResources;
    }
    if ( Srb && ContiguousIoResources )
      break;
    v14 = v13++;
    if ( v14 >= 3 )
    {
      v17 = v26;
      v22 = -1073741801;
      goto LABEL_65;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    ContiguousIoResources = v26;
  }
  v12 = ContiguousIoResources + 32;
  RaidZeroXrb(ContiguousIoResources + 32, a2, 0, 0LL);
  *(_QWORD *)(v12 + 168) = Srb;
  *(_QWORD *)(v12 + 176) = *((_QWORD *)Srb + 6);
  if ( *(_BYTE *)(v8 + 402) == 1 )
  {
    v15 = *((unsigned int *)Srb + 13);
    *((_QWORD *)Srb + 8) = v32;
    v6 = &Srb[v15];
    *((_DWORD *)Srb + 15) = a5;
    *((_QWORD *)Srb + 12) = v12;
    *((_DWORD *)Srb + 5) = 37;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = 10;
    v7 = &Srb[*((unsigned int *)Srb + 30)];
    v27 = Srb;
    *(_DWORD *)v7 = 98;
    *((_DWORD *)v7 + 1) = 16;
    *((_DWORD *)v7 + 3) = v30;
    v7[8] = 0;
    v16 = *((_QWORD *)Srb + 8);
  }
  else
  {
    *((_QWORD *)Srb + 3) = v32;
    *((_DWORD *)Srb + 4) = a5;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 2) = v30;
    v16 = v32;
    *((_QWORD *)Srb + 6) = v12;
    Srb[2] = 37;
    Srb[4] = 0;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = 10;
  }
  v17 = v26;
  *(_QWORD *)(v12 + 184) = v16;
  RaSrbSetMiniportContext(v8, (__int64)Srb, v26 + 1088);
  v19 = *(_BYTE *)(v8 + 402);
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    v20 = *(_BYTE *)(v5 + 88);
    if ( v19 == 1 )
    {
      v6[8] = v20;
      v6[9] = *(_BYTE *)(v5 + 89);
      v6[10] = *(_BYTE *)(v5 + 90);
    }
    else
    {
      Srb[5] = v20;
      Srb[6] = *(_BYTE *)(v5 + 89);
      Srb[7] = *(_BYTE *)(v5 + 90);
    }
  }
  else if ( v19 == 1 )
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
  KeInitializeEvent((PRKEVENT)(v12 + 664), NotificationEvent, 0);
  *(_QWORD *)(v12 + 656) = RaidXrbSignalCompletion;
  if ( *(_BYTE *)(v8 + 402) == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          58LL,
          &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
          v12,
          v27,
          *((_QWORD *)v27 + 13));
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          59LL,
          &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
          (unsigned __int8)v6[8],
          (unsigned __int8)v6[9],
          (unsigned __int8)v6[10]);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
        v12,
        Srb,
        *((_QWORD *)Srb + 7));
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_ddd(
        WPP_GLOBAL_Control->AttachedDevice,
        61LL,
        &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
        (unsigned __int8)Srb[5],
        (unsigned __int8)Srb[6],
        (unsigned __int8)Srb[7]);
    }
  }
  v22 = 0;
  if ( v5 )
  {
    RaidUnitPoFxActivateComponent(v5, 0, 1LL, &v31);
  }
  else if ( *(_QWORD *)(v8 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v8, 0LL, 1LL);
  }
  if ( *(_BYTE *)(v8 + 4450) )
    v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v8, v12);
  else
    v23 = RaidAdapterExecuteXrb(v8, (_QWORD *)v12, v21);
  if ( v23 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v12 + 664), Executive, 0, 0, 0LL);
    v22 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( (*(_BYTE *)(v12 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v12 + 748));
    *(_BYTE *)(v12 + 17) &= ~1u;
  }
  if ( v5 )
  {
    RaidUnitPoFxIdleComponent(v5, 0, 0, &v31);
    if ( (*(_BYTE *)(v12 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(v12 + 748));
      *(_BYTE *)(v12 + 17) &= ~2u;
    }
  }
  else if ( *(_QWORD *)(v8 + 5088) )
  {
    RaidAdapterPoFxIdleComponent(v8, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, 62LL, 0LL, v8, 0, v30);
  }
LABEL_65:
  if ( v17 )
  {
    RaidXrbDeallocateResources(v12, 0);
    StorFreeContiguousIoResources(v8, v17);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v8 + 402) == 1 )
    {
      v24 = Srb;
      if ( v27 )
        v24 = v27;
      *((_QWORD *)v24 + 10) = 0LL;
      *((_QWORD *)v24 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v22;
}
