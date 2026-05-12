/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C0060A04
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C00608E4 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C0067514 (RaWmiIrpNormalRequest.c)
 * Callees:
 *     RaidXrbSetCompletionRoutine @ 0x1C0003624 (RaidXrbSetCompletionRoutine.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006534 (RaidUnitPoFxActivateComponent.c)
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
 *     RaidFreeSrb @ 0x1C0012210 (RaidFreeSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0026AA8 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002BBD8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 *     WPP_SF_qD @ 0x1C002C15C (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C002C39C (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  _BYTE *v4; // r14
  _BYTE *v5; // r13
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  ULONG v9; // ebp
  int v10; // edx
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ebp
  _BYTE *v16; // rbp
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // rcx
  char v20; // r9
  int v21; // r10d
  __int64 v22; // rcx
  char v23; // al
  char v24; // al
  __int64 v25; // r8
  PDEVICE_OBJECT v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v30; // rdx
  char v31; // al
  _BYTE *v32; // rcx
  char v33; // al
  char v34; // dl
  int v35; // eax
  unsigned __int16 v36; // dx
  int v37; // r8d
  int v38; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  char v43; // [rsp+98h] [rbp+10h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+18h]
  _BYTE *v45; // [rsp+A8h] [rbp+20h]

  v44 = a3;
  v43 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  v41 = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)v3 == 1 )
    v6 = *(_QWORD *)(v3 + 24);
  else
    v6 = v3;
  v7 = *(_DWORD *)(a3 + 16);
  v8 = 0LL;
  if ( *(_DWORD *)v3 != 1 )
    v3 = 0LL;
  v9 = *(_DWORD *)(a3 + 16);
  if ( a2 == 9 && v7 <= **(_DWORD **)(a3 + 24) )
    v9 = **(_DWORD **)(a3 + 24);
  Srb = RaidAllocateSrb(*(_QWORD *)(v6 + 8), 0x17u, *(_BYTE *)(v6 + 402), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v6 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                  v10,
                                  v6),
        (v41 = ContiguousIoResources) == 0) )
  {
    v15 = -1073741801;
    goto LABEL_33;
  }
  v8 = ContiguousIoResources + 32;
  RaidZeroXrb(ContiguousIoResources + 32, v13, 0, 0LL);
  *(_QWORD *)(v8 + 176) = *((_QWORD *)Srb + 6);
  v14 = v44;
  *(_QWORD *)(v8 + 168) = Srb;
  v15 = RaidBuildMdlForXrb(v8, *(void **)(v14 + 24), v9);
  if ( v15 >= 0 )
  {
    if ( *(_BYTE *)(v6 + 402) == 1 )
    {
      v16 = Srb;
      v17 = v44;
      v4 = &Srb[*((unsigned int *)Srb + 13)];
      *((_QWORD *)Srb + 12) = v8;
      *((_DWORD *)Srb + 5) = 23;
      v45 = Srb;
      *((_QWORD *)Srb + 8) = *(_QWORD *)(v17 + 24);
      v18 = v43;
      *((_DWORD *)Srb + 15) = v7;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      v5 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v5 = 96;
      *((_DWORD *)v5 + 1) = 16;
      v5[8] = v18;
      *((_QWORD *)v5 + 2) = *(_QWORD *)(v17 + 8);
      v19 = *((_QWORD *)Srb + 8);
    }
    else
    {
      v30 = v44;
      *((_QWORD *)Srb + 6) = v8;
      v16 = 0LL;
      Srb[2] = 23;
      v19 = *(_QWORD *)(v30 + 24);
      *(_WORD *)Srb = 88;
      Srb[4] = v43;
      *((_QWORD *)Srb + 3) = v19;
      *((_DWORD *)Srb + 4) = v7;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(v30 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v8 + 184) = v19;
    RaSrbSetMiniportContext(v6, (__int64)Srb, v41 + 1088);
    v22 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v22 == v21 )
    {
      v23 = *(_BYTE *)(v22 + 88);
      if ( *(_BYTE *)(v6 + 402) == (_BYTE)v21 )
      {
        v4[8] = v23;
        v4[9] = *(_BYTE *)(v22 + 89);
        v24 = *(_BYTE *)(v22 + 90);
LABEL_14:
        v4[10] = v24;
        goto LABEL_15;
      }
      Srb[5] = v23;
      Srb[6] = *(_BYTE *)(v22 + 89);
      v31 = *(_BYTE *)(v22 + 90);
    }
    else
    {
      v32 = *(_BYTE **)(v6 + 120);
      if ( *(_BYTE *)(v6 + 402) == (_BYTE)v21 )
        v5[9] = v21;
      else
        Srb[9] = v21;
      v33 = *(_BYTE *)(v6 + 402);
      if ( v32 == (_BYTE *)(v6 + 120) )
      {
        if ( v33 == (_BYTE)v21 )
        {
          *((_WORD *)v4 + 4) = 0;
          v4[10] = v20;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          Srb[7] = v20;
        }
LABEL_15:
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
        if ( Srb[2] == 40 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
              v8,
              v16,
              *((_QWORD *)v16 + 13));
          v26 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v35 = (unsigned __int8)v4[10];
          v36 = 12;
          v37 = (unsigned __int8)v4[9];
          v38 = (unsigned __int8)v4[8];
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
            goto LABEL_20;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
              v8,
              Srb,
              *((_QWORD *)Srb + 7));
          v26 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            goto LABEL_20;
          }
          v35 = (unsigned __int8)Srb[7];
          v36 = 14;
          v37 = (unsigned __int8)Srb[6];
          v38 = (unsigned __int8)Srb[5];
        }
        LODWORD(v40) = v35;
        LODWORD(Timeout) = v37;
        WPP_SF_ddd(
          (__int64)v26->AttachedDevice,
          v36,
          (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
          v38,
          Timeout,
          v40);
LABEL_20:
        if ( v3 )
        {
          RaidUnitPoFxActivateComponent(v3, 0, 1LL, &v43);
        }
        else if ( *(_QWORD *)(v6 + 5088) )
        {
          RaidAdapterPoFxActivateComponent(v6, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v6 + 4450) )
          v27 = RaidAdapterRaiseIrqlAndExecuteXrb(v6, v8);
        else
          v27 = RaidAdapterExecuteXrb(v6, (_QWORD *)v8, v25);
        v15 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
          v15 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v3 )
        {
          if ( (*(_BYTE *)(v8 + 17) & 2) != 0 )
          {
            RaidUnitPoFxIdleComponentFromMiniport(v3, *(_DWORD *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~2u;
          }
          RaidUnitPoFxIdleComponent(v3, 0, 0, &v43);
        }
        else if ( *(_QWORD *)(v6 + 5088) )
        {
          if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(v6, *(unsigned int *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~1u;
          }
          RaidAdapterPoFxIdleComponent(v6, 0LL, 0LL);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(Timeout) = v15;
          WPP_SF_qD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xFu,
            (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
            v8,
            Timeout);
        }
        goto LABEL_32;
      }
      v34 = v32[40];
      if ( v33 == (_BYTE)v21 )
      {
        v4[8] = v34;
        v4[9] = v32[41];
        v24 = v32[42];
        goto LABEL_14;
      }
      Srb[5] = v34;
      Srb[6] = v32[41];
      v31 = v32[42];
    }
    Srb[7] = v31;
    goto LABEL_15;
  }
LABEL_32:
  if ( v15 < 0 )
  {
LABEL_33:
    v28 = 0;
    goto LABEL_34;
  }
  if ( Srb[2] == 40 )
    v28 = *((_DWORD *)v45 + 15);
  else
    v28 = *((_DWORD *)Srb + 4);
LABEL_34:
  *(_DWORD *)(v44 + 16) = v28;
  if ( v41 )
  {
    RaidXrbDeallocateResources(v8, 0);
    StorFreeContiguousIoResources(v6, v41);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v6 + 402) == 1 )
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
