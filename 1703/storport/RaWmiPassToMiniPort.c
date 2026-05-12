/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C0061B64
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C0061994 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C0065A20 (RaWmiIrpNormalRequest.c)
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
 *     RaidXrbSetCompletionRoutine @ 0x1C000E228 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B554 (RaidFreeSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002F848 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C003036C (WPP_SF_ddd.c)
 *     WPP_SF_qD @ 0x1C003040C (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C0030650 (WPP_SF_qqq.c)
 *     RaidBuildMdlForXrb @ 0x1C005D704 (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rdi
  _BYTE *v4; // rbp
  _BYTE *v5; // r13
  __int64 v7; // r14
  ULONG v8; // r12d
  ULONG v9; // esi
  __int64 v10; // rdx
  _BYTE *Srb; // rbx
  __int64 v12; // r8
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  int v15; // esi
  _BYTE *v16; // rsi
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rcx
  char v20; // al
  char v21; // al
  __int64 v22; // r8
  PDEVICE_OBJECT v23; // r10
  int v24; // eax
  int v25; // eax
  _BYTE *v27; // rcx
  char v28; // al
  __int64 v29; // rbp
  char v30; // al
  ULONG *v31; // rax
  char v32; // al
  int v33; // eax
  unsigned __int16 v34; // dx
  int v35; // ecx
  int v36; // r9d
  __int64 v37; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  PVOID BaseAddress; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  char v42; // [rsp+98h] [rbp+10h] BYREF
  _DWORD *v43; // [rsp+A0h] [rbp+18h]
  _BYTE *v44; // [rsp+A8h] [rbp+20h]

  v42 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  BaseAddress = 0LL;
  v4 = 0LL;
  v44 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)v3 == 1 )
  {
    v40 = v3;
    v3 = *(_QWORD *)(v3 + 24);
  }
  else
  {
    v40 = 0LL;
  }
  v7 = 0LL;
  if ( a2 == 9 )
  {
    v31 = *(ULONG **)(a3 + 24);
    v8 = *(_DWORD *)(a3 + 16);
    v43 = (_DWORD *)(a3 + 16);
    if ( v8 > *v31 )
      v31 = (ULONG *)(a3 + 16);
    v9 = *v31;
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 16);
    v9 = v8;
    v43 = (_DWORD *)(a3 + 16);
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0x17u, *(_BYTE *)(v3 + 402), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v3 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                  v10,
                                  (_QWORD *)v3),
        (BaseAddress = (PVOID)ContiguousIoResources) == 0LL) )
  {
    v15 = -1073741801;
    goto LABEL_54;
  }
  v7 = ContiguousIoResources + 16;
  RaidZeroXrb(ContiguousIoResources + 16, v14, 0, 0LL);
  *(_QWORD *)(v7 + 176) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v7 + 168) = Srb;
  v15 = RaidBuildMdlForXrb(v7, *(void **)(a3 + 24), v9);
  if ( v15 < 0 )
  {
LABEL_54:
    *v43 = 0;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v3 + 402) == 1 )
  {
    v29 = *((unsigned int *)Srb + 13);
    v16 = Srb;
    *((_QWORD *)Srb + 12) = v7;
    v4 = &Srb[v29];
    *((_DWORD *)Srb + 5) = 23;
    *((_QWORD *)Srb + 8) = *(_QWORD *)(a3 + 24);
    v30 = v42;
    *((_DWORD *)Srb + 15) = v8;
    *((_DWORD *)Srb + 6) = 320;
    *((_DWORD *)Srb + 10) = 10;
    v5 = &Srb[*((unsigned int *)Srb + 30)];
    v44 = Srb;
    *(_DWORD *)v5 = 96;
    *((_DWORD *)v5 + 1) = 16;
    v5[8] = v30;
    *((_QWORD *)v5 + 2) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(v7 + 184) = *((_QWORD *)Srb + 8);
  }
  else
  {
    *((_QWORD *)Srb + 6) = v7;
    Srb[2] = 23;
    v16 = 0LL;
    v17 = *(_QWORD *)(a3 + 24);
    *(_WORD *)Srb = 88;
    Srb[4] = v42;
    *((_QWORD *)Srb + 3) = v17;
    *((_DWORD *)Srb + 4) = v8;
    *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
    *((_DWORD *)Srb + 3) = 320;
    *((_DWORD *)Srb + 5) = 10;
    *(_QWORD *)(v7 + 184) = v17;
  }
  RaSrbSetMiniportContext(v3, (__int64)Srb, (__int64)BaseAddress + 1072);
  v19 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v19 == v18 )
  {
    v20 = *(_BYTE *)(v19 + 88);
    if ( *(_BYTE *)(v3 + 402) != (_BYTE)v18 )
    {
      Srb[5] = v20;
      Srb[6] = *(_BYTE *)(v19 + 89);
      v21 = *(_BYTE *)(v19 + 90);
LABEL_13:
      Srb[7] = v21;
      goto LABEL_14;
    }
    v4[8] = v20;
    v4[9] = *(_BYTE *)(v19 + 89);
    v32 = *(_BYTE *)(v19 + 90);
LABEL_71:
    v4[10] = v32;
    goto LABEL_14;
  }
  v27 = *(_BYTE **)(v3 + 120);
  if ( *(_BYTE *)(v3 + 402) == (_BYTE)v18 )
    v5[9] = v18;
  else
    Srb[9] = v18;
  if ( v27 != (_BYTE *)(v3 + 120) )
  {
    v28 = v27[40];
    if ( *(_BYTE *)(v3 + 402) != (_BYTE)v18 )
    {
      Srb[5] = v28;
      Srb[6] = v27[41];
      v21 = v27[42];
      goto LABEL_13;
    }
    v4[8] = v28;
    v4[9] = v27[41];
    v32 = v27[42];
    goto LABEL_71;
  }
  if ( *(_BYTE *)(v3 + 402) == (_BYTE)v18 )
  {
    *((_WORD *)v4 + 4) = 0;
    v4[10] = 0;
  }
  else
  {
    *(_WORD *)(Srb + 5) = 0;
    Srb[7] = 0;
  }
LABEL_14:
  KeInitializeEvent((PRKEVENT)(v7 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v7, (__int64)RaidXrbSignalCompletion);
  if ( Srb[2] == 40 )
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_c369078f75a73e763836dce6e3c993d4_Traceguids,
          v7,
          v16,
          *((_QWORD *)v16 + 13));
        v23 = WPP_GLOBAL_Control;
      }
      if ( v23 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v23->Timer) & 0x40) != 0 && BYTE1(v23->Timer) >= 4u )
      {
        v33 = (unsigned __int8)v4[10];
        v34 = 12;
        v35 = (unsigned __int8)v4[9];
        v36 = (unsigned __int8)v4[8];
LABEL_81:
        LODWORD(v38) = v33;
        LODWORD(v37) = v35;
        WPP_SF_ddd(
          (__int64)v23->AttachedDevice,
          v34,
          (__int64)&WPP_c369078f75a73e763836dce6e3c993d4_Traceguids,
          v36,
          v37,
          v38);
      }
    }
  }
  else
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xDu,
          (__int64)&WPP_c369078f75a73e763836dce6e3c993d4_Traceguids,
          v7,
          Srb,
          *((_QWORD *)Srb + 7));
        v23 = WPP_GLOBAL_Control;
      }
      if ( v23 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v23->Timer) & 0x40) != 0 && BYTE1(v23->Timer) >= 4u )
      {
        v33 = (unsigned __int8)Srb[7];
        v34 = 14;
        v35 = (unsigned __int8)Srb[6];
        v36 = (unsigned __int8)Srb[5];
        goto LABEL_81;
      }
    }
  }
  if ( v40 )
  {
    RaidUnitPoFxActivateComponent(v40, 0, 1u, &v42);
  }
  else if ( *(_QWORD *)(v3 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v3, 0LL, 1LL);
  }
  if ( *(_BYTE *)(v3 + 4450) )
    v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v3, v7);
  else
    v24 = RaidAdapterExecuteXrb(v3, (_QWORD *)v7, v22);
  v15 = v24;
  if ( v24 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 664), Executive, 0, 0, 0LL);
    v15 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( v40 )
  {
    if ( (*(_BYTE *)(v7 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v40, *(_DWORD *)(v7 + 748));
      *(_BYTE *)(v7 + 17) &= ~2u;
    }
    RaidUnitPoFxIdleComponent(v40, 0, 0, &v42);
  }
  else if ( *(_QWORD *)(v3 + 5088) )
  {
    if ( (*(_BYTE *)(v7 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(v3, *(unsigned int *)(v7 + 748));
      *(_BYTE *)(v7 + 17) &= ~1u;
    }
    RaidAdapterPoFxIdleComponent(v3, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v37) = v15;
    WPP_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xFu,
      (__int64)&WPP_c369078f75a73e763836dce6e3c993d4_Traceguids,
      v7,
      v37);
  }
  if ( v15 < 0 )
    goto LABEL_54;
  if ( Srb[2] == 40 )
    v25 = *((_DWORD *)v44 + 15);
  else
    v25 = *((_DWORD *)Srb + 4);
  *v43 = v25;
LABEL_35:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v7, 0, v12);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 402) == 1 )
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
  return (unsigned int)v15;
}
