/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C0063F38
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C0063D54 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C0069364 (RaWmiIrpNormalRequest.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0004FF0 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00053A0 (RaidUnitPoFxIdleComponent.c)
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaidBuildMdlForXrb @ 0x1C0006174 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000E488 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B194 (RaidFreeSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00306D8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 *     WPP_SF_qD @ 0x1C0030A88 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C0030CC8 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rdi
  _BYTE *v5; // rbp
  _BYTE *v6; // r12
  ULONG v7; // r15d
  __int64 v8; // r14
  ULONG v9; // esi
  __int64 v10; // rdx
  _BYTE *Srb; // rbx
  __int64 v12; // r8
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rax
  _BYTE *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r15
  int v21; // r10d
  __int64 v22; // rcx
  char v23; // al
  char v24; // al
  __int64 v25; // r8
  PDEVICE_OBJECT v26; // rcx
  int v27; // eax
  int v28; // eax
  _BYTE *v30; // rcx
  char v31; // al
  __int64 v32; // r9
  char v33; // al
  int v34; // eax
  unsigned __int16 v35; // dx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  PVOID BaseAddress; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  char v43; // [rsp+98h] [rbp+10h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+18h]
  _BYTE *v45; // [rsp+A8h] [rbp+20h]

  v44 = a3;
  v3 = *(_QWORD *)(a1 + 64);
  BaseAddress = 0LL;
  v5 = 0LL;
  v45 = 0LL;
  v6 = 0LL;
  if ( *(_DWORD *)v3 == 1 )
  {
    v41 = v3;
    v3 = *(_QWORD *)(v3 + 24);
  }
  else
  {
    v41 = 0LL;
  }
  v7 = *(_DWORD *)(a3 + 16);
  v8 = 0LL;
  if ( a2 == 9 )
  {
    v9 = **(_DWORD **)(a3 + 24);
    if ( v7 > v9 )
      v9 = *(_DWORD *)(a3 + 16);
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 16);
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0x17u, *(_BYTE *)(v3 + 402), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v3 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                  v10,
                                  (_QWORD *)v3),
        (BaseAddress = (PVOID)ContiguousIoResources) == 0LL) )
  {
    v16 = -1073741801;
    goto LABEL_54;
  }
  v8 = ContiguousIoResources + 16;
  RaidZeroXrb(ContiguousIoResources + 16, v14, 0, 0LL);
  v15 = v44;
  *(_QWORD *)(v8 + 176) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v8 + 168) = Srb;
  v16 = RaidBuildMdlForXrb(v8, *(void **)(v15 + 24), v9);
  if ( v16 < 0 )
  {
LABEL_54:
    *(_DWORD *)(v44 + 16) = 0;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v3 + 402) == 1 )
  {
    v18 = Srb;
    v32 = v44;
    v5 = &Srb[*((unsigned int *)Srb + 13)];
    *((_QWORD *)Srb + 12) = v8;
    *((_DWORD *)Srb + 5) = 23;
    v45 = Srb;
    *((_QWORD *)Srb + 8) = *(_QWORD *)(v32 + 24);
    *((_DWORD *)Srb + 15) = v7;
    v20 = v32;
    *((_DWORD *)Srb + 6) = 320;
    *((_DWORD *)Srb + 10) = 10;
    v6 = &Srb[*((unsigned int *)Srb + 30)];
    *(_DWORD *)v6 = 96;
    *((_DWORD *)v6 + 1) = 16;
    v6[8] = a2;
    *((_QWORD *)v6 + 2) = *(_QWORD *)(v32 + 8);
    *(_QWORD *)(v8 + 184) = *((_QWORD *)Srb + 8);
  }
  else
  {
    v17 = v44;
    v18 = 0LL;
    *((_QWORD *)Srb + 6) = v8;
    Srb[2] = 23;
    v19 = *(_QWORD *)(v17 + 24);
    *((_DWORD *)Srb + 4) = v7;
    v20 = v44;
    *((_QWORD *)Srb + 3) = v19;
    *(_WORD *)Srb = 88;
    Srb[4] = a2;
    *((_QWORD *)Srb + 4) = *(_QWORD *)(v20 + 8);
    *((_DWORD *)Srb + 3) = 320;
    *((_DWORD *)Srb + 5) = 10;
    *(_QWORD *)(v8 + 184) = v19;
  }
  RaSrbSetMiniportContext(v3, (__int64)Srb, (__int64)BaseAddress + 1072);
  v22 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v22 == v21 )
  {
    v23 = *(_BYTE *)(v22 + 88);
    if ( *(_BYTE *)(v3 + 402) != (_BYTE)v21 )
    {
      Srb[5] = v23;
      Srb[6] = *(_BYTE *)(v22 + 89);
      v24 = *(_BYTE *)(v22 + 90);
LABEL_13:
      Srb[7] = v24;
      goto LABEL_14;
    }
    v5[8] = v23;
    v5[9] = *(_BYTE *)(v22 + 89);
    v33 = *(_BYTE *)(v22 + 90);
LABEL_71:
    v5[10] = v33;
    goto LABEL_14;
  }
  v30 = *(_BYTE **)(v3 + 120);
  if ( *(_BYTE *)(v3 + 402) == (_BYTE)v21 )
    v6[9] = v21;
  else
    Srb[9] = v21;
  if ( v30 != (_BYTE *)(v3 + 120) )
  {
    v31 = v30[40];
    if ( *(_BYTE *)(v3 + 402) != (_BYTE)v21 )
    {
      Srb[5] = v31;
      Srb[6] = v30[41];
      v24 = v30[42];
      goto LABEL_13;
    }
    v5[8] = v31;
    v5[9] = v30[41];
    v33 = v30[42];
    goto LABEL_71;
  }
  if ( *(_BYTE *)(v3 + 402) == (_BYTE)v21 )
  {
    *((_WORD *)v5 + 4) = 0;
    v5[10] = 0;
  }
  else
  {
    *(_WORD *)(Srb + 5) = 0;
    Srb[7] = 0;
  }
LABEL_14:
  KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
  if ( Srb[2] == 40 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_67440e9dbdf73f97efe5d53dbc1086ca_Traceguids,
          v8,
          v18,
          *((_QWORD *)v18 + 13));
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        v34 = (unsigned __int8)v5[10];
        v35 = 12;
        v36 = (unsigned __int8)v5[9];
        v37 = (unsigned __int8)v5[8];
LABEL_81:
        LODWORD(v39) = v34;
        LODWORD(v38) = v36;
        WPP_SF_ddd(
          (__int64)v26->AttachedDevice,
          v35,
          (__int64)&WPP_67440e9dbdf73f97efe5d53dbc1086ca_Traceguids,
          v37,
          v38,
          v39);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_67440e9dbdf73f97efe5d53dbc1086ca_Traceguids,
        v8,
        Srb,
        *((_QWORD *)Srb + 7));
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v34 = (unsigned __int8)Srb[7];
      v35 = 14;
      v36 = (unsigned __int8)Srb[6];
      v37 = (unsigned __int8)Srb[5];
      goto LABEL_81;
    }
  }
  if ( v41 )
  {
    RaidUnitPoFxActivateComponent(v41, 0, 1u, &v43);
  }
  else if ( *(_QWORD *)(v3 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v3, 0LL, 1LL);
  }
  if ( *(_BYTE *)(v3 + 4450) )
    v27 = RaidAdapterRaiseIrqlAndExecuteXrb(v3, v8);
  else
    v27 = RaidAdapterExecuteXrb(v3, (_QWORD *)v8, v25);
  v16 = v27;
  if ( v27 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
    v16 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( v41 )
  {
    if ( (*(_BYTE *)(v8 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v41, *(_DWORD *)(v8 + 748));
      *(_BYTE *)(v8 + 17) &= ~2u;
    }
    RaidUnitPoFxIdleComponent(v41, 0, 0, &v43);
  }
  else if ( *(_QWORD *)(v3 + 5088) )
  {
    if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(v3, *(unsigned int *)(v8 + 748));
      *(_BYTE *)(v8 + 17) &= ~1u;
    }
    RaidAdapterPoFxIdleComponent(v3, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v38) = v16;
    WPP_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xFu,
      (__int64)&WPP_67440e9dbdf73f97efe5d53dbc1086ca_Traceguids,
      v8,
      v38);
  }
  if ( v16 < 0 )
    goto LABEL_54;
  if ( Srb[2] == 40 )
    v28 = *((_DWORD *)v45 + 15);
  else
    v28 = *((_DWORD *)Srb + 4);
  *(_DWORD *)(v20 + 16) = v28;
LABEL_35:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v8, 0, v12);
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
  return (unsigned int)v16;
}
