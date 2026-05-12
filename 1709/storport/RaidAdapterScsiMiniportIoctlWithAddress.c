/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0005308 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetSrbIoctlFromIrp @ 0x1C000546C (RaidGetSrbIoctlFromIrp.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C00058A4 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C00060F8 (StorAllocateContiguousIoResources.c)
 *     RaidBuildMdlForXrb @ 0x1C0006174 (RaidBuildMdlForXrb.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00306D8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  PVOID v8; // r12
  _BYTE *v9; // r14
  __int64 v10; // r15
  _BYTE *Srb; // rdi
  __int64 v12; // rsi
  int SrbIoctlFromIrp; // eax
  int v14; // ebx
  __int64 v15; // rcx
  char v16; // r8
  __int64 v17; // rdx
  char *ContiguousIoResources; // rax
  __int64 v19; // rdx
  _DWORD *v20; // r12
  char v21; // al
  char v22; // dl
  char v23; // cl
  __int64 Unit; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  ULONG v33; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-60h]
  PVOID BaseAddress; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+48h] [rbp-50h]
  _DWORD *v38; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0LL;
  v35 = 0;
  v37 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Srb = 0LL;
  v12 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, &v38, &v33, &v34, 2);
  v14 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(_BYTE *)(a1 + 402);
    v37 = a1 + 304;
    Srb = RaidAllocateSrb(v15, 2u, v16, 0);
    if ( !Srb )
      goto LABEL_21;
    ContiguousIoResources = (char *)StorAllocateContiguousIoResources(
                                      ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1072,
                                      v17,
                                      (_QWORD *)a1);
    BaseAddress = ContiguousIoResources;
    if ( !ContiguousIoResources )
    {
      v8 = 0LL;
      goto LABEL_21;
    }
    v12 = (__int64)(ContiguousIoResources + 16);
    RaidZeroXrb(ContiguousIoResources + 16, v19, 0LL, 0LL);
    v20 = v38;
    if ( (int)RaidBuildMdlForXrb(v12, v38, v33) < 0 )
    {
      v8 = BaseAddress;
      goto LABEL_21;
    }
    v21 = a5;
    v22 = a3;
    v23 = a4;
    BYTE2(v35) = a5;
    LOBYTE(v35) = a3;
    BYTE1(v35) = a4;
    if ( a6 == 1 )
    {
      Unit = RaidAdapterFindUnit(a1, v35);
      v23 = a4;
      v10 = Unit;
      v22 = a3;
      *(_QWORD *)(v12 + 224) = Unit;
      v21 = a5;
    }
    if ( *(_BYTE *)(v37 + 98) == 1 )
    {
      v30 = *((unsigned int *)Srb + 13);
      v9 = Srb;
      *((_QWORD *)Srb + 12) = v12;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = 192;
      *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
      *((_DWORD *)Srb + 10) = v20[3];
      *((_DWORD *)Srb + 15) = v33;
      *((_QWORD *)Srb + 8) = v20;
      Srb[v30 + 8] = a3;
      Srb[v30 + 9] = a4;
      Srb[v30 + 10] = a5;
      *(_QWORD *)(v12 + 168) = Srb;
      *(_QWORD *)(v12 + 176) = *((_QWORD *)Srb + 10);
      v25 = *((_QWORD *)Srb + 8);
    }
    else
    {
      Srb[7] = v21;
      *((_DWORD *)Srb + 4) = v33;
      *((_QWORD *)Srb + 3) = v20;
      *(_WORD *)Srb = 88;
      *((_QWORD *)Srb + 6) = v12;
      Srb[2] = 2;
      Srb[5] = v22;
      Srb[6] = v23;
      *((_DWORD *)Srb + 3) = 192;
      *((_DWORD *)Srb + 5) = v20[3];
      *(_QWORD *)(v12 + 168) = Srb;
      *(_QWORD *)(v12 + 176) = a2;
      v25 = *((_QWORD *)Srb + 3);
    }
    v8 = BaseAddress;
    *(_QWORD *)(v12 + 184) = v25;
    RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v8 + 1072);
    KeInitializeEvent((PRKEVENT)(v12 + 664), NotificationEvent, 0);
    *(_QWORD *)(v12 + 656) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxActivateComponent(a1, 0LL);
    if ( *(_BYTE *)(a1 + 4450) )
      v26 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v12);
    else
      v26 = RaidAdapterExecuteXrb(a1, v12);
    v14 = v26;
    if ( v26 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v12 + 664), Executive, 0, 0, 0LL);
      LOBYTE(v27) = Srb[3];
      v14 = RaidSrbStatusToNtStatus(v27);
    }
    if ( (*(_BYTE *)(v12 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v12 + 748));
      *(_BYTE *)(v12 + 17) &= ~1u;
    }
    if ( (*(_BYTE *)(v12 + 17) & 2) != 0 )
    {
      if ( a6 == 1 )
      {
        v32 = 0;
      }
      else
      {
        v31 = RaidAdapterFindUnit(a1, v35);
        v10 = v31;
        v32 = v31 ? RaUnitAcquireRemoveLock(v31) : -1073741823;
      }
      if ( !v32 )
      {
        if ( v10 )
        {
          RaidUnitPoFxIdleComponentFromMiniport(v10, *(unsigned int *)(v12 + 748));
          *(_BYTE *)(v12 + 17) &= ~2u;
          if ( a6 != 1 )
            RaUnitReleaseRemoveLock(v10);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  }
  if ( v14 < 0 )
  {
LABEL_21:
    a2->IoStatus.Information = 0LL;
    goto LABEL_22;
  }
  if ( Srb[2] == 40 )
    v29 = *((unsigned int *)v9 + 15);
  else
    v29 = *((unsigned int *)Srb + 4);
  if ( v34 < (unsigned int)v29 )
    v29 = v34;
  a2->IoStatus.Information = v29;
LABEL_22:
  if ( v8 )
  {
    RaidXrbDeallocateResources(v12, 0LL);
    MmFreeContiguousMemory(v8);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v37 + 98) == 1 )
    {
      if ( !v9 )
        v9 = Srb;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2);
}
