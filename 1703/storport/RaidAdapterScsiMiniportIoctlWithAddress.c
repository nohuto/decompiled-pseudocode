/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0004B08 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0005500 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetSrbIoctlFromIrp @ 0x1C0004C6C (RaidGetSrbIoctlFromIrp.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C0006508 (RaSrbSetMiniportContext.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002F848 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidBuildMdlForXrb @ 0x1C005D704 (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  PVOID v8; // r12
  _BYTE *v9; // r14
  struct _KEVENT *v10; // r15
  _BYTE *Srb; // rdi
  char *v12; // rsi
  int SrbIoctlFromIrp; // eax
  int v14; // ebx
  __int64 v15; // rcx
  char v16; // r8
  __int64 v17; // rdx
  char *ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // dl
  char v24; // cl
  char v25; // al
  __int64 Unit; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-60h]
  PVOID BaseAddress; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+48h] [rbp-50h]
  __int64 v42[9]; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0LL;
  v39 = 0;
  v41 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Srb = 0LL;
  v12 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, v42, &v37, &v38, 2);
  v14 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(_BYTE *)(a1 + 402);
    v41 = a1 + 304;
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
    v12 = ContiguousIoResources + 16;
    RaidZeroXrb((__int64)(ContiguousIoResources + 16), v19, 0, 0LL);
    v20 = v42[0];
    if ( (int)RaidBuildMdlForXrb(v12, v42[0], v37) < 0 )
    {
      v8 = BaseAddress;
      goto LABEL_21;
    }
    v23 = a3;
    v24 = a4;
    v25 = a5;
    LOBYTE(v39) = a3;
    BYTE1(v39) = a4;
    BYTE2(v39) = a5;
    if ( a6 == 1 )
    {
      Unit = RaidAdapterFindUnit(a1, v39, v21, v22);
      v24 = a4;
      v10 = (struct _KEVENT *)Unit;
      v23 = a3;
      *((_QWORD *)v12 + 28) = Unit;
      v25 = a5;
    }
    if ( *(_BYTE *)(v41 + 98) == 1 )
    {
      v34 = *((unsigned int *)Srb + 13);
      v9 = Srb;
      *((_QWORD *)Srb + 12) = v12;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = 192;
      *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
      *((_DWORD *)Srb + 10) = *(_DWORD *)(v20 + 12);
      *((_DWORD *)Srb + 15) = v37;
      *((_QWORD *)Srb + 8) = v20;
      Srb[v34 + 8] = a3;
      Srb[v34 + 9] = a4;
      Srb[v34 + 10] = a5;
      *((_QWORD *)v12 + 21) = Srb;
      *((_QWORD *)v12 + 22) = *((_QWORD *)Srb + 10);
      v27 = *((_QWORD *)Srb + 8);
    }
    else
    {
      Srb[7] = v25;
      *((_DWORD *)Srb + 4) = v37;
      *((_QWORD *)Srb + 3) = v20;
      *(_WORD *)Srb = 88;
      *((_QWORD *)Srb + 6) = v12;
      Srb[2] = 2;
      Srb[5] = v23;
      Srb[6] = v24;
      *((_DWORD *)Srb + 3) = 192;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(v20 + 12);
      *((_QWORD *)v12 + 21) = Srb;
      *((_QWORD *)v12 + 22) = a2;
      v27 = *((_QWORD *)Srb + 3);
    }
    v8 = BaseAddress;
    *((_QWORD *)v12 + 23) = v27;
    RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v8 + 1072);
    KeInitializeEvent((PRKEVENT)(v12 + 664), NotificationEvent, 0);
    *((_QWORD *)v12 + 82) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxActivateComponent(a1, 0LL);
    if ( *(_BYTE *)(a1 + 4450) )
      v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v12);
    else
      v28 = RaidAdapterExecuteXrb(a1, v12);
    v14 = v28;
    if ( v28 >= 0 )
    {
      KeWaitForSingleObject(v12 + 664, Executive, 0, 0, 0LL);
      LOBYTE(v31) = Srb[3];
      v14 = RaidSrbStatusToNtStatus(v31);
    }
    if ( (v12[17] & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *((unsigned int *)v12 + 187));
      v12[17] &= ~1u;
    }
    if ( (v12[17] & 2) != 0 )
    {
      if ( a6 == 1 )
      {
        v36 = 0;
      }
      else
      {
        v35 = RaidAdapterFindUnit(a1, v39, v29, v30);
        v10 = (struct _KEVENT *)v35;
        v36 = v35 ? RaUnitAcquireRemoveLock(v35) : -1073741823;
      }
      if ( !v36 )
      {
        if ( v10 )
        {
          RaidUnitPoFxIdleComponentFromMiniport(v10, *((unsigned int *)v12 + 187));
          v12[17] &= ~2u;
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
    v33 = *((unsigned int *)v9 + 15);
  else
    v33 = *((unsigned int *)Srb + 4);
  if ( v38 < (unsigned int)v33 )
    v33 = v38;
  a2->IoStatus.Information = v33;
LABEL_22:
  if ( v8 )
  {
    RaidXrbDeallocateResources(v12, 0LL);
    MmFreeContiguousMemory(v8);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v41 + 98) == 1 )
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
