/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x1C0065184
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000E228 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B554 (RaidFreeSrb.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_DD @ 0x1C0031680 (WPP_SF_DD.c)
 */

__int64 __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, IRP *a2)
{
  unsigned int *MasterIrp; // rbx
  __int64 v3; // r8
  __int64 v4; // r12
  _BYTE *Srb; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int *v7; // r14
  __int64 v8; // rbp
  int v11; // edi
  unsigned int Options; // ecx
  unsigned int Length; // edx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r12
  unsigned int *Pool; // rax
  __int64 v20; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  _BYTE *v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+70h] [rbp+8h]
  PVOID BaseAddress; // [rsp+78h] [rbp+10h]
  _DWORD *v31; // [rsp+80h] [rbp+18h]

  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  v8 = 0LL;
  BaseAddress = 0LL;
  v29 = v4;
  if ( !MasterIrp )
    goto LABEL_2;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x60 || (Length = CurrentStackLocation->Parameters.Read.Length, Length < 0x60) )
  {
    v11 = -1073741811;
LABEL_48:
    if ( BaseAddress )
    {
      RaidXrbDeallocateResources(v8, 0, v3);
      MmFreeContiguousMemory(BaseAddress);
    }
    goto LABEL_50;
  }
  v11 = 0;
  if ( MasterIrp[10] )
  {
    MasterIrp[10] = 9;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( MasterIrp[1] != 1 )
  {
    MasterIrp[10] = 4;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( *((_QWORD *)MasterIrp + 2) != *(_QWORD *)"STORDIAG" )
  {
    MasterIrp[10] = 8;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  v14 = *MasterIrp;
  if ( *MasterIrp > Options || v14 > Length )
  {
    MasterIrp[10] = 7;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( MasterIrp[14] )
  {
    MasterIrp[14] = 9;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  v15 = MasterIrp[16];
  if ( (_DWORD)v15 )
  {
    v16 = MasterIrp[15];
    if ( v16 < 0x60 || v16 > v14 - (unsigned int)v15 )
      goto LABEL_17;
  }
  else if ( MasterIrp[15] )
  {
LABEL_17:
    MasterIrp[14] = 7;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  v17 = (v15 + 43) & 0xFFFFFFFFFFFFFFF8uLL;
  v18 = v17 + 28;
  if ( v17 > 0xFFFFFFFF || v18 > 0xFFFFFFFF )
  {
LABEL_2:
    v11 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  Pool = (unsigned int *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)v18, 0x72536152u, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
  {
    v11 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  Pool[4] = 1771776;
  *Pool = 28;
  Pool[5] = 0;
  Pool[6] = v17;
  Pool[3] = 10;
  memmove(Pool + 1, "STORDIAG", 8uLL);
  v31 = (unsigned int *)((char *)v7 + *v7);
  *v31 = v17;
  v31[1] = 1;
  v31[2] = MasterIrp[2];
  v31[3] = 0;
  v31[4] = MasterIrp[3];
  v31[7] = MasterIrp[16];
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v29 + 402), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v29 + 444) + 7) & 0xFFFFFFF8) + 1072,
                              v20,
                              (_QWORD *)v29);
    BaseAddress = (PVOID)ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v8 = ContiguousIoResources + 16;
      RaidZeroXrb(ContiguousIoResources + 16, v22, 0, 0LL);
      *(_QWORD *)(v8 + 176) = a2;
      *(_QWORD *)(v8 + 184) = v7;
      *(_QWORD *)(v8 + 168) = Srb;
      if ( *(_BYTE *)(v29 + 402) == 1 )
      {
        v23 = *((unsigned int *)Srb + 13);
        *((_DWORD *)Srb + 15) = v18;
        v24 = &Srb[v23];
        *((_QWORD *)Srb + 12) = v8;
        *((_DWORD *)Srb + 6) = 256;
        *((_QWORD *)Srb + 10) = a2;
        *((_QWORD *)Srb + 8) = v7;
        *((_DWORD *)Srb + 10) = 10;
        *((_WORD *)v24 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        v24[8] = *(_BYTE *)(a1 + 88);
        v24[9] = *(_BYTE *)(a1 + 89);
        v24[10] = *(_BYTE *)(a1 + 90);
      }
      else
      {
        *((_DWORD *)Srb + 4) = v18;
        *((_QWORD *)Srb + 6) = v8;
        *((_DWORD *)Srb + 3) = 256;
        Srb[2] = 2;
        *((_QWORD *)Srb + 3) = v7;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 5) = 10;
        Srb[5] = *(_BYTE *)(a1 + 88);
        Srb[6] = *(_BYTE *)(a1 + 89);
        Srb[7] = *(_BYTE *)(a1 + 90);
      }
      RaSrbSetMiniportContext(v29, (__int64)Srb, (__int64)BaseAddress + 1072);
      KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Au,
          (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(v29 + 4450) )
        v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v29, v8);
      else
        v26 = RaidAdapterExecuteXrb(v29, (_QWORD *)v8, v25);
      v11 = v26;
      if ( v26 < 0
        || (KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL),
            v11 = RaidSrbStatusToNtStatus(Srb[3]),
            v11 < 0) )
      {
        a2->IoStatus.Information = 0LL;
      }
      else
      {
        MasterIrp[16] = v31[7];
        MasterIrp[14] = v31[3];
        if ( v31[3] == 1 )
          memmove((char *)MasterIrp + MasterIrp[15], v31 + 8, (unsigned int)v31[7]);
        a2->IoStatus.Information = *MasterIrp;
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Bu,
          (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
          v11,
          Timeout);
      }
      v4 = v29;
      goto LABEL_48;
    }
  }
  v4 = v29;
  v11 = -1073741670;
LABEL_50:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v4 + 402) == 1 )
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
  return RaidCompleteRequestEx(a2, 0, v11);
}
