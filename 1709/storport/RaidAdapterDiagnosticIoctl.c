/*
 * XREFs of RaidAdapterDiagnosticIoctl @ 0x1C006667C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000E488 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001B194 (RaidFreeSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterDiagnosticIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v3; // r8
  _IRP *MasterIrp; // rdi
  int v5; // ebx
  _BYTE *Srb; // rsi
  unsigned int *v7; // r12
  __int64 v8; // r14
  size_t Length; // r13
  int MdlAddress_high; // eax
  int v13; // esi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned int *Pool; // rax
  char *v17; // r13
  __int64 v18; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  __int128 v26; // xmm0
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  unsigned int Size; // [rsp+78h] [rbp+10h]
  PVOID BaseAddress; // [rsp+80h] [rbp+18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  Srb = 0LL;
  BaseAddress = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_2;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x14 || (unsigned int)Length < 0x24 )
  {
    v5 = -1073741811;
LABEL_62:
    if ( BaseAddress )
    {
      RaidXrbDeallocateResources(v8, 0, v3);
      MmFreeContiguousMemory(BaseAddress);
    }
    goto LABEL_64;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 20
    || *(_DWORD *)(&MasterIrp->Size + 1) != 20
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 4
    || (int)MasterIrp->Flags >= 1 )
  {
LABEL_2:
    v5 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  if ( MdlAddress_high == 1 )
  {
    memset(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(GUID *)&MasterIrp->MdlAddress = GUID_DIAGNOSTIC_PROVIDER_STORPORT;
    if ( (unsigned int)Length >= 0x30030 )
    {
      LODWORD(MasterIrp->ThreadListEntry.Flink) = 196624;
      HIDWORD(MasterIrp->ThreadListEntry.Flink) = 1;
      LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 5060);
      HIDWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 5056);
      memmove(&MasterIrp->IoStatus, *(const void **)(a1 + 5064), 48LL * *(unsigned int *)(a1 + 5060));
      MasterIrp->AssociatedIrp.IrpCount = 196624;
      *(_DWORD *)(&MasterIrp->Size + 1) = 196656;
      a2->IoStatus.Information = 196656LL;
    }
    else
    {
      MasterIrp->AssociatedIrp.IrpCount = 196624;
      v5 = -2147483643;
      *(_DWORD *)(&MasterIrp->Size + 1) = 36;
      a2->IoStatus.Information = 36LL;
    }
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  if ( (unsigned int)(MdlAddress_high - 2) > 1 )
    return RaidCompleteRequestEx(a2, 0, v5);
  v13 = Length - 32;
  v14 = ((unsigned int)(Length - 32) + 47LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = v14 + 28;
  if ( v14 > 0xFFFFFFFF || v15 > 0xFFFFFFFF )
    goto LABEL_2;
  Pool = (unsigned int *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)v15, 0x72536152u, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
  {
    v5 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  Pool[5] = 0;
  Pool[4] = 1771776;
  *Pool = 28;
  Pool[3] = 10;
  Pool[6] = v15 - 28;
  memmove(Pool + 1, "STORDIAG", 8uLL);
  v17 = (char *)v7 + *v7;
  *(_DWORD *)v17 = 44;
  *((_DWORD *)v17 + 3) = MasterIrp->Flags;
  *((_DWORD *)v17 + 2) = HIDWORD(MasterIrp->MdlAddress);
  *((_DWORD *)v17 + 1) = v13 + 40;
  *((_DWORD *)v17 + 8) = v13;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 402), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1072,
                              v18,
                              (_QWORD *)a1);
    BaseAddress = (PVOID)ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v8 = ContiguousIoResources + 16;
      RaidZeroXrb(ContiguousIoResources + 16, v20, 0, 0LL);
      *(_QWORD *)(v8 + 176) = a2;
      *(_QWORD *)(v8 + 184) = v7;
      *(_QWORD *)(v8 + 168) = Srb;
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        *((_DWORD *)Srb + 15) = v15;
        *((_QWORD *)Srb + 12) = v8;
        *((_QWORD *)Srb + 10) = a2;
        *((_DWORD *)Srb + 5) = 2;
        *((_QWORD *)Srb + 8) = v7;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
        v21 = *((unsigned int *)Srb + 13);
        *(_WORD *)&Srb[v21 + 8] = 0;
        Srb[v21 + 10] = 0;
      }
      else
      {
        *((_DWORD *)Srb + 4) = v15;
        *(_WORD *)Srb = 88;
        *((_QWORD *)Srb + 6) = v8;
        Srb[2] = 2;
        *((_QWORD *)Srb + 3) = v7;
        *((_DWORD *)Srb + 3) = 256;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4204);
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)BaseAddress + 1072);
      KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
      if ( HIDWORD(MasterIrp->MdlAddress) == 3 && *(_QWORD *)(a1 + 5088) )
        RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Eu,
          (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4450) )
        v23 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v8);
      else
        v23 = RaidAdapterExecuteXrb(a1, (_QWORD *)v8, v22);
      v5 = v23;
      if ( v23 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
        v5 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( HIDWORD(MasterIrp->MdlAddress) == 3 )
      {
        if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v8 + 748));
          *(_BYTE *)(v8 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
      }
      if ( v5 < 0 )
      {
        a2->IoStatus.Information = 0LL;
      }
      else
      {
        memset(MasterIrp, 0, Size);
        *(_DWORD *)&MasterIrp->Type = 36;
        v24 = *((_DWORD *)v17 + 8);
        MasterIrp->AssociatedIrp.IrpCount = v24;
        v25 = v7[5];
        if ( v25 == 6 )
        {
          v26 = *((_OWORD *)v17 + 1);
          *(_DWORD *)(&MasterIrp->Size + 1) = 36;
          v5 = -2147483643;
          *(_OWORD *)&MasterIrp->MdlAddress = v26;
          a2->IoStatus.Information = 36LL;
          goto LABEL_62;
        }
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            v5 = -1073741789;
            goto LABEL_54;
          }
          if ( v25 > 3 )
          {
            if ( v25 == 4 )
            {
              v5 = -1073700864;
              goto LABEL_54;
            }
            if ( v25 != 5 )
            {
              v5 = -1073741823;
LABEL_54:
              a2->IoStatus.Information = 0LL;
              goto LABEL_62;
            }
          }
          v5 = -1073741811;
          goto LABEL_54;
        }
        *(_DWORD *)(&MasterIrp->Size + 1) = v24 + 32;
        *(_OWORD *)&MasterIrp->MdlAddress = *((_OWORD *)v17 + 1);
        memmove(&MasterIrp->ThreadListEntry, v17 + 40, *((unsigned int *)v17 + 8));
        a2->IoStatus.Information = (unsigned int)(*((_DWORD *)v17 + 8) + 32);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Fu,
          (__int64)&WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
          v5,
          Timeout);
      }
      goto LABEL_62;
    }
  }
  v5 = -1073741670;
LABEL_64:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
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
  return RaidCompleteRequestEx(a2, 0, v5);
}
