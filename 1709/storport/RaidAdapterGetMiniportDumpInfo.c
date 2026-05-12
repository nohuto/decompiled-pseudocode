/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C0067438 (RaidAdapterPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000E488 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B194 (RaidFreeSrb.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_qD @ 0x1C0030A88 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  unsigned int v6; // ebx
  _BYTE *v7; // r13
  _QWORD *v9; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edi
  _DWORD *Pool; // rax
  _DWORD *v16; // rsi
  int v17; // edi
  int v18; // r9d
  _QWORD *v19; // r8
  _BYTE *v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v28; // rbp
  int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  char v35; // [rsp+78h] [rbp+10h]
  PVOID BaseAddress; // [rsp+80h] [rbp+18h]

  v5 = (_QWORD *)(a3 + 24);
  v6 = 0;
  v7 = 0LL;
  v35 = 0;
  v9 = *(_QWORD **)(a3 + 24);
  *a5 = 0LL;
  while ( v9 != v5 )
  {
    v11 = v9 + 6;
    v9 = (_QWORD *)*v9;
    v12 = *v11;
    v13 = v6 + 1;
    if ( v12 != a4 )
      v13 = v6;
    v6 = v13;
  }
  if ( 16 * ((unsigned __int64)v6 + 1) <= 0x18 )
    v14 = 24;
  else
    v14 = 16 * (v6 + 1);
  Pool = RaidAllocatePool(NonPagedPoolNx, v14, 0x44436152u, *(_QWORD *)(a2 + 8));
  v16 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, v14);
  v16[2] = 1196246089;
  *v16 = 32;
  v18 = 0;
  v16[1] = 32;
  v16[3] = v6;
  v19 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    do
    {
      if ( v19[6] == a4 )
      {
        v20 = (_BYTE *)v19[5];
        v21 = &v16[4 * v18++ + 4];
        *(_WORD *)v21 = 1;
        v21[1] = 4;
        *((_BYTE *)v21 + 8) = v20[66];
        *((_BYTE *)v21 + 9) = v20[67];
        *((_BYTE *)v21 + 10) = v20[68];
      }
      v19 = (_QWORD *)*v19;
    }
    while ( v19 != v5 );
    v7 = 0LL;
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(a2 + 8), 0x2Au, *(_BYTE *)(a2 + 402), 0);
  if ( !Srb )
  {
    v17 = -1073741670;
    goto LABEL_22;
  }
  ContiguousIoResources = StorAllocateContiguousIoResources(
                            ((*(_DWORD *)(a2 + 444) + 7) & 0xFFFFFFF8) + 1072,
                            v22,
                            (_QWORD *)a2);
  BaseAddress = (PVOID)ContiguousIoResources;
  v26 = ContiguousIoResources;
  if ( ContiguousIoResources )
  {
    v28 = ContiguousIoResources + 16;
    RaidZeroXrb(ContiguousIoResources + 16, v25, 0, 0LL);
    *(_BYTE *)(v28 + 17) |= 8u;
    *(_QWORD *)(v28 + 176) = a1;
    *(_QWORD *)(v28 + 184) = v16;
    *(_QWORD *)(v28 + 168) = Srb;
    if ( *(_BYTE *)(a2 + 402) == 1 )
    {
      *((_DWORD *)Srb + 5) = 42;
      v7 = Srb;
      *((_QWORD *)Srb + 12) = v28;
      *((_DWORD *)Srb + 6) = 256;
      *((_QWORD *)Srb + 10) = a1;
      *((_QWORD *)Srb + 8) = v16;
      *((_DWORD *)Srb + 15) = v14;
      *((_DWORD *)Srb + 10) = 10;
      v35 = 1;
      if ( !*(_BYTE *)(a2 + 4450) )
        *((_DWORD *)Srb + 6) = 192;
    }
    else
    {
      Srb[2] = 42;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 3) = 256;
      v29 = 256;
      *((_QWORD *)Srb + 6) = v28;
      *((_QWORD *)Srb + 3) = v16;
      *((_DWORD *)Srb + 4) = v14;
      *((_DWORD *)Srb + 5) = 10;
      if ( !*(_BYTE *)(a2 + 4450) )
        v29 = 192;
      *((_DWORD *)Srb + 3) = v29;
    }
    RaSrbSetMiniportContext(a2, (__int64)Srb, v26 + 1072);
    KeInitializeEvent((PRKEVENT)(v28 + 664), NotificationEvent, 0);
    RaidXrbSetCompletionRoutine(v28, (__int64)RaidXrbSignalCompletion);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x49u,
        (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
        v28,
        Srb);
    }
    if ( *(_BYTE *)(a2 + 4450) )
      v31 = RaidAdapterRaiseIrqlAndExecuteXrb(a2, v28);
    else
      v31 = RaidAdapterExecuteXrb(a2, (_QWORD *)v28, v30);
    v17 = v31;
    if ( v31 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v28 + 664), Executive, 0, 0, 0LL);
      v17 = RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      LODWORD(Timeout) = (unsigned __int8)Srb[3];
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x4Au,
        (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
        v17,
        Timeout);
    }
    if ( v17 < 0 )
    {
      if ( *(_BYTE *)(a2 + 4450) || Srb[3] == 6 )
      {
        v17 = 0;
      }
      else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = v17;
        WPP_SF_qD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Bu,
          (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
          v28,
          Timeout);
      }
    }
    else if ( *v16 >= 0x18u && v16[2] == 1297105993 )
    {
      *a5 = v16;
      v16 = 0LL;
    }
    else
    {
      v17 = -1073739509;
    }
    RaidXrbDeallocateResources(v28, 0, v32);
    MmFreeContiguousMemory(BaseAddress);
    if ( v35 == 1 )
    {
      if ( !v7 )
        v7 = Srb;
      *((_QWORD *)v7 + 10) = 0LL;
      *((_QWORD *)v7 + 13) = 0LL;
      goto LABEL_21;
    }
  }
  else
  {
    v17 = -1073741670;
  }
  *((_QWORD *)Srb + 6) = 0LL;
  *((_QWORD *)Srb + 7) = 0LL;
LABEL_21:
  RaidFreeSrb(Srb);
LABEL_22:
  if ( v16 )
    ExFreePoolWithTag(v16, 0x44436152u);
  return (unsigned int)v17;
}
